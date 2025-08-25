`include "VX_define.vh"

module VX_alu_dot8 #(
    parameter `STRING INSTANCE_ID = "",
    parameter NUM_LANES = 1
) (
    input wire          clk,
    input wire          reset,

    // Inputs
    VX_execute_if.slave execute_if,

    // Outputs
    VX_commit_if.master commit_if
);
    `UNUSED_SPARAM (INSTANCE_ID)
    localparam PID_BITS = `CLOG2(`NUM_THREADS / NUM_LANES);
    localparam PID_WIDTH = `UP(PID_BITS);
    localparam TAG_WIDTH = `UUID_WIDTH + `NW_WIDTH + NUM_LANES + `PC_BITS + `NR_BITS + 1 + PID_WIDTH + 1 + 1;
    localparam LATENCY_DOT8 = `LATENCY_DOT8;
    localparam PE_RATIO = 2;
    localparam NUM_PES = `UP(NUM_LANES / PE_RATIO);

    `UNUSED_VAR (execute_if.data.op_type)
    `UNUSED_VAR (execute_if.data.tid)
    `UNUSED_VAR (execute_if.data.rs3_data)

    wire [NUM_LANES-1:0][2*`XLEN-1:0] data_in;

    for (genvar i = 0; i < NUM_LANES; ++i) begin : g_data_in_dot8
        assign data_in[i][0 +: `XLEN] = execute_if.data.rs1_data[i];
        assign data_in[i][`XLEN +: `XLEN] = execute_if.data.rs2_data[i];
    end

    wire pe_enable;
    wire [NUM_PES-1:0][2*`XLEN-1:0] pe_data_in;
    wire [NUM_PES-1:0][`XLEN-1:0] pe_data_out;

    // PEs time-multiplexing
    VX_pe_serializer #(
        .NUM_LANES  (NUM_LANES),
        .NUM_PES    (NUM_PES),
        .LATENCY    (LATENCY_DOT8),
        .DATA_IN_WIDTH (2*`XLEN),
        .DATA_OUT_WIDTH (`XLEN),
        .TAG_WIDTH  (TAG_WIDTH),
        .PE_REG     (1)
    ) pe_serializer (
        .clk        (clk),
        .reset      (reset),
        .valid_in   (execute_if.valid),
        .data_in    (data_in),
        .tag_in     ({
            execute_if.data.uuid,
            execute_if.data.wid,
            execute_if.data.tmask,
            execute_if.data.PC,
            execute_if.data.rd,
            execute_if.data.wb,
            execute_if.data.pid,
            execute_if.data.sop,
            execute_if.data.eop
        }),
        .ready_in   (execute_if.ready),
        .pe_enable  (pe_enable),
        .pe_data_in (pe_data_out),
        .pe_data_out(pe_data_in),
        .valid_out  (commit_if.valid),
        .data_out   (commit_if.data.data),
        .tag_out    ({
            commit_if.data.uuid,
            commit_if.data.wid,
            commit_if.data.tmask,
            commit_if.data.PC,
            commit_if.data.rd,
            commit_if.data.wb,
            commit_if.data.pid,
            commit_if.data.sop,
            commit_if.data.eop
        }),
        .ready_out  (commit_if.ready)
    );

    // PEs instancing
    for (genvar i = 0; i < NUM_PES; ++i) begin : g_pe_dot8
        wire [`XLEN-1:0] a = pe_data_in[i][0 +: `XLEN];
        wire [`XLEN-1:0] b = pe_data_in[i][`XLEN +: `XLEN];
        
        // TODO:
        // Extract four int8 elements from each register
        wire signed [7:0] a0 = a[7:0];
        wire signed [7:0] a1 = a[15:8];
        wire signed [7:0] a2 = a[23:16];
        wire signed [7:0] a3 = a[31:24];
        
        wire signed [7:0] b0 = b[7:0];
        wire signed [7:0] b1 = b[15:8];
        wire signed [7:0] b2 = b[23:16];
        wire signed [7:0] b3 = b[31:24];
        
        // Compute products (signed multiplication)
        wire signed [15:0] prod0 = a0 * b0;
        wire signed [15:0] prod1 = a1 * b1;
        wire signed [15:0] prod2 = a2 * b2;
        wire signed [15:0] prod3 = a3 * b3;
        
        // Sum all products to get dot product
        wire signed [31:0] c = 32'(prod0) + 32'(prod1) + 32'(prod2) + 32'(prod3); // explicitly cast to 32-bit

        wire [31:0] result;
        `BUFFER_EX(result, c, pe_enable, 1, LATENCY_DOT8); // c is the result of the dot product
        assign pe_data_out[i] = `XLEN'(result);
    end

endmodule

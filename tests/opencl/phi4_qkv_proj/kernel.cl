// Optimized SGEMM kernel for A[32, 3072] × B[3072, 5120] = C[32, 5120]
// Row-major global memory indexing (A[m,k]=A[m*K+k], B[k,n]=B[k*N+n], C[m,n]=C[m*N+n])
#define TS 16        // Tile size
#define WPT 4        // Work per thread along N
#define RTS (TS / WPT)

__kernel void qkv_proj(const __global float* A,   // A: MxK, row-major
                       const __global float* B,   // B: KxN, row-major
                       __global float* C,         // C: MxN, row-major
                       const int M,
                       const int N,
                       const int K) {

    // Thread identifiers
    const int row = get_local_id(0);                  // [0..TS)
    const int col = get_local_id(1);                  // [0..RTS)
    const int globalRow = TS * get_group_id(0) + row; // row in C
    const int globalCol = TS * get_group_id(1) + col; // base col in C (per-thread handles WPT cols)

    // Local tiles
    __local float Asub[TS][TS];
    __local float Bsub[TS][TS];

    // Accumulators for WPT columns
    float acc[WPT];
    for (int w = 0; w < WPT; ++w) acc[w] = 0.0f;

    // Number of tiles over K
    const int numTiles = K / TS;

    for (int t = 0; t < numTiles; ++t) {

        const int tiledRow = TS * t + row; // k-index base for B
        const int tiledCol = TS * t + col; // k-index base for A

        // Load one tile of A and B into local memory (row-major global indexing)
        // Each thread loads WPT columns separated by RTS
        for (int w = 0; w < WPT; ++w) {
            // A[globalRow, tiledCol + w*RTS]
            Asub[col + w * RTS][row] =
                (globalRow < M) ?
                A[globalRow * K + (tiledCol + w * RTS)] : 0.0f;

            // B[tiledRow, globalCol + w*RTS]
            Bsub[col + w * RTS][row] =
                (tiledRow < K) ?
                B[tiledRow * N + (globalCol + w * RTS)] : 0.0f;
        }

        barrier(CLK_LOCAL_MEM_FENCE);

        // Compute partial products for this tile
        for (int k = 0; k < TS; ++k) {
            float a = Asub[k][row];
            for (int w = 0; w < WPT; ++w) {
                acc[w] += a * Bsub[col + w * RTS][k];
            }
        }

        barrier(CLK_LOCAL_MEM_FENCE);
    }

    // Store results to C (row-major)
    for (int w = 0; w < WPT; ++w) {
        // C[globalRow, globalCol + w*RTS]
        if (globalRow < M && (globalCol + w * RTS) < N) {
            C[globalRow * N + (globalCol + w * RTS)] = acc[w];
        }
    }
}

//
// (c) August 23, 2018 Saman Biookaghazadeh @ Arizona State University
//

#ifdef INT_PRECISION
#define DTYPE int
#elif SINGLE_PRECISION
#define DTYPE float
#elif DOUBLE_PRECISION
#pragma OPENCL EXTENSION cl_khr_fp64: enable
#define DTYPE double
#endif

#ifdef FPGA_NDRANGE
__attribute__((reqd_work_group_size(256, 1, 1)))
__attribute__((num_simd_work_items(16)))
__attribute__((num_compute_units(NUM_COMPUTE_UNITS)))
#endif


__kernel void S211K1 (__global DTYPE* restrict A,
#ifdef FPGA_SINGLE
					__global DTYPE* restrict B,
#else
					__global const DTYPE* restrict B,
#endif
                    __global DTYPE* restrict BPrime,
                    __global const DTYPE* restrict C,
                    __global const DTYPE* restrict D,
                    __global const DTYPE* restrict E
#if FPGA_SINGLE
										,const int lll)
#else
										)
#endif

{

#ifdef GPU
	const int gid = get_global_id(0);
	const int size = get_global_size(0);
  const int index = gid+1;

	BPrime[index] = B[index+1] - E[index] * D[index];
	
#endif

#ifdef FPGA_NDRANGE
	const int gid = get_global_id(0);
  cosnt int size = get_global_size(0);
	const int index = gid+1;

	BPrime[index] = B[index+1] - E[index] * D[index];

#endif

#ifdef FPGA_SINGLE

#endif

}

__kernel void S211K2 (__global DTYPE* restrict A,
#ifdef FPGA_SINGLE
					__global DTYPE* restrict B,
#else
					__global const DTYPE* restrict B,
#endif
                    __global DTYPE* restrict BPrime,
                    __global const DTYPE* restrict C,
                    __global const DTYPE* restrict D,
                    __global const DTYPE* restrict E
#if FPGA_SINGLE
										,const int lll)
#else
										)
#endif

{

#ifdef GPU
	const int gid = get_global_id(0);
	const int size = get_global_size(0);
  const int index = gid+1;

	A[index] = BPrime[index-1] - E[index] * D[index];
	
#endif

#ifdef FPGA_NDRANGE
	const int gid = get_global_id(0);
  cosnt int size = get_global_size(0);
	const int index = gid+1;

	A[index] = BPrime[index-1] - E[index] * D[index];

#endif

#ifdef FPGA_SINGLE

	#pragma unroll UNROLL_FACTOR
	for (int i = 1; i < lll; i++) {
  	DTYPE C_local = C[i];
    DTYPE D_local = D[i];
    DTYPE E_local = E[i];
		DTYPE B_local_i_1 = B[i-1];
    DTYPE B_local_i_3 = B[i+1];

		A[i] = B_local_i_1 + C_local * D_local;
   	B[i] = B_local_i_3 - E_local * D_local;
	}

#endif

}

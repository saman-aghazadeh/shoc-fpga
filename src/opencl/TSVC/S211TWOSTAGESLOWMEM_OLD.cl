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

#if UNROLL_FACTOR == 1
#define VTYPE float
#elif UNROLL_FACTOR == 2
#define VTYPE float2
#elif UNROLL_FACTOR == 4
#define VTYPE float4
#elif UNROLL_FACTOR == 8
#define VTYPE float8
#elif UNROLL_FACTOR == 16
#define VTYPE float16
#endif

#include "funcs.h"

#ifdef FPGA_NDRANGE
__attribute__((reqd_work_group_size(256, 1, 1)))
__attribute__((num_simd_work_items(16)))
__attribute__((num_compute_units(NUM_COMPUTE_UNITS)))
#endif

#ifdef FPGA_SINGLE
 
#if UNROLL_FACTOR == 1
typedef struct Msg {
	DTYPE temp0;
} msg;
#elif UNROLL_FACTOR == 2
typedef struct Msg {
	DTYPE temp0;
  DTYPE temp1;
} msg;
#elif UNROLL_FACTOR == 4
typedef struct Msg {
	DTYPE temp0;
  DTYPE temp1;
  DTYPE temp2;
  DTYPE temp3;
} msg;
#elif UNROLL_FACTOR == 8
typedef struct Msg {
	DTYPE temp0;
  DTYPE temp1;
  DTYPE temp2;
  DTYPE temp3;
  DTYPE temp4;
  DTYPE temp5;
  DTYPE temp6;
  DTYPE temp7;
} msg;
#elif UNROLL_FACTOR == 16
typedef struct Msg {
	DTYPE temp0;
  DTYPE temp1;
  DTYPE temp2;
  DTYPE temp3;
  DTYPE temp4;
  DTYPE temp5;
  DTYPE temp6;
  DTYPE temp7;
	DTYPE temp8;
  DTYPE temp9;
  DTYPE temp10;
  DTYPE temp11;
  DTYPE temp12;
  DTYPE temp13;
  DTYPE temp14;
  DTYPE temp15;
} msg;
#endif
channel VTYPE c0 __attribute__((depth(4)));
channel VTYPE c1 __attribute__((depth(4)));
channel VTYPE c2 __attribute__((depth(4)));
#endif


__kernel void S211K1 (__global DTYPE* restrict A,
					__global DTYPE* restrict B,
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

	DTYPE multiplier = 1.5;
	const int gid = get_global_id(0);
  const int index = gid+1;

#if INTENSITY1
	Bfunction (BPrime[index], B[index+1], multiplier);	
#elif INTENSITY2
	Bfunction2 (BPrime[index], B[index+1], multiplier);	
#elif INTENSITY3
	Bfunction3 (BPrime[index], B[index+1], multiplier);	
#elif INTENSITY4
	Bfunction4 (BPrime[index], B[index+1], multiplier);	
#elif INTENSITY5
	Bfunction5 (BPrime[index], B[index+1], multiplier);	
#endif

#endif


#ifdef FPGA_SINGLE

DTYPE multiplier = 1.5;

#if UNROLL_FACTOR == 1
#pragma ivdep
for (int i = 1; i < lll; i++) {

	VTYPE temp;

#if INTENSITY1
	megaBBfunction (temp, (VTYPE)(B[i+1]), multiplier);
#elif INTENSITY2
	megaBBfunction2 (temp, (VTYPE)(B[i+1]), multiplier);
#elif INTENSITY3
	megaBBfunction3 (temp, (VTYPE)(B[i+1]), multiplier);
#elif INTENSITY4
	megaBBfunction4 (temp, (VTYPE)(B[i+1]), multiplier);
#elif INTENSITY5
	megaBBfunction5 (temp, (VTYPE)(B[i+1]), multiplier);
#endif

	write_channel_altera (c0, temp);
}
#elif UNROLL_FACTOR == 2
#pragma ivdep
for (int i = 1; i < lll; i+=2) {
	VTYPE temp;

#if INTENSITY1
	BBfunction (temp, (VTYPE)(B[i+1],B[i+2]), multiplier);
#elif INTENSITY2
	BBfunction2 (temp, (VTYPE)(B[i+1],B[i+2]), multiplier);
#elif INTENSITY3
	BBfunction3 (temp, (VTYPE)(B[i+1],B[i+2]), multiplier);
#elif INTENSITY4
	BBfunction4 (temp, (VTYPE)(B[i+1],B[i+2]), multiplier);
#elif INTENSITY5
	BBfunction5 (temp, (VTYPE)(B[i+1],B[i+2]), multiplier);
#endif

	write_channel_altera (c0, temp);
}
#elif UNROLL_FACTOR == 4
#pragma ivdep
for (int i = 1; i < lll; i+=4) {
	VTYPE temp;

#if INTENSITY1
	BBfunction (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4]), multiplier);
#elif INTENSITY2
	BBfunction2 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4]), multiplier);
#elif INTENSITY3
	BBfunction3 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4]), multiplier);
#elif INTENSITY4
	BBfunction4 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4]), multiplier);
#elif INTENSITY5
	BBfunction5 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4]), multiplier);
#endif

	write_channel_altera (c0, temp);
}

#elif UNROLL_FACTOR == 8
#pragma ivdep
for (int i = 1; i < lll; i+=8) {
	VTYPE temp;

#if INTENSITY1
      BBfunction (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8]), multiplier);
#elif INTENSITY2
      BBfunction2 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8]), multiplier);
#elif INTENSITY3
      BBfunction3 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8]), multiplier);
#elif INTENSITY4
      BBfunction4 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8]), multiplier);
#elif INTENSITY5
      BBfunction5 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8]), multiplier);
#endif

	write_channel_altera (c0, temp);

}

#elif UNROLL_FACTOR == 16
#pragma ivdep
for (int i = 1; i < lll; i+=16) {
	VTYPE temp;

#if INTENSITY1
	BBfunction (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8],B[i+9],B[i+10],B[i+11],B[i+12],B[i+13],B[i+14],B[i+15],B[i+16]), multiplier);
#elif INTENSITY2
	BBfunction2 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8],B[i+9],B[i+10],B[i+11],B[i+12],B[i+13],B[i+14],B[i+15],B[i+16]), multiplier);
#elif INTENSITY3
	BBfunction3 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8],B[i+9],B[i+10],B[i+11],B[i+12],B[i+13],B[i+14],B[i+15],B[i+16]), multiplier);
#elif INTENSITY4
	BBfunction4 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8],B[i+9],B[i+10],B[i+11],B[i+12],B[i+13],B[i+14],B[i+15],B[i+16]), multiplier);
#elif INTENSITY5
	BBfunction5 (temp, (VTYPE)(B[i+1],B[i+2],B[i+3],B[i+4],B[i+5],B[i+6],B[i+7],B[i+8],B[i+9],B[i+10],B[i+11],B[i+12],B[i+13],B[i+14],B[i+15],B[i+16]), multiplier);
#endif

	write_channel_altera (c0, temp);

}

#endif

#endif

}

__kernel void S211K2 (__global DTYPE* restrict A,
					__global DTYPE* restrict B,
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

	DTYPE multiplier = 4.5;
  const int gid = get_global_id(0);
  const int index = gid+1;
#if INTENSITY1
	Bfunction (A[index], BPrime[index-1], multiplier);	
#elif INTENSITY2
	Bfunction2 (A[index], BPrime[index-1], multiplier);	
#elif INTENSITY3
	Bfunction3 (A[index], BPrime[index-1], multiplier);	
#elif INTENSITY4
	Bfunction4 (A[index], BPrime[index-1], multiplier);	
#elif INTENSITY5
	Bfunction5 (A[index], BPrime[index-1], multiplier);	
#endif

#endif

#ifdef FPGA_NDRANGE

#endif

#ifdef FPGA_SINGLE

  DTYPE multiplier = 2.5;		
	VTYPE output;
#if UNROLL_FACTOR == 1
	#pragma ivdep
	for (int i = 1; i < lll; i++) {
    	VTYPE msg = read_channel_altera(c2);
#if INTENSITY1
	BBfunction (output, msg, multiplier);
#elif INTENSITY2
	BBfunction2 (output, msg, multiplier);
#elif INTENSITY3
	BBfunction3 (output, msg, multiplier);
#elif INTENSITY4
	BBfunction4 (output, msg, multiplier);
#elif INTENSITY5
	BBfunction5 (output, msg, multiplier);
#endif

		A[i] = output.s0;
	}
#elif UNROLL_FACTOR == 2
	#pragma ivdep
	for (int i = 1; i < lll; i+=2) {
   		VTYPE msg = read_channel_altera(c2);
#if INTENSITY1
	BBfunction (output, msg, multiplier);
#elif INTENSITY2
	BBfunction2 (output, msg, multiplier);
#elif INTENSITY3
	BBfunction3 (output, msg, multiplier);
#elif INTENSITY4
	BBfunction4 (output, msg, multiplier);
#elif INTENSITY5
	BBfunction5 (output, msg, multiplier);
#endif

		A[i] = output.s0;
    	A[i+1] = output.s1;
	}
#elif UNROLL_FACTOR == 4
	#pragma ivdep
	for (int i = 1; i < lll; i+=4) {
   		VTYPE msg = read_channel_altera(c2);
#if INTENSITY1
	BBfunction (output, msg, multiplier);
#elif INTENSITY2
	BBfunction2 (output, msg, multiplier);
#elif INTENSITY3
	BBfunction3 (output, msg, multiplier);
#elif INTENSITY4
	BBfunction4 (output, msg, multiplier);
#elif INTENSITY5
	BBfunction5 (output, msg, multiplier);
#endif

		A[i] = output.s0;
    	A[i+1] = output.s1;
    	A[i+2] = output.s2;
    	A[i+3] = output.s3;
	}
#elif UNROLL_FACTOR == 8
	#pragma ivdep
	for (int i = 1; i < lll; i+=8) {
   		VTYPE msg = read_channel_altera(c2);
#if INTENSITY1
	BBfunction (output, msg, multiplier);
#elif INTENSITY2
	BBfunction2 (output, msg, multiplier);
#elif INTENSITY3
	BBfunction3 (output, msg, multiplier);
#elif INTENSITY4
	BBfunction4 (output, msg, multiplier);
#elif INTENSITY5
	BBfunction5 (output, msg, multiplier);
#endif


		A[i] = output.s0;
    	A[i+1] = output.s1;
    	A[i+2] = output.s2;
    	A[i+3] = output.s3;
    	A[i+4] = output.s4;
    	A[i+5] = output.s5;
    	A[i+6] = output.s6;
      A[i+7] = output.s7;
	}
#elif UNROLL_FACTOR == 16
	#pragma ivdep
	for (int i = 1; i < lll; i+=16) {
   		VTYPE msg = read_channel_altera(c2);
#if INTENSITY1
	BBfunction (output, msg, multiplier);
#elif INTENSITY2
	BBfunction2 (output, msg, multiplier);
#elif INTENSITY3
	BBfunction3 (output, msg, multiplier);
#elif INTENSITY4
	BBfunction4 (output, msg, multiplier);
#elif INTENSITY5
	BBfunction5 (output, msg, multiplier);
#endif

		A[i] = output.s0;
    	A[i+1] = output.s1;
    	A[i+2] = output.s2;
    	A[i+3] = output.s3;
    	A[i+4] = output.s4;
    	A[i+5] = output.s5;
    	A[i+6] = output.s6;
		A[i+7] = output.s7;
    	A[i+8] = output.s8;
    	A[i+9] = output.s9;
    	A[i+10] = output.sa;
    	A[i+11] = output.sb;
    	A[i+12] = output.sc;
    	A[i+13] = output.sd;
      A[i+14] = output.se;
			A[i+15] = output.sf;
	}


#endif

#endif

}

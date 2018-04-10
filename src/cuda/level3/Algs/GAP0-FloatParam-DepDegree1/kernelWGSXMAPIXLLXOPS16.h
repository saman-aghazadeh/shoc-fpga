#ifndef kernelWGSXMAPIXLLXOPS16_H_
#define kernelWGSXMAPIXLLXOPS16_H_

__global__ void WGSXMAPIXLLXOPS16 (const float *GIn, float *GOut, const float M, const float N, const float P) {

	int gid = blockIdx.x * blockDim.x + threadIdx.x;

	float MF = (float) M;
  float NF = (float) N;
  float PF = (float) P;

  for (int lcdd = 0; lcdd < 1; lcdd++) {
    float temp1 = 1.0;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;
    temp1 = temp1 * MF + temp1;

    GOut[gid] = temp1;
  }

}

void WGSXMAPIXLLXOPS16_wrapper (const float *GIn, float *GOut,
                               const float M, const float N, const float P,
                               int numBlocks, int threadPerBlock) {
	WGSXMAPIXLLXOPS16<<<numBlocks, threadPerBlock>>> (GIn, GOut, M, N, P);
}

#endif

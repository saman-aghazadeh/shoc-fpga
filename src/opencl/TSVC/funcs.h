//
// (c) August 1, 2018 Saman Biookaghazadeh @ Arizona State University
//

// Mainly for S1119 test case and other thing like that

#define AInit(A,B,C) DTYPE tempA = 0; DTYPE tempB = B; DTYPE tempC = C
#define AFinal(A) A = tempA

#define CInit(A,B,C,D) DTYPE tempA = 0; DTYPE tempB = B; DTYPE tempC = C; DTYPE tempD = D
#define CFinal(A) A = tempA

#define BBInit(A,B,C) VTYPE tempA = 0; VTYPE tempB = B; VTYPE tempC = C
#define BBfinal(A) A = tempA


#define Afunction(A,B,C) AInit (A, B, C); tempA = pow(tempB,tempC); AFinal (A)
#define Afunction2(A,B,C) AInit (A, B, C); tempA = pow(tempB,tempC); tempA = pow(tempB, tempA); AFinal(A)
#define Afunction3(A,B,C) AInit (A, B, C); tempA = pow(tempB, tempC); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); AFinal(A)
#define Afunction4(A,B,C) AInit(A, B, C); tempA = pow(tempB, tempC); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); AFinal(A)
#define Afunction5(A,B,C) AInit(A, B, C); tempA = pow(tempB, tempC); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); AFinal(A)
#define Afunction6(A,B,C) AInit(A, B, C); tempA = pow(tempB, tempC); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); AFinal(A)
#define Afunction7(A,B,C) AInit(A, B, C); tempA = pow(tempB, tempC); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); AFinal(A)
#define Afunction8(A,B,C) AInit(A, B, C); tempA = pow(tempB, tempC); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); tempA = pow(tempB, tempA); AFinal(A)

#define Bfunction(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; AFinal (A)
#define Bfunction2(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; AFinal(A)
#define Bfunction3(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; AFinal(A)
#define Bfunction4(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; AFinal(A)
#define Bfunction5(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; AFinal(A)
#define Bfunction6(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; AFinal(A)
#define Bfunction7(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; AFinal(A)
#define Bfunction8(A,B,C) AInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; AFinal(A)

#define BBfunction(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; BBFinal (A)
#define BBfunction2(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; BBfinal(A)
#define BBfunction3(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; BBfinal(A)
#define BBfunction4(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; BBfinal(A)
#define BBfunction5(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; BBfinal(A)
#define BBfunction6(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; BBfinal(A)
#define BBfunction7(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; BBfinal(A)
#define BBfunction8(A,B,C) BBInit(A, B, C); tempA = cos(tempB) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; BBfinal(A)


#define Cfunction(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; CFinal(A)
#define Cfunction2(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; tempA = cos(tempA) * tempC; CFinal(A)
#define Cfunction3(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define Cfunction4(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define Cfunction5(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define Cfunction6(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define Cfunction7(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define Cfunction8(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC * tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)

#define CCfunction(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; CFinal(A)
#define CCfunction2(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; tempA = cos(tempA) * tempC; CFinal(A)
#define CCfunction3(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define CCfunction4(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define CCfunction5(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define CCfunction6(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define CCfunction7(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)
#define CCfunction8(A,B,C,D) CInit(A, B, C, D); tempA = cos(tempB) * tempC + tempD; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; tempA = cos(tempA) * tempC; CFinal(A)

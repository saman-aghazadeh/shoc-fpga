#ifndef TestS2VfloatD256Form1MUnrol1U0LM0SEQ_H_
#define TestS2VfloatD256Form1MUnrol1U0LM0SEQ_H_

__global__ void TestS2VfloatD256Form1MUnrol1U0LM0SEQ( float *data, float *rands, int index, int rand_max){
	float2 temp;
	int gid = blockIdx.x * blockDim.x + threadIdx.x;

	temp.x = data[gid];
	temp.y = data[gid];;
	temp.x = (float) rands[0] * temp.x + rands[0];
		temp.y = (float) rands[0] * temp.y + rands[0];;
	temp.x = (float) rands[1] * temp.x + rands[1];
		temp.y = (float) rands[1] * temp.y + rands[1];;
	temp.x = (float) rands[2] * temp.x + rands[2];
		temp.y = (float) rands[2] * temp.y + rands[2];;
	temp.x = (float) rands[3] * temp.x + rands[3];
		temp.y = (float) rands[3] * temp.y + rands[3];;
	temp.x = (float) rands[4] * temp.x + rands[4];
		temp.y = (float) rands[4] * temp.y + rands[4];;
	temp.x = (float) rands[5] * temp.x + rands[5];
		temp.y = (float) rands[5] * temp.y + rands[5];;
	temp.x = (float) rands[6] * temp.x + rands[6];
		temp.y = (float) rands[6] * temp.y + rands[6];;
	temp.x = (float) rands[7] * temp.x + rands[7];
		temp.y = (float) rands[7] * temp.y + rands[7];;
	temp.x = (float) rands[8] * temp.x + rands[8];
		temp.y = (float) rands[8] * temp.y + rands[8];;
	temp.x = (float) rands[9] * temp.x + rands[9];
		temp.y = (float) rands[9] * temp.y + rands[9];;
	temp.x = (float) rands[10] * temp.x + rands[10];
		temp.y = (float) rands[10] * temp.y + rands[10];;
	temp.x = (float) rands[11] * temp.x + rands[11];
		temp.y = (float) rands[11] * temp.y + rands[11];;
	temp.x = (float) rands[12] * temp.x + rands[12];
		temp.y = (float) rands[12] * temp.y + rands[12];;
	temp.x = (float) rands[13] * temp.x + rands[13];
		temp.y = (float) rands[13] * temp.y + rands[13];;
	temp.x = (float) rands[14] * temp.x + rands[14];
		temp.y = (float) rands[14] * temp.y + rands[14];;
	temp.x = (float) rands[15] * temp.x + rands[15];
		temp.y = (float) rands[15] * temp.y + rands[15];;
	temp.x = (float) rands[16] * temp.x + rands[16];
		temp.y = (float) rands[16] * temp.y + rands[16];;
	temp.x = (float) rands[17] * temp.x + rands[17];
		temp.y = (float) rands[17] * temp.y + rands[17];;
	temp.x = (float) rands[18] * temp.x + rands[18];
		temp.y = (float) rands[18] * temp.y + rands[18];;
	temp.x = (float) rands[19] * temp.x + rands[19];
		temp.y = (float) rands[19] * temp.y + rands[19];;
	temp.x = (float) rands[20] * temp.x + rands[20];
		temp.y = (float) rands[20] * temp.y + rands[20];;
	temp.x = (float) rands[21] * temp.x + rands[21];
		temp.y = (float) rands[21] * temp.y + rands[21];;
	temp.x = (float) rands[22] * temp.x + rands[22];
		temp.y = (float) rands[22] * temp.y + rands[22];;
	temp.x = (float) rands[23] * temp.x + rands[23];
		temp.y = (float) rands[23] * temp.y + rands[23];;
	temp.x = (float) rands[24] * temp.x + rands[24];
		temp.y = (float) rands[24] * temp.y + rands[24];;
	temp.x = (float) rands[25] * temp.x + rands[25];
		temp.y = (float) rands[25] * temp.y + rands[25];;
	temp.x = (float) rands[26] * temp.x + rands[26];
		temp.y = (float) rands[26] * temp.y + rands[26];;
	temp.x = (float) rands[27] * temp.x + rands[27];
		temp.y = (float) rands[27] * temp.y + rands[27];;
	temp.x = (float) rands[28] * temp.x + rands[28];
		temp.y = (float) rands[28] * temp.y + rands[28];;
	temp.x = (float) rands[29] * temp.x + rands[29];
		temp.y = (float) rands[29] * temp.y + rands[29];;
	temp.x = (float) rands[30] * temp.x + rands[30];
		temp.y = (float) rands[30] * temp.y + rands[30];;
	temp.x = (float) rands[31] * temp.x + rands[31];
		temp.y = (float) rands[31] * temp.y + rands[31];;
	temp.x = (float) rands[32] * temp.x + rands[32];
		temp.y = (float) rands[32] * temp.y + rands[32];;
	temp.x = (float) rands[33] * temp.x + rands[33];
		temp.y = (float) rands[33] * temp.y + rands[33];;
	temp.x = (float) rands[34] * temp.x + rands[34];
		temp.y = (float) rands[34] * temp.y + rands[34];;
	temp.x = (float) rands[35] * temp.x + rands[35];
		temp.y = (float) rands[35] * temp.y + rands[35];;
	temp.x = (float) rands[36] * temp.x + rands[36];
		temp.y = (float) rands[36] * temp.y + rands[36];;
	temp.x = (float) rands[37] * temp.x + rands[37];
		temp.y = (float) rands[37] * temp.y + rands[37];;
	temp.x = (float) rands[38] * temp.x + rands[38];
		temp.y = (float) rands[38] * temp.y + rands[38];;
	temp.x = (float) rands[39] * temp.x + rands[39];
		temp.y = (float) rands[39] * temp.y + rands[39];;
	temp.x = (float) rands[40] * temp.x + rands[40];
		temp.y = (float) rands[40] * temp.y + rands[40];;
	temp.x = (float) rands[41] * temp.x + rands[41];
		temp.y = (float) rands[41] * temp.y + rands[41];;
	temp.x = (float) rands[42] * temp.x + rands[42];
		temp.y = (float) rands[42] * temp.y + rands[42];;
	temp.x = (float) rands[43] * temp.x + rands[43];
		temp.y = (float) rands[43] * temp.y + rands[43];;
	temp.x = (float) rands[44] * temp.x + rands[44];
		temp.y = (float) rands[44] * temp.y + rands[44];;
	temp.x = (float) rands[45] * temp.x + rands[45];
		temp.y = (float) rands[45] * temp.y + rands[45];;
	temp.x = (float) rands[46] * temp.x + rands[46];
		temp.y = (float) rands[46] * temp.y + rands[46];;
	temp.x = (float) rands[47] * temp.x + rands[47];
		temp.y = (float) rands[47] * temp.y + rands[47];;
	temp.x = (float) rands[48] * temp.x + rands[48];
		temp.y = (float) rands[48] * temp.y + rands[48];;
	temp.x = (float) rands[49] * temp.x + rands[49];
		temp.y = (float) rands[49] * temp.y + rands[49];;
	temp.x = (float) rands[50] * temp.x + rands[50];
		temp.y = (float) rands[50] * temp.y + rands[50];;
	temp.x = (float) rands[51] * temp.x + rands[51];
		temp.y = (float) rands[51] * temp.y + rands[51];;
	temp.x = (float) rands[52] * temp.x + rands[52];
		temp.y = (float) rands[52] * temp.y + rands[52];;
	temp.x = (float) rands[53] * temp.x + rands[53];
		temp.y = (float) rands[53] * temp.y + rands[53];;
	temp.x = (float) rands[54] * temp.x + rands[54];
		temp.y = (float) rands[54] * temp.y + rands[54];;
	temp.x = (float) rands[55] * temp.x + rands[55];
		temp.y = (float) rands[55] * temp.y + rands[55];;
	temp.x = (float) rands[56] * temp.x + rands[56];
		temp.y = (float) rands[56] * temp.y + rands[56];;
	temp.x = (float) rands[57] * temp.x + rands[57];
		temp.y = (float) rands[57] * temp.y + rands[57];;
	temp.x = (float) rands[58] * temp.x + rands[58];
		temp.y = (float) rands[58] * temp.y + rands[58];;
	temp.x = (float) rands[59] * temp.x + rands[59];
		temp.y = (float) rands[59] * temp.y + rands[59];;
	temp.x = (float) rands[60] * temp.x + rands[60];
		temp.y = (float) rands[60] * temp.y + rands[60];;
	temp.x = (float) rands[61] * temp.x + rands[61];
		temp.y = (float) rands[61] * temp.y + rands[61];;
	temp.x = (float) rands[62] * temp.x + rands[62];
		temp.y = (float) rands[62] * temp.y + rands[62];;
	temp.x = (float) rands[63] * temp.x + rands[63];
		temp.y = (float) rands[63] * temp.y + rands[63];;
	temp.x = (float) rands[64] * temp.x + rands[64];
		temp.y = (float) rands[64] * temp.y + rands[64];;
	temp.x = (float) rands[65] * temp.x + rands[65];
		temp.y = (float) rands[65] * temp.y + rands[65];;
	temp.x = (float) rands[66] * temp.x + rands[66];
		temp.y = (float) rands[66] * temp.y + rands[66];;
	temp.x = (float) rands[67] * temp.x + rands[67];
		temp.y = (float) rands[67] * temp.y + rands[67];;
	temp.x = (float) rands[68] * temp.x + rands[68];
		temp.y = (float) rands[68] * temp.y + rands[68];;
	temp.x = (float) rands[69] * temp.x + rands[69];
		temp.y = (float) rands[69] * temp.y + rands[69];;
	temp.x = (float) rands[70] * temp.x + rands[70];
		temp.y = (float) rands[70] * temp.y + rands[70];;
	temp.x = (float) rands[71] * temp.x + rands[71];
		temp.y = (float) rands[71] * temp.y + rands[71];;
	temp.x = (float) rands[72] * temp.x + rands[72];
		temp.y = (float) rands[72] * temp.y + rands[72];;
	temp.x = (float) rands[73] * temp.x + rands[73];
		temp.y = (float) rands[73] * temp.y + rands[73];;
	temp.x = (float) rands[74] * temp.x + rands[74];
		temp.y = (float) rands[74] * temp.y + rands[74];;
	temp.x = (float) rands[75] * temp.x + rands[75];
		temp.y = (float) rands[75] * temp.y + rands[75];;
	temp.x = (float) rands[76] * temp.x + rands[76];
		temp.y = (float) rands[76] * temp.y + rands[76];;
	temp.x = (float) rands[77] * temp.x + rands[77];
		temp.y = (float) rands[77] * temp.y + rands[77];;
	temp.x = (float) rands[78] * temp.x + rands[78];
		temp.y = (float) rands[78] * temp.y + rands[78];;
	temp.x = (float) rands[79] * temp.x + rands[79];
		temp.y = (float) rands[79] * temp.y + rands[79];;
	temp.x = (float) rands[80] * temp.x + rands[80];
		temp.y = (float) rands[80] * temp.y + rands[80];;
	temp.x = (float) rands[81] * temp.x + rands[81];
		temp.y = (float) rands[81] * temp.y + rands[81];;
	temp.x = (float) rands[82] * temp.x + rands[82];
		temp.y = (float) rands[82] * temp.y + rands[82];;
	temp.x = (float) rands[83] * temp.x + rands[83];
		temp.y = (float) rands[83] * temp.y + rands[83];;
	temp.x = (float) rands[84] * temp.x + rands[84];
		temp.y = (float) rands[84] * temp.y + rands[84];;
	temp.x = (float) rands[85] * temp.x + rands[85];
		temp.y = (float) rands[85] * temp.y + rands[85];;
	temp.x = (float) rands[86] * temp.x + rands[86];
		temp.y = (float) rands[86] * temp.y + rands[86];;
	temp.x = (float) rands[87] * temp.x + rands[87];
		temp.y = (float) rands[87] * temp.y + rands[87];;
	temp.x = (float) rands[88] * temp.x + rands[88];
		temp.y = (float) rands[88] * temp.y + rands[88];;
	temp.x = (float) rands[89] * temp.x + rands[89];
		temp.y = (float) rands[89] * temp.y + rands[89];;
	temp.x = (float) rands[90] * temp.x + rands[90];
		temp.y = (float) rands[90] * temp.y + rands[90];;
	temp.x = (float) rands[91] * temp.x + rands[91];
		temp.y = (float) rands[91] * temp.y + rands[91];;
	temp.x = (float) rands[92] * temp.x + rands[92];
		temp.y = (float) rands[92] * temp.y + rands[92];;
	temp.x = (float) rands[93] * temp.x + rands[93];
		temp.y = (float) rands[93] * temp.y + rands[93];;
	temp.x = (float) rands[94] * temp.x + rands[94];
		temp.y = (float) rands[94] * temp.y + rands[94];;
	temp.x = (float) rands[95] * temp.x + rands[95];
		temp.y = (float) rands[95] * temp.y + rands[95];;
	temp.x = (float) rands[96] * temp.x + rands[96];
		temp.y = (float) rands[96] * temp.y + rands[96];;
	temp.x = (float) rands[97] * temp.x + rands[97];
		temp.y = (float) rands[97] * temp.y + rands[97];;
	temp.x = (float) rands[98] * temp.x + rands[98];
		temp.y = (float) rands[98] * temp.y + rands[98];;
	temp.x = (float) rands[99] * temp.x + rands[99];
		temp.y = (float) rands[99] * temp.y + rands[99];;
	temp.x = (float) rands[100] * temp.x + rands[100];
		temp.y = (float) rands[100] * temp.y + rands[100];;
	temp.x = (float) rands[101] * temp.x + rands[101];
		temp.y = (float) rands[101] * temp.y + rands[101];;
	temp.x = (float) rands[102] * temp.x + rands[102];
		temp.y = (float) rands[102] * temp.y + rands[102];;
	temp.x = (float) rands[103] * temp.x + rands[103];
		temp.y = (float) rands[103] * temp.y + rands[103];;
	temp.x = (float) rands[104] * temp.x + rands[104];
		temp.y = (float) rands[104] * temp.y + rands[104];;
	temp.x = (float) rands[105] * temp.x + rands[105];
		temp.y = (float) rands[105] * temp.y + rands[105];;
	temp.x = (float) rands[106] * temp.x + rands[106];
		temp.y = (float) rands[106] * temp.y + rands[106];;
	temp.x = (float) rands[107] * temp.x + rands[107];
		temp.y = (float) rands[107] * temp.y + rands[107];;
	temp.x = (float) rands[108] * temp.x + rands[108];
		temp.y = (float) rands[108] * temp.y + rands[108];;
	temp.x = (float) rands[109] * temp.x + rands[109];
		temp.y = (float) rands[109] * temp.y + rands[109];;
	temp.x = (float) rands[110] * temp.x + rands[110];
		temp.y = (float) rands[110] * temp.y + rands[110];;
	temp.x = (float) rands[111] * temp.x + rands[111];
		temp.y = (float) rands[111] * temp.y + rands[111];;
	temp.x = (float) rands[112] * temp.x + rands[112];
		temp.y = (float) rands[112] * temp.y + rands[112];;
	temp.x = (float) rands[113] * temp.x + rands[113];
		temp.y = (float) rands[113] * temp.y + rands[113];;
	temp.x = (float) rands[114] * temp.x + rands[114];
		temp.y = (float) rands[114] * temp.y + rands[114];;
	temp.x = (float) rands[115] * temp.x + rands[115];
		temp.y = (float) rands[115] * temp.y + rands[115];;
	temp.x = (float) rands[116] * temp.x + rands[116];
		temp.y = (float) rands[116] * temp.y + rands[116];;
	temp.x = (float) rands[117] * temp.x + rands[117];
		temp.y = (float) rands[117] * temp.y + rands[117];;
	temp.x = (float) rands[118] * temp.x + rands[118];
		temp.y = (float) rands[118] * temp.y + rands[118];;
	temp.x = (float) rands[119] * temp.x + rands[119];
		temp.y = (float) rands[119] * temp.y + rands[119];;
	temp.x = (float) rands[120] * temp.x + rands[120];
		temp.y = (float) rands[120] * temp.y + rands[120];;
	temp.x = (float) rands[121] * temp.x + rands[121];
		temp.y = (float) rands[121] * temp.y + rands[121];;
	temp.x = (float) rands[122] * temp.x + rands[122];
		temp.y = (float) rands[122] * temp.y + rands[122];;
	temp.x = (float) rands[123] * temp.x + rands[123];
		temp.y = (float) rands[123] * temp.y + rands[123];;
	temp.x = (float) rands[124] * temp.x + rands[124];
		temp.y = (float) rands[124] * temp.y + rands[124];;
	temp.x = (float) rands[125] * temp.x + rands[125];
		temp.y = (float) rands[125] * temp.y + rands[125];;
	temp.x = (float) rands[126] * temp.x + rands[126];
		temp.y = (float) rands[126] * temp.y + rands[126];;
	temp.x = (float) rands[127] * temp.x + rands[127];
		temp.y = (float) rands[127] * temp.y + rands[127];;
	temp.x = (float) rands[128] * temp.x + rands[128];
		temp.y = (float) rands[128] * temp.y + rands[128];;
	temp.x = (float) rands[129] * temp.x + rands[129];
		temp.y = (float) rands[129] * temp.y + rands[129];;
	temp.x = (float) rands[130] * temp.x + rands[130];
		temp.y = (float) rands[130] * temp.y + rands[130];;
	temp.x = (float) rands[131] * temp.x + rands[131];
		temp.y = (float) rands[131] * temp.y + rands[131];;
	temp.x = (float) rands[132] * temp.x + rands[132];
		temp.y = (float) rands[132] * temp.y + rands[132];;
	temp.x = (float) rands[133] * temp.x + rands[133];
		temp.y = (float) rands[133] * temp.y + rands[133];;
	temp.x = (float) rands[134] * temp.x + rands[134];
		temp.y = (float) rands[134] * temp.y + rands[134];;
	temp.x = (float) rands[135] * temp.x + rands[135];
		temp.y = (float) rands[135] * temp.y + rands[135];;
	temp.x = (float) rands[136] * temp.x + rands[136];
		temp.y = (float) rands[136] * temp.y + rands[136];;
	temp.x = (float) rands[137] * temp.x + rands[137];
		temp.y = (float) rands[137] * temp.y + rands[137];;
	temp.x = (float) rands[138] * temp.x + rands[138];
		temp.y = (float) rands[138] * temp.y + rands[138];;
	temp.x = (float) rands[139] * temp.x + rands[139];
		temp.y = (float) rands[139] * temp.y + rands[139];;
	temp.x = (float) rands[140] * temp.x + rands[140];
		temp.y = (float) rands[140] * temp.y + rands[140];;
	temp.x = (float) rands[141] * temp.x + rands[141];
		temp.y = (float) rands[141] * temp.y + rands[141];;
	temp.x = (float) rands[142] * temp.x + rands[142];
		temp.y = (float) rands[142] * temp.y + rands[142];;
	temp.x = (float) rands[143] * temp.x + rands[143];
		temp.y = (float) rands[143] * temp.y + rands[143];;
	temp.x = (float) rands[144] * temp.x + rands[144];
		temp.y = (float) rands[144] * temp.y + rands[144];;
	temp.x = (float) rands[145] * temp.x + rands[145];
		temp.y = (float) rands[145] * temp.y + rands[145];;
	temp.x = (float) rands[146] * temp.x + rands[146];
		temp.y = (float) rands[146] * temp.y + rands[146];;
	temp.x = (float) rands[147] * temp.x + rands[147];
		temp.y = (float) rands[147] * temp.y + rands[147];;
	temp.x = (float) rands[148] * temp.x + rands[148];
		temp.y = (float) rands[148] * temp.y + rands[148];;
	temp.x = (float) rands[149] * temp.x + rands[149];
		temp.y = (float) rands[149] * temp.y + rands[149];;
	temp.x = (float) rands[150] * temp.x + rands[150];
		temp.y = (float) rands[150] * temp.y + rands[150];;
	temp.x = (float) rands[151] * temp.x + rands[151];
		temp.y = (float) rands[151] * temp.y + rands[151];;
	temp.x = (float) rands[152] * temp.x + rands[152];
		temp.y = (float) rands[152] * temp.y + rands[152];;
	temp.x = (float) rands[153] * temp.x + rands[153];
		temp.y = (float) rands[153] * temp.y + rands[153];;
	temp.x = (float) rands[154] * temp.x + rands[154];
		temp.y = (float) rands[154] * temp.y + rands[154];;
	temp.x = (float) rands[155] * temp.x + rands[155];
		temp.y = (float) rands[155] * temp.y + rands[155];;
	temp.x = (float) rands[156] * temp.x + rands[156];
		temp.y = (float) rands[156] * temp.y + rands[156];;
	temp.x = (float) rands[157] * temp.x + rands[157];
		temp.y = (float) rands[157] * temp.y + rands[157];;
	temp.x = (float) rands[158] * temp.x + rands[158];
		temp.y = (float) rands[158] * temp.y + rands[158];;
	temp.x = (float) rands[159] * temp.x + rands[159];
		temp.y = (float) rands[159] * temp.y + rands[159];;
	temp.x = (float) rands[160] * temp.x + rands[160];
		temp.y = (float) rands[160] * temp.y + rands[160];;
	temp.x = (float) rands[161] * temp.x + rands[161];
		temp.y = (float) rands[161] * temp.y + rands[161];;
	temp.x = (float) rands[162] * temp.x + rands[162];
		temp.y = (float) rands[162] * temp.y + rands[162];;
	temp.x = (float) rands[163] * temp.x + rands[163];
		temp.y = (float) rands[163] * temp.y + rands[163];;
	temp.x = (float) rands[164] * temp.x + rands[164];
		temp.y = (float) rands[164] * temp.y + rands[164];;
	temp.x = (float) rands[165] * temp.x + rands[165];
		temp.y = (float) rands[165] * temp.y + rands[165];;
	temp.x = (float) rands[166] * temp.x + rands[166];
		temp.y = (float) rands[166] * temp.y + rands[166];;
	temp.x = (float) rands[167] * temp.x + rands[167];
		temp.y = (float) rands[167] * temp.y + rands[167];;
	temp.x = (float) rands[168] * temp.x + rands[168];
		temp.y = (float) rands[168] * temp.y + rands[168];;
	temp.x = (float) rands[169] * temp.x + rands[169];
		temp.y = (float) rands[169] * temp.y + rands[169];;
	temp.x = (float) rands[170] * temp.x + rands[170];
		temp.y = (float) rands[170] * temp.y + rands[170];;
	temp.x = (float) rands[171] * temp.x + rands[171];
		temp.y = (float) rands[171] * temp.y + rands[171];;
	temp.x = (float) rands[172] * temp.x + rands[172];
		temp.y = (float) rands[172] * temp.y + rands[172];;
	temp.x = (float) rands[173] * temp.x + rands[173];
		temp.y = (float) rands[173] * temp.y + rands[173];;
	temp.x = (float) rands[174] * temp.x + rands[174];
		temp.y = (float) rands[174] * temp.y + rands[174];;
	temp.x = (float) rands[175] * temp.x + rands[175];
		temp.y = (float) rands[175] * temp.y + rands[175];;
	temp.x = (float) rands[176] * temp.x + rands[176];
		temp.y = (float) rands[176] * temp.y + rands[176];;
	temp.x = (float) rands[177] * temp.x + rands[177];
		temp.y = (float) rands[177] * temp.y + rands[177];;
	temp.x = (float) rands[178] * temp.x + rands[178];
		temp.y = (float) rands[178] * temp.y + rands[178];;
	temp.x = (float) rands[179] * temp.x + rands[179];
		temp.y = (float) rands[179] * temp.y + rands[179];;
	temp.x = (float) rands[180] * temp.x + rands[180];
		temp.y = (float) rands[180] * temp.y + rands[180];;
	temp.x = (float) rands[181] * temp.x + rands[181];
		temp.y = (float) rands[181] * temp.y + rands[181];;
	temp.x = (float) rands[182] * temp.x + rands[182];
		temp.y = (float) rands[182] * temp.y + rands[182];;
	temp.x = (float) rands[183] * temp.x + rands[183];
		temp.y = (float) rands[183] * temp.y + rands[183];;
	temp.x = (float) rands[184] * temp.x + rands[184];
		temp.y = (float) rands[184] * temp.y + rands[184];;
	temp.x = (float) rands[185] * temp.x + rands[185];
		temp.y = (float) rands[185] * temp.y + rands[185];;
	temp.x = (float) rands[186] * temp.x + rands[186];
		temp.y = (float) rands[186] * temp.y + rands[186];;
	temp.x = (float) rands[187] * temp.x + rands[187];
		temp.y = (float) rands[187] * temp.y + rands[187];;
	temp.x = (float) rands[188] * temp.x + rands[188];
		temp.y = (float) rands[188] * temp.y + rands[188];;
	temp.x = (float) rands[189] * temp.x + rands[189];
		temp.y = (float) rands[189] * temp.y + rands[189];;
	temp.x = (float) rands[190] * temp.x + rands[190];
		temp.y = (float) rands[190] * temp.y + rands[190];;
	temp.x = (float) rands[191] * temp.x + rands[191];
		temp.y = (float) rands[191] * temp.y + rands[191];;
	temp.x = (float) rands[192] * temp.x + rands[192];
		temp.y = (float) rands[192] * temp.y + rands[192];;
	temp.x = (float) rands[193] * temp.x + rands[193];
		temp.y = (float) rands[193] * temp.y + rands[193];;
	temp.x = (float) rands[194] * temp.x + rands[194];
		temp.y = (float) rands[194] * temp.y + rands[194];;
	temp.x = (float) rands[195] * temp.x + rands[195];
		temp.y = (float) rands[195] * temp.y + rands[195];;
	temp.x = (float) rands[196] * temp.x + rands[196];
		temp.y = (float) rands[196] * temp.y + rands[196];;
	temp.x = (float) rands[197] * temp.x + rands[197];
		temp.y = (float) rands[197] * temp.y + rands[197];;
	temp.x = (float) rands[198] * temp.x + rands[198];
		temp.y = (float) rands[198] * temp.y + rands[198];;
	temp.x = (float) rands[199] * temp.x + rands[199];
		temp.y = (float) rands[199] * temp.y + rands[199];;
	temp.x = (float) rands[200] * temp.x + rands[200];
		temp.y = (float) rands[200] * temp.y + rands[200];;
	temp.x = (float) rands[201] * temp.x + rands[201];
		temp.y = (float) rands[201] * temp.y + rands[201];;
	temp.x = (float) rands[202] * temp.x + rands[202];
		temp.y = (float) rands[202] * temp.y + rands[202];;
	temp.x = (float) rands[203] * temp.x + rands[203];
		temp.y = (float) rands[203] * temp.y + rands[203];;
	temp.x = (float) rands[204] * temp.x + rands[204];
		temp.y = (float) rands[204] * temp.y + rands[204];;
	temp.x = (float) rands[205] * temp.x + rands[205];
		temp.y = (float) rands[205] * temp.y + rands[205];;
	temp.x = (float) rands[206] * temp.x + rands[206];
		temp.y = (float) rands[206] * temp.y + rands[206];;
	temp.x = (float) rands[207] * temp.x + rands[207];
		temp.y = (float) rands[207] * temp.y + rands[207];;
	temp.x = (float) rands[208] * temp.x + rands[208];
		temp.y = (float) rands[208] * temp.y + rands[208];;
	temp.x = (float) rands[209] * temp.x + rands[209];
		temp.y = (float) rands[209] * temp.y + rands[209];;
	temp.x = (float) rands[210] * temp.x + rands[210];
		temp.y = (float) rands[210] * temp.y + rands[210];;
	temp.x = (float) rands[211] * temp.x + rands[211];
		temp.y = (float) rands[211] * temp.y + rands[211];;
	temp.x = (float) rands[212] * temp.x + rands[212];
		temp.y = (float) rands[212] * temp.y + rands[212];;
	temp.x = (float) rands[213] * temp.x + rands[213];
		temp.y = (float) rands[213] * temp.y + rands[213];;
	temp.x = (float) rands[214] * temp.x + rands[214];
		temp.y = (float) rands[214] * temp.y + rands[214];;
	temp.x = (float) rands[215] * temp.x + rands[215];
		temp.y = (float) rands[215] * temp.y + rands[215];;
	temp.x = (float) rands[216] * temp.x + rands[216];
		temp.y = (float) rands[216] * temp.y + rands[216];;
	temp.x = (float) rands[217] * temp.x + rands[217];
		temp.y = (float) rands[217] * temp.y + rands[217];;
	temp.x = (float) rands[218] * temp.x + rands[218];
		temp.y = (float) rands[218] * temp.y + rands[218];;
	temp.x = (float) rands[219] * temp.x + rands[219];
		temp.y = (float) rands[219] * temp.y + rands[219];;
	temp.x = (float) rands[220] * temp.x + rands[220];
		temp.y = (float) rands[220] * temp.y + rands[220];;
	temp.x = (float) rands[221] * temp.x + rands[221];
		temp.y = (float) rands[221] * temp.y + rands[221];;
	temp.x = (float) rands[222] * temp.x + rands[222];
		temp.y = (float) rands[222] * temp.y + rands[222];;
	temp.x = (float) rands[223] * temp.x + rands[223];
		temp.y = (float) rands[223] * temp.y + rands[223];;
	temp.x = (float) rands[224] * temp.x + rands[224];
		temp.y = (float) rands[224] * temp.y + rands[224];;
	temp.x = (float) rands[225] * temp.x + rands[225];
		temp.y = (float) rands[225] * temp.y + rands[225];;
	temp.x = (float) rands[226] * temp.x + rands[226];
		temp.y = (float) rands[226] * temp.y + rands[226];;
	temp.x = (float) rands[227] * temp.x + rands[227];
		temp.y = (float) rands[227] * temp.y + rands[227];;
	temp.x = (float) rands[228] * temp.x + rands[228];
		temp.y = (float) rands[228] * temp.y + rands[228];;
	temp.x = (float) rands[229] * temp.x + rands[229];
		temp.y = (float) rands[229] * temp.y + rands[229];;
	temp.x = (float) rands[230] * temp.x + rands[230];
		temp.y = (float) rands[230] * temp.y + rands[230];;
	temp.x = (float) rands[231] * temp.x + rands[231];
		temp.y = (float) rands[231] * temp.y + rands[231];;
	temp.x = (float) rands[232] * temp.x + rands[232];
		temp.y = (float) rands[232] * temp.y + rands[232];;
	temp.x = (float) rands[233] * temp.x + rands[233];
		temp.y = (float) rands[233] * temp.y + rands[233];;
	temp.x = (float) rands[234] * temp.x + rands[234];
		temp.y = (float) rands[234] * temp.y + rands[234];;
	temp.x = (float) rands[235] * temp.x + rands[235];
		temp.y = (float) rands[235] * temp.y + rands[235];;
	temp.x = (float) rands[236] * temp.x + rands[236];
		temp.y = (float) rands[236] * temp.y + rands[236];;
	temp.x = (float) rands[237] * temp.x + rands[237];
		temp.y = (float) rands[237] * temp.y + rands[237];;
	temp.x = (float) rands[238] * temp.x + rands[238];
		temp.y = (float) rands[238] * temp.y + rands[238];;
	temp.x = (float) rands[239] * temp.x + rands[239];
		temp.y = (float) rands[239] * temp.y + rands[239];;
	temp.x = (float) rands[240] * temp.x + rands[240];
		temp.y = (float) rands[240] * temp.y + rands[240];;
	temp.x = (float) rands[241] * temp.x + rands[241];
		temp.y = (float) rands[241] * temp.y + rands[241];;
	temp.x = (float) rands[242] * temp.x + rands[242];
		temp.y = (float) rands[242] * temp.y + rands[242];;
	temp.x = (float) rands[243] * temp.x + rands[243];
		temp.y = (float) rands[243] * temp.y + rands[243];;
	temp.x = (float) rands[244] * temp.x + rands[244];
		temp.y = (float) rands[244] * temp.y + rands[244];;
	temp.x = (float) rands[245] * temp.x + rands[245];
		temp.y = (float) rands[245] * temp.y + rands[245];;
	temp.x = (float) rands[246] * temp.x + rands[246];
		temp.y = (float) rands[246] * temp.y + rands[246];;
	temp.x = (float) rands[247] * temp.x + rands[247];
		temp.y = (float) rands[247] * temp.y + rands[247];;
	temp.x = (float) rands[248] * temp.x + rands[248];
		temp.y = (float) rands[248] * temp.y + rands[248];;
	temp.x = (float) rands[249] * temp.x + rands[249];
		temp.y = (float) rands[249] * temp.y + rands[249];;
	temp.x = (float) rands[250] * temp.x + rands[250];
		temp.y = (float) rands[250] * temp.y + rands[250];;
	temp.x = (float) rands[251] * temp.x + rands[251];
		temp.y = (float) rands[251] * temp.y + rands[251];;
	temp.x = (float) rands[252] * temp.x + rands[252];
		temp.y = (float) rands[252] * temp.y + rands[252];;
	temp.x = (float) rands[253] * temp.x + rands[253];
		temp.y = (float) rands[253] * temp.y + rands[253];;
	temp.x = (float) rands[254] * temp.x + rands[254];
		temp.y = (float) rands[254] * temp.y + rands[254];;
	data[gid] = temp.x + temp.y;

}


void TestS2VfloatD256Form1MUnrol1U0LM0SEQ_wrapper (float *data, float *rands, int index, int rand_max, int numBlocks, int threadPerBlock) {
	TestS2VfloatD256Form1MUnrol1U0LM0SEQ<<<numBlocks, threadPerBlock>>> (data, rands, index, rand_max);
}

#endif 

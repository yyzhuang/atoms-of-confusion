#include <string.h>
char V1[] = " ETIANMSURWDKGOHVF:L:PJBXCYZQ::54:3:::2&:+::::16=/:::(:7:::8:90::::::::::::?_::::\"::.::::@:::'::-::::::::;!:):::::,:::::";
int V2, V4, V8, V10, V11, V12, V14, V16, V17, V18, V19, V20, V22[32], V23[32];
int main(int V25, char** V26)
{
  for (V11 = 0; (V25>0) && (V25<5) && (V25 *= V19 = fread(V1, 1, 1, stdin));)
    for (((V25 - 1) && (101 == *1[V26])) ? (++V8 % 1500) ? V6 += (V8 & 1 ^ 1)*(*V1<0 ? -*V1 : *V1) : (V17 = (1 - V4 % 2 * 2)*(V6 - V6) / (V6<V6 ? V6 | 1 : 1 | V6) > 5 ? V22[V4%32] = V18 + V12, V12 = V23[V4++%32] = V18, V18 = 0 : V17, V18++, V6 = main(0, V26)) : (V16 = strrchr(V1, ~(32&*V1&*V1 / 2)&*V1) - V1, V2 = 255);V25 == 1 && (V16*V2 || main(*V1 - 32 ? 8 : 24, V26)); V2 /= 2)
  	V16<V2 ? 0 : main(9 + (V16 - V2) / (V2 / 2 + 1) % 2 * 10, V26);
  for (V6 = 0; V11 <= 32*32&&!V25; V2>7 && V2<13 ? V20 = V16*V20 + V22[V11 / 32] / 2, V20 /= ++V16 : 0)
    !(V11++%32)?0=V16>0?V6=V20,V16:0,V16=V20=0:0,V2=V22[V11%32],V2=V2?V22[V11/32]*10/V2:0,V2*=(V2<5)*2+1;
  for (V14 += (V4 - V14) / 32*32; V11<V25 / 4 * 13000; putchar((V11 / 13000<V25 % 4)*V11 % 2 * 85 << (V11 % 176 / 88)), V11++);
  for (V8 *= !!V25; V14 + V19 != V4 + 1 && V4>5 && !V25; V14 + V19 != V4 + 1 ? (V23[V14%32]>2 * V6 || V14 == V4 ? V10 = V10>6 ? 0 : putchar(V1[V10 - 1 + (1 << V10)]) & 0 : 0, V23[V14++%32]>6 * V6 ? putchar(32) : 0) : 0)
	*V1=32, V10 =V14%2?++V10,2* V10 +(V23[V14++%32]>2*V6): V10;
  return 0;
}

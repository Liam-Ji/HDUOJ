#include<stdio.h>
int main(void)
{
	int n, AH, AM, AS, BH, BM, BS, RH, RM, RS, CM, CS;
	scanf("%d", &n);
	for(int i = 0;i < n;i++) {
		scanf("%d%d%d%d%d%d", &AH, &AM, &AS, &BH, &BM, &BS);
		RS = (AS + BS) % 60;
		CS = (AS + BS) / 60;
		RM = (AM + BM + CS) % 60;
		CM = (AM + BM + CS) / 60;
		RH = AH + BH + CM;
		printf("%d %d %d\n", RH, RM, RS);
	}
	return 0;
}
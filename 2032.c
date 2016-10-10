#include<stdio.h>
int main(void)
{
	int n;
	while(scanf("%d", &n) != EOF) {
		int num[30] = {1};
		if(n > 0) printf("%d\n", num[0]);
		int t = 1;
		for(int i = 1;i < n;i++) {
			
			num[t] = 1;
			for(int j = t-1;j > 0;j--) {
				num[j] = num[j] + num[j-1];
			}
			num[0] = 1;
			printf("%d", num[0]);
			for(int k = 1;num[k];k++)
				printf(" %d", num[k]);
			printf("\n");
			t++;
		}
		printf("\n");
	}
	return 0;
}
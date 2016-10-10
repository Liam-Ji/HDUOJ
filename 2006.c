#include<stdio.h>
int main(void)
{
	int n, re, temp;
	while(scanf("%d ", &n) != EOF){
		re = 0;
//		getchar();
		printf("%d\n", n);
		for(int i = 0; i < n;i++){
			scanf("%d", &temp);
//			getchar();
			printf("\t%d", temp);
			if(temp % 2 != 0){
				
				if(re == 0)
					re = temp;
				else
					re *= temp;
			}
		}
		printf("%d\n", re);
	}
}
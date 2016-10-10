#include<stdio.h>
int main(void)
{
	int m, n, sum1, sum2;
	while(scanf("%d %d", &m, &n) != EOF){
		if(m > n){
			int temp = m;
			m = n;
			n = temp;
		}
		sum1 = 0;
		sum2 = 0;
		for(int i = m;i <=n;i++){
			if( i % 2 == 0)
				sum1 += i*i;
			else
				sum2 += i*i*i;
		}
		printf("%d %d\n", sum1, sum2);
	}
}
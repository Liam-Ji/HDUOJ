#include<stdio.h>
int main(void)
{
	int m, n, a, b, c, f, d;
	while(scanf("%d %d", &m, &n) != EOF){
		f = 0;
		d = 0;
		if(m > n){
			int t = m;
			m = n;
			n = t;
		}
		if(m < 100 || m > 999 || n < 100 || n > 999){
			printf("no\n");
			break;
		}
		for(int i = m;i <= n;i++){
			a = i % 10;
			b = (i / 10) % 10;
			c = i / 100;
			if(i == a*a*a + b*b*b + c*c*c){
				f = 1;
				if(d == 1)
					printf(" ");
				printf("%d", i);
				d = 1;
			}			
		}
		if(f == 0) printf("no");
		printf("\n");
	}
}
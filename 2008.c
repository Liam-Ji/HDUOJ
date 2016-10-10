#include<stdio.h>
int main(void)
{
	int n, a, b, c;
	double temp;
	while(scanf("%d", &n) != EOF){
		if(n == 0) break;
		a = 0;
		b = 0;
		c = 0;
		for(int i = 0;i < n;i++){
			scanf("%lf", &temp);
			if(temp < 0) a++;
			else if(temp == 0) b++;
			else c++;
		}
		printf("%d %d %d\n", a, b, c);
	}
}
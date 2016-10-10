#include<stdio.h>
int main(void)
{
	int n, max, min, t;
	double sum;
	while(scanf("%d", &n) != EOF){
		max = 0;
		min = 100;
		sum = 0;
		for(int i = 0; i < n;i++){
			scanf("%d", &t);
			if(t > max) max = t;
			if(t < min) min = t;
			sum += t;
		}
		printf("%.2lf\n", (sum-max-min) / (n-2));
	}
}
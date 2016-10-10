#include<stdio.h>
#include<math.h>
int main(void)
{
	int m, n;
	double t, sum;
	while(scanf("%d %d", &m, &n) != EOF){
		sum = 0;
		t = (double)m;
		for(int i = 0;i < n;i++){
			sum += t;
			t = sqrt(t);
		}
		printf("%.2lf\n", sum);
	}
}
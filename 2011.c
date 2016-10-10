#include<stdio.h>
int main(void)
{
	int n, m;
	double s;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		s = 0;
		int k = 1;
		scanf("%d", &m);
		for(int j = 1;j <= m;j++){
			s += k * (1.0 / j);
			k *= -1;
		}
		printf("%.2lf\n", s);
	}
	return 0;
}
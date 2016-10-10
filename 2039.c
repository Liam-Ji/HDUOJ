#include<stdio.h>

int main(void)
{
	int m;
	double a, b, c;
	scanf("%d", &m);
	for(int i = 0;i < m;i++) {
		 scanf("%lf %lf %lf", &a, &b, &c);
		 if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
		 	printf("YES\n");
		 else
		 	printf("NO\n");
	}
}
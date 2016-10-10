#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int gcd(int a, int b)
{
	if(a < b)
		swap(&a, &b);
	while(b != 0) {
		int r = b;
		b = a % b;
		a = r;
	}
	return a;
}
int lcm(int a, int b)
{
	return a*b/gcd(a,b);
}
int nlcm(int *a, int n)
{
	if(1 == n) return *a;
	return lcm(a[n-1], nlcm(a, n-1));
}
int main(void)
{
	int n, a, b, *p, temp;
	while(scanf("%d", &n) != EOF) {
		if(0 == n) break;
		p = (int *)malloc(sizeof(int)*n);
		for(int i = 0;i < n;i++) {
			scanf("%d", &temp);
			*(p+i) = temp;
		}
		printf("%d\n", nlcm(p, n));
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int n, a[50] = {1,1}, m;
	scanf("%d", &n);
	while(n-- && scanf("%d", &m)) {
		if(m < 3) printf("%d\n", a[m-1]);
		else {
			for(int i = 2;i < m;i++) {
				a[i] = a[i-2] + a[i-1];
			}
			printf("%d\n", a[m-1]);
		}
	}
	return 0;
}
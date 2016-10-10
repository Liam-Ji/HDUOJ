#include<stdio.h>
int main(void)
{
	int n, m, s;
	scanf("%d", &n);
	while(n-- && scanf("%d", &m)) {
		s = 3;
		while(m--)
			s = (s-1)*2;
		printf("%d\n", s);
	}
}
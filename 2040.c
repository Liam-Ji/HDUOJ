#include<stdio.h>
int main(void)
{
	int m, a, b;
	scanf("%d", &m);
	while(m-- && scanf("%d%d", &a, &b)) {
		int sa = 0, sb = 0;
		for(int i = 1;i*i <= a;i++) {
			if(a % i == 0) {
				if(i != (sa/i) && i != 1)
					sa = sa + i + (a/i);
				else
					sa += i;
			}
		}
		for(int i = 1;i*i <= b;i++) {
			if(b % i == 0) {
				if(i != (sb/i) && i != 1)
					sb = sb + i + (b/i);
				else
					sb += i;
			}
		}
		printf("%s\n", (sa == b)&&(sb == a) ? "YES" : "NO");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, count;
	char a[100];
	scanf("%d\n", &n);
	for(int i = 0;i < n;i++) {
		gets(a);
		count = 0;
		for(int i = 0;i < strlen(a);i++)
			if(a[i] < 0) count++;
		printf("%d\n", count/2);
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	char a[100];
	while(scanf("%d\n", &n) != EOF) {	
		for(int i = 0;i < n;i++) {
			int f = 0;
			gets(a);
			int m = strlen(a);
			for(int i = 0, j = m - 1;i < j;i++, j--) {
				if(a[i] != a[j]) f = 1;
			}
			if(f == 0) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}
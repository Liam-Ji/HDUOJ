#include<stdio.h>
int main(void)
{
	int n, c, r;
	scanf("%d", &n);
	getchar();
	for(int i = 0;i < n;i++){
		r = 0;
		
		while((c = getchar()) != '\n'){
			if(c >= '0' && c <= '9')
				r++;
		}
		printf("%d\n", r);
	}
	return 0;
}
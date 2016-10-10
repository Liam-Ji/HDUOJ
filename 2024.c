#include<stdio.h>
int main(void)
{
	int n, c, f, s;
	while(scanf("%d\n", &n) != EOF)
	{
		for(int i = 0;i < n;i++) {
			f = 0;
			s = 0;
			while((c = getchar()) != '\n') {
				if( 0 == f){
					if(!(c>='a'&&c<='z')&&(c!='_')) {
						f = 1;
						s = 1;
						printf("no\n");
						while((c = getchar()) != '\n');
						break;
					} else {

						f = 1;
					}
				} else {
					if(!(c>='a'&&c<='z')&&(c!='_')&&!(c>='0'&&c<='9')) {
						s = 1;
						printf("no\n");
						while((c = getchar()) != '\n');
						break;
					}
				}
				
			}
			if(0 == s) printf("yes\n");
		}
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int n, m, c, s, temp;
	while(scanf("%d %d", &n, &m) != EOF){
		c = 0;
		s = 0;
		temp = 2;
		int f = 0;
		for(int i = 0;i < n;i++){
			s += temp;
			temp +=2;
			c++;
			if(c == m){
				if(f == 0){
					printf("%d", s/m);
					f = 1;
					s = 0;
					c = 0;
				}
				else{
					printf(" %d", s/m);
					s = 0;
					c = 0;
				}
			}
		}
		if(c == 0)
			printf("\n");
		else
			printf(" %d\n", s/c);
	}
	return 0;
}
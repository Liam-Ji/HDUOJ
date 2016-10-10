#include<stdio.h>
int main(void)
{
	int x, n, f, t;
	while(scanf("%d %d", &n, &x) != EOF){
		if(0 == n && 0 == x) break;
		else if (0 == n) printf("%d\n", x);
		f = 1;
		for(int i = 0;i < n;i++){
			scanf("%d", &t);
			if(t <= x){
				if(1 == f){
					printf("%d", t);
					f = 0;
				} else {
					printf(" %d", t);
				}

			} else {
				if(1 == f){
					printf("%d %d", x, t);
					f = 0;
				} else {
					printf(" %d %d", x, t);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
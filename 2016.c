#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, *p, m, index;
	while(scanf("%d", &n) != EOF){
		if(0 == n) break;
		p = (int *)malloc(n*sizeof(int));
		for(int i = 0;i < n;i++){
			scanf("%d", p+i);
			if(0 == i) {
				m = *p;
				index = 0;
			}
			else{
				if(*(p+i) < m){
					m = *(p+i);
					index = i;
				}

			}
		}
		int temp = *p;
		*p = *(p+index);
		*(p+index) = temp;
		printf("%d", *p);
		for(int i = 1;i < n;i++)
			printf("% d", *(p+i));
		printf("\n");
		free(p);
	}
	return 0;
}
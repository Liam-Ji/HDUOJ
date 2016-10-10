#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int n, *p, *q, temp;
	int temp1, temp2, k, last;
	while(scanf("%d", &n) != EOF) {
		if( 0 == n) break;
		p = (int *)malloc(sizeof(int)*n);
		q = (int *)malloc(sizeof(int)*n);
		for(int i = 0;i < n;i++){
			scanf("%d", &temp);

			*(p+i) = temp;
			*(q+i) = abs(temp);
		}
		k = n-1;
		while(k > 0) {
			last = 0;
			for(int j = 0;j < k;j++) {
				if(*(q+j) < *(q+j+1)) {
					temp1 = *(q+j);
					*(q+j) = *(q+j+1);
					*(q+j+1) = temp1;
					temp2 = *(p+j);
					*(p+j) = *(p+j+1);
					*(p+j+1) = temp2;
					last = j;
				}
			}
			k = last;
		}
		printf("%d", *p);
		for(int i = 1;i < n;i++)
			printf(" %d", *(p+i));
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
	return ((int *)a)[1] - ((int *)b)[1];
}

int main(void)
{
	int **a, n;
	while(scanf("%d", &n) != EOF && 0 != n) {
		a = (int **)malloc(sizeof(int *) * n);
		a[0] = (int *)malloc(sizeof(int) * n * 2);
		for(int i = 1;i < n;i++)
			a[i] = a[i-1] + 2;
		for(int i = 0;i < n;i++)
			scanf("%d%d", &a[i][0], &a[i][1]);			
		qsort(a[0], n, sizeof(int)*2, cmp);
		int count = 1, chindex = 0;
		for(int i = 1;i < n;i++) {
			if(a[i][0] >= a[chindex][1]) {
				count++;
				chindex = i;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int **a, n, x, y;
	while(scanf("%d", &n) != EOF) {
		if(0 == n) break;
		a = (int **)malloc(sizeof(int *) * (n+1));
		a[0] = (int *)malloc(sizeof(int) * 2 * (n+1));
		for(int i = 1;i < n+1;i++)
			a[i] = a[i-1] + 2;
		// for(int i = 0;i < n+1;i++) {
		// 	a[i] = (int *)malloc(sizeof(int) * 2);
		// }
		for(int i = 0;i < n;i++) {
			scanf("%d%d", &x, &y);
			a[i][0] = x;
			a[i][1] = y;
		}

		a[n][0] = a[0][0];
		a[n][1] = a[0][1];
		double sumx = 0, sumy = 0;
		for(int i = 0;i < n;i++) {
			sumx += a[i][0] * a[i+1][1];
			sumy += a[i][1] * a[i+1][0];
		}
		printf("%.1lf\n", (sumx-sumy)/2);
	}
}
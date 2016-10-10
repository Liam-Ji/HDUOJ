#include<stdio.h>
int main(void)
{
	int n;
	while(scanf("%d", &n) != EOF){
		int a[4] = {1,2,3,4};
		if(0 == n) break;
		if(n < 5) printf("%d\n", a[n-1]);
		else{
			for(int i = 5;i <= n;i++){
				int temp = a[1] + a[3];
				a[0] = a[1];
				a[1] = a[2];
				a[2] = a[3];
				a[3] = temp;
			}
			printf("%d\n", a[3]);
		}
	}
	return 0;
}
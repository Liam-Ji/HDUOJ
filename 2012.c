#include<stdio.h>
int main(void)
{
	int x, y, f;
	while(scanf("%d %d", &x, &y) != EOF){
		if(0 == x && 0 == y) break;
		for(int i = x;i <= y;i++){
			f = 1;
			int temp = i*i+i+41;
			for(int j = 2; j*j < temp;j++){
				if(temp % j == 0){
					f = 0;
				} 
			}
			if(f == 0) break;
		}
		if(f == 1)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
}
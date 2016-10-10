#include<stdio.h>
int main(void)
{
	int m, n, maxabs, index_i, index_j, temp, score, nn;
	while(scanf("%d %d", &m, &n) != EOF){
		score = 0;
		maxabs = 0;
		index_i = 0;
		index_j = 0;
		for(int i = 0;i < m;i++){
			for(int j = 0;j < n;j++){
				scanf("%d", &temp);
				nn = temp < 0 ? -temp : temp;
				if(maxabs < nn) {
					score = temp;
					maxabs = nn;
					index_i = i;
					index_j = j;
				}
			}
		}
		printf("%d %d %d\n", index_i+1, index_j+1, score);
	}
	return 0;
}
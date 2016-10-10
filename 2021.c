#include<stdio.h>
int main(void)
{
	int n, m, count;
	while(scanf("%d", &n) != EOF) {
		count = 0;
		if(0 == n) break;
		for(int i = 0;i < n;i++){
			scanf("%d", &m);
			count += (m / 100);
			m = m % 100;
			count += (m / 50);
			m = m % 50;
			count += (m / 10);
			m = m % 10;
			count += (m / 5);
			m = m % 5;
			count += (m / 2);
			m = m % 2;
			count += m;

			// while(m >= 100){
			// 	m -= 100;
			// 	count ++;
			// }
			// while(m >= 50) {
			// 	m -= 50;
			// 	count++;
			// }
			// while(m >= 10) {
			// 	m -= 10;
			// 	count++;
			// }
			// while(m >= 5) {
			// 	m -= 5;
			// 	count++;
			// }
			// while(m >= 2) {
			// 	m -= 2;
			// 	count++;
			// }
			// while(m >= 1) {
			// 	m -= 1;
			// 	count++;
			// }
		}
		printf("%d\n", count);
	}
	return 0;
}
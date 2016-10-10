#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int n, m, **p, temp, count, f;
	double *student, *course;
	while(scanf("%d %d", &n, &m) != EOF) {		
		course = (double *)malloc(sizeof(double) * m);
		memset(course, 0, sizeof(double) * m);
		student = (double *)malloc(sizeof(double) * n);
		memset(student, 0, sizeof(double) * n);
		p = (int **)malloc(sizeof(int *) * n);
		for(int k = 0;k < n;k++)
			p[k] = (int *)malloc(sizeof(int) * m);
		for(int i = 0;i < n;i++) {
			for(int j = 0;j < m;j++) {
				scanf("%d", &temp);
				p[i][j] = temp;
				student[i] += temp;
				course[j] += temp;
			}
		}
		for(int i = 0;i < m;i++)
			course[i] /= n;


		printf("%.2lf", student[0]/m);
		for(int i = 1;i < n;i++)
			printf(" %.2lf", student[i]/m);
		printf("\n%.2lf", course[0]);


		for(int i = 1;i < m;i++)
			printf(" %.2lf", course[i]);
		printf("\n");
		count = 0;
		for(int i = 0;i < n;i++) {
			f = 0;
			for(int j = 0;j < m;j++) {
				if(p[i][j] < (course[j])) {
					f = 1;
					break;
				}
			}
			if(0 == f) count++;
		}
		printf("%d\n\n", count);
		for(int k = 0;k < n;k++)
			free(p[k]);
		free(p);
		free(course);
		free(student);

	}
	return 0;
}
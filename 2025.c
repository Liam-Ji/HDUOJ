#include<stdio.h>
int main(void)
{
	char str[100], maxc, *c;
	while((c = fgets(str, 100, stdin)) != NULL) {
		if('\n' == *c) break;
		maxc = 'A';
		for(int i = 0;*(str+i) != '\0';i++){
			maxc  = maxc < *(str+i) ? *(str+i) : maxc;
		}
//		printf("%c\n", maxc);
		for(int i = 0;*(str+i) != '\0';i++){
			if( *(str+i) == maxc) printf("%c(max)", *(str+i));
			else putchar(*(str+i));
		}
//		putchar('\n');		
	}
	return 0;
}
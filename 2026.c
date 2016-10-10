/* 输入一个英文句子，将每个单词的第一个字母改成大写字母。
 *
 * 输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
 * 请输出按照要求改写后的英文句子。
 */

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100], maxc, *c;
	while((c = fgets(str, 100, stdin)) != NULL) {
		int n = strlen(str);
		if('\n' == *c) break;
		str[0] = str[0] -'a' + 'A';
		for(int i = 1;i < n-1;i++){
			if(str[i] == ' ')
				str[i+1] += ('A' - 'a');
		}
		fputs(str, stdout);
	}
	return 0;
}
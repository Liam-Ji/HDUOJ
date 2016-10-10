/** 
 * 统计每个元音字母在字符串中出现的次数。
 * 输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的字符串。
 * 对于每个测试实例输出5行，格式如下：
 * a:num1
 * e:num2
 * i:num3
 * o:num4
 * u:num5
 * 多个测试实例之间由一个空行隔开。
 * 请特别注意：最后一块输出后面没有空行：）
 */

#include<stdio.h>
int main(void)
{
	int n;
	char ao[5] = {'a', 'e', 'i', 'o', 'u'}, str[100];
	scanf("%d\n", &n);
	for(int i = 0;i < n;i++) {
		int count[5] = {0};
		fgets(str, 100, stdin);
		for(int i = 0; *(str+i) != '\0'; i++) {
			switch(*(str+i)) {
				case 'a': {
					count[0]++;
					break;
				}
				case 'e': {
					count[1]++;
					break;
				}
				case 'i': {
					count[2]++;
					break;
				}
				case 'o': {
					count[3]++;
					break;
				}
				case 'u': {
					count[4]++;
					break;
				}

			}
		}
		for(int i = 0;i < 5;i++) {
			printf("%c:%d\n", ao[i], count[i]);
		}
		if(i < n-1)
			putchar('\n');
	}
	return 0;
}
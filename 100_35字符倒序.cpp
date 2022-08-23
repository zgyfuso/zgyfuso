#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 100
int main(void)
{
	int i = 0;
	char* array;
	char first[max];
	printf("输入一串字符串：");
	do {
		first[i] = getchar();
		if (first[i] == '\n') --i;//删除、n所占的位置，排序时系统自动忽略、n
		if (first[i] == '#') {
			first[i] = '\0';
			break;
		}
		i++;
	} while (i<100);
	printf("%d", i);
	printf("\n以下为排序后的字符串：");
	for (int j = i; j >= 0; j--) printf("%c", first[j]);
	return 0;
}
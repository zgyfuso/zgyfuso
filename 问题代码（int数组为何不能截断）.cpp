#include<stdio.h>
#define max 100
int main(void)
{
	long array[max];
	int i=0;
	int flag=0;
	printf("输入一串字符串：");
	do {
		scanf_s("%ld", &array[i]);
		//if (array[i] == '\n') --i;//删除、n所占的位置，排序时系统自动忽略、n
		if (array[i] == '#') {
			array[i] = '\0';
			break;
		}
		flag++;
		i++;
	} while (i < 100);
	printf("%d", flag);
	return 0;
}
#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int n1;
	int* array;
{printf("请输入所要创建的一维动态数组的长度：");
		scanf_s("%d", &n1);
		array = (int*)calloc(n1, sizeof(int));
		printf("输入%d个字符：", n1);
		for (int i = 0; i < n1; i++) {
			printf("\n%d###:", i + 1);
			scanf_s("%d", &array[i]);
		}
		printf("你输入的字符是：");
		for (int i = 0; i < n1; i++) {
			printf("%d\t", array[i]);
		}
		printf("\n\n");
		printf("倒叙排列后的为：");
		for (int i = n1 - 1; i >= 0; i--) {
			printf("%d\t", array[i]);
		}
	}
free(array);
	return 0;
}
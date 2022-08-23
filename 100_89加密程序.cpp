#include<stdio.h>
void main()
{
	int array[4],temp;
	printf("输入四个数字：");
	for (int i = 0; i < 4; i++) {
		printf("%d：",i+1);
		if (scanf_s("%d", &array[i]) != 1) {
			printf("\n###输入错误###");
			break;
		}
	}
	for (int i = 0; i < 4; i++) {
		array[i] += 5;
		 array[i] %= 10;
	}
	for (int i = 0; i < 4 / 2; i++) {
		temp = array[i];
		array[i] = array[4 - i-1];
		array[4 - 1 - i] = temp;
	}
	printf("\n\n以下是加密后的数字：");
	for (int i = 0; i < 4; i++) {
		printf("%d", array[i]);
	}
}
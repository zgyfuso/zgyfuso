#include<stdio.h>
#define max 11
int main(void)
{
	int array[max];
	int i = 0,j=0;
	int add,t,t_;
	for (int i = 0; i < 11; i++) array[i] = 0;
	printf("输入一串数字，最多十个\n");
	printf("数字：");
	do {
		printf("%d###:", i + 1);
		scanf_s("%d", &array[i]);
		
		getchar();
		i++;
	} while (i < 10);
	printf("排序前:");
	for (int i = 0; i < 10; i++) printf("%3d", array[i]);
	printf("\n");
	printf("排序后:");
	for (int i = 0; i < 10 - 1; i++) {
		int temp;
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) printf("%3d", array[i]);
	printf("\n输入你想插入的数字：");
	scanf_s("%d", &add);
	for (i = 0; i < 10; i++) {
		if (array[i]> add) {
			t = array[i];
			array[i] = add;
		for (j=i + 1; j < 11; j++) {
			t_ = array[j];
			array[j] = t;
			t = t_;
	}
		break;
		}
	}
	for (int i = 0; i < 11; i++) printf("%3d", array[i]);
	return 0;
}
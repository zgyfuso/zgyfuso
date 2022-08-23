#include<stdio.h>
int main(void)
{
	int array[3][3];
	int total_a=0, total_b=0;
	int i, j;
	printf("输入你的3*3数组\n");
	printf("************************************\n");
	for (int i = 0; i < 3; i++) {
		printf("输入第%d行",i+1);
		for (int j = 0; j < 3; j++) {
			printf("第%d个数据:",j+1);
			scanf_s("%d", &array[i][j]);

		}
		printf("\n");
	}
	printf("************************************\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
	printf("************************************\n");
	for (i = 0,j=i; i < 3; i++,j++) {
 
		total_a += array[i][j];
	}
	for (i = 3-1,j = i; i >0-1; i--,j--) {

		total_b += array[i][j];
	}
	printf("\n左至右对角线和为%d，右到左和为%d", total_a, total_b);
	return 0;
}
#include<stdio.h>
void main()
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int temp;
	printf("����ǰ�������ǣ�");
	for (int i = 0; i < 10; i++) printf("%3d", array[i]);
	for (int i = 0; i < 5; i++) {
		temp = array[i];
		array[i] = array[10 - 1 - i];
		array[10 - 1 - i] = temp;
	}
	printf("\n�����������ǣ�");
	for (int i = 0; i < 10; i++) printf("%3d", array[i]);
}
#include<stdio.h>
int main(void)
{
	int array[3][3];
	int total_a = 0, total_b = 0;
	int i, j;
	int a, b;
	printf("���봴�����˼������У�\n�У�");
	scanf_s("%d", &a);
	printf("�У�");
	scanf_s("%d", &b);
	printf("************************************\n");
	printf("�������%d*%d����\n",a,b);
	printf("************************************\n");
	for (int i = 0; i < a; i++) {
		printf("�����%d��", i + 1);
		for (int j = 0; j < b; j++) {
			printf("��%d������:", j + 1);
			scanf_s("%d", &array[i][j]);

		}
		printf("\n");
	}
	printf("************************************\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
	printf("************************************\n");
	for (i = 0, j = i; i < a; i++, j++) {

		total_a += array[i][j];
	}
	for (i = a - 1, j = i; i > 0 - 1; i--, j--) {

		total_b += array[i][j];
	}
	printf("\n�����ҶԽ��ߺ�Ϊ%d���ҵ����Ϊ%d", total_a, total_b);
	return 0;
}
#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int n1;
	int* array;
{printf("��������Ҫ������һά��̬����ĳ��ȣ�");
		scanf_s("%d", &n1);
		array = (int*)calloc(n1, sizeof(int));
		printf("����%d���ַ���", n1);
		for (int i = 0; i < n1; i++) {
			printf("\n%d###:", i + 1);
			scanf_s("%d", &array[i]);
		}
		printf("��������ַ��ǣ�");
		for (int i = 0; i < n1; i++) {
			printf("%d\t", array[i]);
		}
		printf("\n\n");
		printf("�������к��Ϊ��");
		for (int i = n1 - 1; i >= 0; i--) {
			printf("%d\t", array[i]);
		}
	}
free(array);
	return 0;
}
#include<stdio.h>
#define one 100
void change(long* array, long* array_, int flag,int p,int q);
int main(void)
{
	long array[one], array_copy[one];
	int start, last,temp, flag=-1;
	while (array[flag] != 0)
	{
		flag++;
		printf("�����%d������\n", flag + 1);
		scanf_s("%ld", &array[flag]);
	}
	printf("��������%d�����֣�����Ҫ���Ƽ�����������\n", flag);
	printf("��    ");
	scanf_s("%d", &start);
	printf("\nĩ��   ");
	printf("\n\n\n");
	scanf_s("%d", &last);
	change(array, array_copy, flag, start, last);
	printf("�滻ָ������ֵ�ɹ������ƺ��������\n");
	for (int i = start-1; i < last; i++) {
		printf("%ld\n", array_copy[i]);
	}
	return 0;
}
void change(long* array, long* array_copy, int flag, int p, int q)
{
	int i, j;
	for (i = p-1,j=0; i <q; i++,j++) 
	{
		array_copy[j] = array[i];
	}
}
#include<stdio.h>
#define lon 100
void sort(long test, long* array);
int main(void)
{
	long test[lon], flag = -1;
	printf("������Ҫ��������֣����һ�ٸ�������0ʱ�˳�����\n");
	while (test[flag] != 0)
	{
		flag++;
		printf("�����%d������\n", flag + 1);
		scanf_s("%ld", &test[flag]);
	}
	printf("������������\n\n");
	sort(flag, test);
	for (int i = 0; i < flag; i++) printf("%ld\n", test[i]);
	return 0;
}
void sort(long test, long* array)
{
	long temp;
	for (int i = 0; i < test - 1; i++)
		for (int j = 0; j < test - 1 - i; j++)
		{
			if (array[j] < array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
}
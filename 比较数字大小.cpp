#include<stdio.h>
#define lon 100
long findmax(long test, long array[]);
int main(void)
{
	long test[lon],flag=-1,last;
	printf("������Ҫ�Ƚϵ����֣����һ�ٸ�������0ʱ�˳�����\n");
	while (test[flag] != 0)
	{
		flag++;
		printf("�����%d������\n", flag + 1);
			scanf_s("%ld", &test[flag]);
	} 
	last = findmax(flag, test);
	printf("����������%ld\n", last);

	return 0;
}
long findmax(long test, long array[])
{
	int max,i=0;
	max = array[i];
	for (i; i < test; i++)
	{
		if (array[i] > max) max = array[i];
	}
	return max;
}
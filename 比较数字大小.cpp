#include<stdio.h>
#define lon 100
long findmax(long test, long array[]);
int main(void)
{
	long test[lon],flag=-1,last;
	printf("输入需要比较的数字，最多一百个，输入0时退出运行\n");
	while (test[flag] != 0)
	{
		flag++;
		printf("输入第%d个数字\n", flag + 1);
			scanf_s("%ld", &test[flag]);
	} 
	last = findmax(flag, test);
	printf("最大的输入是%ld\n", last);

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
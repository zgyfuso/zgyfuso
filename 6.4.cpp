#include<stdio.h>
int main(void)
{
	printf("����ת���������\n");
	float array, limit;
	scanf_s("%f", &limit);
	for (array = 1; array <= limit; array++)
	{
		printf("������%f,����ƽ����%f������������%f\n", double(array), double(array) * double(array), double(array) * double(array) * double(array));
	}
	printf("over");
	return 0;
}

#include<stdio.h>
void readdata(double* array);
void average_row(double* array);
void average(double* array);
void findmax(double* array);
int main(void)
{
	double array[3][5];
	readdata(*array);
	average_row(*array);
	average(*array);
	findmax(*array);
	return 0;
}
void readdata(double* array)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("�����%d�У���%d������\n", i + 1, j + 1);
			scanf_s("%lf", &array[i * 5 + j]);
		}
		printf("\n\n");
	}
		
}
void average_row(double* array)
{
	double average_row = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			average_row += array[i * 5 + j];
		}
		printf("��%d�е�ƽ��ֵ��%.2lf\n", i+1, average_row/5 );
		average_row = 0;
	}
	printf("\n\n\n");
	
}
void average(double* array)
{
	double average = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			average += array[i * 5 + j];
		}
	}
	printf("ȫ������ƽ��ֵ��%.2lf\n", average / 15);
	printf("\n\n\n");
}
void findmax(double* array)
{
	double max = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (array[i * 5 + j] > max) max = array[i * 5 + j];
		}
	}
	printf("ȫ������������������%.2lf\n", max);
}
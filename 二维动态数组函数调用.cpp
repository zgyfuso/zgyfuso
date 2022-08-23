#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
void information(int **, int );
int main(void)
{
	int get;
	printf("输入你的矩阵数：");
	scanf_s("%d", &get);
	int** array;//第一维度
	array = (int**)malloc(get * sizeof(int));
	for (int i = 0; i < get; i++)
	{
		array[i] = (int*)malloc(get * sizeof(int));
	}
	void information(array, get);


	//*********************************************
	for (int i = 0; i < get; i++)
	{
		free(array[i]);
	}
	free(array);
	//*********************************************
}
void information(int** array, int get)
{
	for (int i = 0; i < get; i++)
	{
		for (int j = 0; j < get; j++)
		{
			array[i][j] = 0;
		}
	}
	for (int i = 0; i < get; i++)
	{
		for (int j = 0; j < get; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
}
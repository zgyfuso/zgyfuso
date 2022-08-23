#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void get(int*arr);
void change(int* arr);
void put(int* arr);
int main(void)
{
	int array[100];
	get(array);
	change(array);
	put(array);
	return 0;
}
void get(int* arr)
{
	srand(time(0));
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 10 + 1;
	}
}
void change(int* arr)
{
		int temp;
		for (int i = 0; i < 100 - 1; i++)
			for (int j =0; j < 100 - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
}
void put(int* arr)
{
	for (int i = 0; i < 100; i++) {
		printf("第%d个数字是%d\n",i+1,arr[i]);
	}
}
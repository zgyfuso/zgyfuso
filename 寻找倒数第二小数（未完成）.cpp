#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;
int run(int array[],int flag)
{
	int add = 0;
	int max_temp, min_temp;
	min_temp = array[0];
	max_temp = array[1];
	while (add++<flag)
	{
		if (min_temp < max_temp)
		{
			int temp = min_temp;
			min_temp = max_temp;
			max_temp = temp;
		}
		if (min_temp > array[add])
		{
			min_temp = array[add];
		}
		
		if (max_temp > array[add] && max_temp != min_temp)
		{
			max_temp = array[add];
		}
	}
	return max_temp;
}

int main(void)
{
	int array[] = { 6,2,5,3,4 };
	int flag=sizeof(array)/sizeof(int)-1;
	//printf("%d", flag);
	printf("%d", run(array,flag));
}
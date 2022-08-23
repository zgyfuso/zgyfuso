#include <stdio.h>
void getmaxmin(int*, int*,int[],int);
void main(void)
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int max, min;
	getmaxmin(&max, &min, array,10);
	printf("max is %d,min is %d", max, min);
}
void getmaxmin(int* max, int* min, int array[],int flag)
{
	*min = *max = array[0];
	for (int i = 0; i < flag; i++) {
		if (array[i] > *max) *max = array[i];
		if (array[i] < *min) *min = array[i];
	}
}
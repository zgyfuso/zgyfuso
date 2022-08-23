#include<stdio.h>
void get(int*,int*);
void found(int*, int,int*,int*);
void change(int*, int*, int*,int);
void main()
{
	int array[20];
	int max, min, flag,temp;
	
	get(array, &flag);
	max = array[0];
	found(array, flag,&max,&min);
	for (int i = 0; i < flag; i++) {
		printf("%4d", array[i]);
	}
	 change(array, &max,&min,flag);
	printf("\n#################\n");
	for (int i = 0; i < flag; i++) {
		printf("%4d", array[i]);
	}
}
void get(int *array,int*flag)
{
	printf("你想输入几个数字：");
	scanf_s("%d", &*flag);
	for (int i = 0; i < *flag; i++) {
		printf("%d:", i + 1);
		scanf_s("%d", &array[i]);
	}
}
void found(int*array, int flag,int *max,int *min)
{
	for (int i = 0; i < flag; i++) {
		if (array[i] > *max) *max = i;
	}
	*min = array[0];
	for (int i = 0; i < flag; i++) {
		if (array[i] < *min) *min = i;
	}
}
void change(int*array, int*max, int*min,int flag)
{
	int temp;
	temp = array[0];
	array[0] = array[*max];
	array[*max] = temp;

	temp = array[flag - 1];
	array[flag - 1] = array[*min];
	array[*min] = temp;
}
#include<stdio.h>
int max(int array[]);
int min(int array[]);
int main(void)
{
	int array[10], test = 0, i = -1, temp, max_, min_;
	do {
		test++;
		i++;
		printf(" input %d array\n", test);
		scanf_s("%d", &array[i]);
	} while (i < 9);
	max_ = max(array);
	printf("***the max is %d***\n", array[max_]);
	min_ = min(array);
	printf("***the min is %d***\n", array[min_]);
	temp = array[max_];
	array[max_] = array[min_];
	array[min_] = temp;
	for (int i =0; i < 10; i++) {
		printf("%d\n", array[i]);
	}
	return 0;
}
int max(int array[])
{
	int i = 0, big;
	big = array[i];
	do {
		i++;
		if (array[i] > array[big])
			big = i;
	} while (i <10);
	return big;
}
int min(int array[])
{
	int i = 0, small;
	small = array[i];
	do {
		i++;
		if (array[i] < array[small])
			small = i;
	} while (i < 9);
	return small;
}
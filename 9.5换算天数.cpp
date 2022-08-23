#include<stdio.h>
#define MOUTH 12;
int allday(int day[][12], int mouth, int days, int years);
int main(void)
{
	int day[2][MOUTH] = { {31,28,31,30,31,30,31,31,30,31,30,31},
					  {31,29,31,30,31,30,31,31,30,31,30,31} };
	int mouth, days, years, result;
	printf("input years\n");
	scanf_s("%d", &years);
	printf("input mouths\n");
	scanf_s("%d", &mouth);
	printf("input days\n");
	scanf_s("%d", &days);
	result = allday(day, mouth, days, years);
	if (result < 0)
		printf("you input wrong\n");
	printf("all of the days is %d", result);
	return 0;
}
int allday(int day[][12], int mouth, int days, int years)
{
	int total = 0, flag;
	if (((years % 4 == 0) && (years % 100 != 0)) || (years % 400 == 0))
	{
		for (flag = 0; flag < mouth; flag++) {
			total += day[1][flag];
		}
		flag = flag - 1;
		total -= day[1][flag];
		total += days;
		return total;
	}
	else {

		for (flag = 0; flag < mouth; flag++) {
			total += day[0][flag];
		}
		flag = flag - 1;
		total -= day[0][flag];
		total += days;
		return total;
	}
}
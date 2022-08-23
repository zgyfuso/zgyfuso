#include<stdio.h>
#define MOUTH 12
void change(int day[][MOUTH],int *mouth, int *days, int years,int allday);
int main(void)
{
	int day[2][MOUTH] = { {31,28,31,30,31,30,31,31,30,31,30,31},
					  {31,29,31,30,31,30,31,31,30,31,30,31} };
	int mouth=0, days=0, years,allday;
	printf("input years\n");
	scanf_s("%d", &years);
	printf("input all of years \n");
	scanf_s("%d", &allday);
	change(day,&mouth, &days, years,allday);
	printf("the time of input is %d years,%d mouth,%d days\n",years,mouth,days);
	return 0;
}
void change(int day[][12], int* mouth, int* days, int years, int allday)
{
	int flag;
	if (((years % 4 == 0) && (years % 100 != 0)) || (years % 400 == 0))
	{
		for (flag = 0; flag < 12; flag++) {
			allday -= day[1][flag];
			if (allday > 0 && allday < 32)
				break;
		}
	}
	else {
		for (flag = 0; flag < 12; flag++) {
			allday -= day[1][flag];
			if (allday > 0 && allday < 32)
				break;
		}
	}
			*mouth = flag + 1 + 1;
			*days = allday;
}
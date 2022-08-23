#include<stdio.h>
int main(void)
{
     const char *month[12]={"January","February","March","April","May",
	"June","July","August","September","October","November","December"};
	 int input;
	 printf("input a number to judge\n");
	 scanf_s("%d", &input);
	 if (input <= 12 && input >= 1)
		 printf("the  %d mouth is %s\n", input, month[input - 1]);
	 else
		 printf("you input wrong array\n");
	 return 0;
}
#include <stdio.h>
#include <stdlib.h>
time test;//全局变量重点
typedef struct a
{
	int hour;
	int minute;
	int second;
}time;
void Update()
{
	test.second++;
	if (test.second == 60)
	{
		test.second = 0;
		test.minute++;
	}
	if (test.minute == 60)
	{
		test.minute = 0;
		test.hour++;
	}
	if (test.hour == 24)
	{
		test.hour = 0;
	}
}
void Display()
{
	printf("%2d:%2d:%2d\n", test.hour,test. minute,test. second);
}
void Delay()
{
	int t;
	for (t = 0; t < 1000000000; t++);
}
int main()
{
	int i;

	test.hour =test. minute =test. second = 0;
	for (i = 0; i < 10000000; i++)
	{
		Update();
		Display();
		Delay();
	}
	return 0;
}
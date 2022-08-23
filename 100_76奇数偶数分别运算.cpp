#include<stdio.h>
void ji(int);
void ou(int);
int main(void)
{
	int test,last;
	printf("输入一个数字：");
	if (scanf_s("%d", &test)) {
		last = test % 2;
		if (last == 0)
			ou(test);
		else ji(test);
	}
}
void ou(int test)
{
	float result=0;
	for (float i = 2; i <= test; i += 2) {
		result+= (float)1 / i;
	}
	printf("\n\n最终结果是%.3f", result);
}
void ji(int test)
{
	float result = 0;
	for (float i = 1; i <= test; i += 2) {
		result += (float)1 / i;
	}
	printf("\n\n最终结果是%.3f", result);
}
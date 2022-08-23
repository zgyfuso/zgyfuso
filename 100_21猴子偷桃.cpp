#include<stdio.h>
int main(void)
{
	int begin=1,last,temp;
	printf("让我猜猜看你知道猴子偷吃了几天吧\n");
	scanf("%d", &temp);
	for (int i = 1; i < temp; i++) {
		last = (begin + 1) * 2;
		begin = last;
	}
	printf("第一天的数目是%d\n", last);
	return 0;
}
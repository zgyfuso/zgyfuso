#include<stdio.h>
void main()
{
	double money,last;
	int flag;
	do {
		printf("输入你获得的利润\n");
		scanf_s("%lf", &money);
	} while (money <= 0);
		last = money * 0.1;
	if (money > 100000) {
		last += (money - 100000) * 0.075;
		if (money > 200000) {
			last += (money - 200000) * 0.05;
			if (money > 400000) {
				last += (money - 400000) * 0.03;
				if (money > 600000) {
					last += (money - 600000) * 0.015;
					if (money > 1000000) {
						last += (money - 1000000) * 0.01;
					}
				}
			}
		}
	}
	printf("你的奖金是%lf\n", last);
}
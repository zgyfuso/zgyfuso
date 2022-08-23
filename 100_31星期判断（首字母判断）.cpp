#include<stdio.h>
int main(void)
{
	char seven[7][10] = { "monday", "tuesday","wednesday","thursday",
		"friday","saturday","sunday" };
	char test[2];
	char chinese[7][20] = { "星期一","星期二","星期三","星期四",
		"星期五","星期六","星期天" };
	printf("输入一个字符：");
	test[0] = getchar();
	getchar();
	if (test[0] == 't' || test[0] == 's')
	{
		printf("\n再输入一个字符：");
		test[1] = getchar();
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 1; j++) {
				if (test[0] == seven[i][j]&&test[1]==seven[i][j+1]) {
					for (int k = 0; k < 20; k++)
						printf("%c", chinese[i][k]);
				}
			}
		}
	}
	else if (test[0] == 'm' || test[0] == 'w' || test[0] == 'f') {
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 1; j++) {
				if (test[0] == seven[i][j]) {
					for (int k = 0; k < 20; k++)
						printf("%c", chinese[i][k]);
				}
			}
		}
	}
	else printf("输入错误\n");
	return 0;
}
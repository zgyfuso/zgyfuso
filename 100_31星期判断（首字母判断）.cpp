#include<stdio.h>
int main(void)
{
	char seven[7][10] = { "monday", "tuesday","wednesday","thursday",
		"friday","saturday","sunday" };
	char test[2];
	char chinese[7][20] = { "����һ","���ڶ�","������","������",
		"������","������","������" };
	printf("����һ���ַ���");
	test[0] = getchar();
	getchar();
	if (test[0] == 't' || test[0] == 's')
	{
		printf("\n������һ���ַ���");
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
	else printf("�������\n");
	return 0;
}
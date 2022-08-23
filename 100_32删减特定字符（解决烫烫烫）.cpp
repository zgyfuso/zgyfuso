#include<stdio.h>
int main(void)
{
	char array[256];
	char flag;
	int temp,test=0;
	printf("输入你的字符串（#结束）:");
	for (int i = 0; i < 256; i++) array[i] = 0;//牛逼牛逼牛逼牛逼
	//数组全部初始化为0即可解决烫烫烫。
	for (int i = 0; i < 256; i++) {
		array[i] = getchar();
		test++;
		if (array[i] == '#') {
			array[i] = ' ';
			break;
		}
	}
	getchar();
	temp = sizeof(array);
	printf("%d", temp);
	printf("\n输入你想替换的字符（单个）");
	flag = getchar();
	for (int i = 0; i < temp/test/2; i++) {
		if (flag == array[i]) array[i] = ' ';
	}
	for (int i = 0; i < temp/test/2; i++) {
		putchar(array[i]);
	}
	return 0;
}
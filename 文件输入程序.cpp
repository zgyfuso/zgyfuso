#include<stdio.h>
#include<stdlib.h>
#define N 80
int main(void)
{
	FILE* fp;
	char str[N];
	if ((fp = fopen("demo.txt", "w")) == NULL) {
		printf("文件打开错\n");
		exit(0);
	}
	printf("输入一串字符，字符将会跟随在demo。txt后\n");
	gets_s(str);
	fputs(str, fp);
	fclose(fp);
	if ((fp = fopen("demo.txt", "r")) == NULL) {
		printf("文件打开错\n");
		exit(0);
	}
	fgets(str, N,fp);
	puts(str);
	fclose(fp);
	return 0;
}
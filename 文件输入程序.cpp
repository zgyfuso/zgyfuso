#include<stdio.h>
#include<stdlib.h>
#define N 80
int main(void)
{
	FILE* fp;
	char str[N];
	if ((fp = fopen("demo.txt", "w")) == NULL) {
		printf("�ļ��򿪴�\n");
		exit(0);
	}
	printf("����һ���ַ����ַ����������demo��txt��\n");
	gets_s(str);
	fputs(str, fp);
	fclose(fp);
	if ((fp = fopen("demo.txt", "r")) == NULL) {
		printf("�ļ��򿪴�\n");
		exit(0);
	}
	fgets(str, N,fp);
	puts(str);
	fclose(fp);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char*,char*);
void main()
{
	char a[20], b[20], c[20];
	printf("�����һ����ĸ��");
	gets_s(a,20);
	printf("����ڶ�����ĸ��");
	gets_s(b,20);
	printf("�����������ĸ��");
	gets_s(c,20);
	if (strcmp(a,b)>0) swap(a, b);
	if (strcmp(b,c)>0) swap(b, c);
	if (strcmp(a,b) > 0) swap(a, b);
	printf("\n\n###############################\n");
	printf("�����\n%s\n%s\n%s", a, b, c);
}
void swap(char* a, char* b)
{
	char temp[20];
	strcpy_s(temp+1,strlen (a), a);
	strcpy_s(a+1,strlen(b), b);//��Ҫ��һ�������'\0'
	strcpy_s(b+1,strlen(temp), temp);
}
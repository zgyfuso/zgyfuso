#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* charge(char*, char*);
void main()
{
	char array_1[20], array_2[20];
	char* array;
	printf("�����һ���ַ�����");
	scanf_s("%s", &array_1, sizeof(array_1));
	printf("����ڶ����ַ�����");
	scanf_s("%s", &array_2, sizeof(array_2));
	array = charge(array_1, array_2);
	puts("�����Ǻϲ�����ַ�����");
	puts(array);
}
char* charge(char*a, char*b)
{
	char* arr;
	arr = (char*)malloc((strlen(a) + strlen(b) + 1));
	arr[0] = '\0';
	strcat_s(arr,strlen(arr), a);
	strcat_s(arr,strlen(arr), b);
	return arr;
}
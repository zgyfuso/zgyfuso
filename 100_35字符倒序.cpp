#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 100
int main(void)
{
	int i = 0;
	char* array;
	char first[max];
	printf("����һ���ַ�����");
	do {
		first[i] = getchar();
		if (first[i] == '\n') --i;//ɾ����n��ռ��λ�ã�����ʱϵͳ�Զ����ԡ�n
		if (first[i] == '#') {
			first[i] = '\0';
			break;
		}
		i++;
	} while (i<100);
	printf("%d", i);
	printf("\n����Ϊ�������ַ�����");
	for (int j = i; j >= 0; j--) printf("%c", first[j]);
	return 0;
}
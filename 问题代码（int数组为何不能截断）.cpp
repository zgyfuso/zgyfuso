#include<stdio.h>
#define max 100
int main(void)
{
	long array[max];
	int i=0;
	int flag=0;
	printf("����һ���ַ�����");
	do {
		scanf_s("%ld", &array[i]);
		//if (array[i] == '\n') --i;//ɾ����n��ռ��λ�ã�����ʱϵͳ�Զ����ԡ�n
		if (array[i] == '#') {
			array[i] = '\0';
			break;
		}
		flag++;
		i++;
	} while (i < 100);
	printf("%d", flag);
	return 0;
}
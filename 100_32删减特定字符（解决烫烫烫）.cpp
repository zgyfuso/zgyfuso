#include<stdio.h>
int main(void)
{
	char array[256];
	char flag;
	int temp,test=0;
	printf("��������ַ�����#������:");
	for (int i = 0; i < 256; i++) array[i] = 0;//ţ��ţ��ţ��ţ��
	//����ȫ����ʼ��Ϊ0���ɽ�������̡�
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
	printf("\n���������滻���ַ���������");
	flag = getchar();
	for (int i = 0; i < temp/test/2; i++) {
		if (flag == array[i]) array[i] = ' ';
	}
	for (int i = 0; i < temp/test/2; i++) {
		putchar(array[i]);
	}
	return 0;
}
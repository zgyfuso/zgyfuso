#include<stdio.h>
#include<stdlib.h>
#define LENGH 10
int again=1;
typedef struct commodity
{
	long numbering;
	char name[LENGH];
	int quantity;
	int price;
	char time[LENGH];
	char suppeier[LENGH];
}COMMODITY;
void show_manu(COMMODITY commodity[]);
void get_information(COMMODITY commodity[]);
void out_information(COMMODITY commodity[]);
void delete_information(COMMODITY commodity[]);
void change_information(COMMODITY commodity[]);
void rout(void);
int main(void)
{
	COMMODITY commodity[LENGH];
	do {
		show_manu(commodity);
	} while (again==1);
	//��û��������������һ��ѭ����hhhhhhhh
	//���������
}
void get_information(COMMODITY commodity[])
{
	int i = 0;
	char flag;
	printf("��Ʒ������");
	do {
		
		printf("\n*************************************\n");
		printf("�����%d����Ʒ�������Ϣ��\n",i+1);
		printf("�����ţ�");
		scanf_s("%ld", &commodity[i].numbering);
		printf("�������ƣ���������ʮ���ַ��Ҳ������ո񣩣�");
		scanf_s("%s", commodity[i].name,LENGH);
		printf("����������");
		scanf_s("%d", &commodity[i].quantity);
		printf("����۸�");
		scanf_s("%d", &commodity[i].price);
		printf("�����������ڣ�����ʽΪ2000-1-1��   ");
		scanf_s("%s", commodity[i].suppeier,LENGH);
		printf("���빩Ӧ�̣�������ʮ���ַ��Ҳ������ո񣩣�");
		scanf_s("%s", commodity[i].time,LENGH);
		printf("*************************************\n");
		i++;
		printf("�ɹ�¼��%d����Ʒ��Ϣ���Ƿ�������룺����-y����-n��",i);
		getchar();
		flag = getchar();
	} while (flag =='y' && i < LENGH);
	printf("��������%d����Ʒ��Ϣ", i );

}
void show_manu(COMMODITY commodity[])
{
	system("cls");
	int flag;
	printf("\n*************************************\n");
	printf("***��ӭʹ�ÿ�����ϵͳ***");
	printf("\n  *1����Ʒ���  *");
	printf("\n  *2����Ʒ����  *");
	printf("\n  *3��ɾ����Ʒ  *");
	printf("\n  *4���޸���Ʒ  *");
	printf("\n  *5����ѯ��Ʒ��Ϣ  *");
	printf("\n  *6����Ʒ����  *");
	printf("\n  *7����Ʒͳ��  *");
	printf("\n*************************************\n");
	
	do {
		printf("����������Ҫ���в�������ţ�");
		scanf_s("%d", &flag);
	} while (flag>7||flag<1);

	switch (flag)
	{
	case 1:system("cls");
		get_information(commodity);
		rout();
		break;
	case 2:system("cls");
		out_information(commodity);
		rout();
		break;
	case 3:system("cls");
		delete_information(commodity);
		rout();
		break;
	case 4:system("cls");
		change_information(commodity);
		rout();
		break;
	case 5:system("cls");
		printf("\n\n\n\n\n\n������д�ˣ�����,���д���ˣ����ͣ����л�㱹�\n");
		rout();
		break;
	case 6:system("cls");
		printf("\n\n\n\n\n\n������д�ˣ����ᣬ���д���ˣ����ͣ����л�㱹�\n");
		rout();
		break;
	case 7:system("cls");
		printf("\n\n\n\n\n\n������д�ˣ����ᣬ���д���ˣ����ͣ����л�㱹�\n");
		rout();
		break;
	}

	}
void out_information(COMMODITY commodity[])
{
	long numbering;
	printf("��Ʒ�������");
	printf("\n*************************************\n");
	printf("������Ҫ�������Ʒ�ı�ţ�");
	scanf_s("%ld", &numbering);
	for (int i = 0; i < LENGH; i++) {
		if (numbering == commodity[i].numbering) {
			printf("�ҵ�����Ҫ����Ʒ��λ�ڵ�%d�����ֽ�����⡣", i + 1);
			printf("***����ɹ�***");
			printf("\n����Ʒ���Ϊ%ld",commodity[i].numbering);
			printf("\n����Ϊ%s", commodity[i].name);
			printf("\n����Ϊ % d", commodity[i].quantity);
			printf("\n�۸�Ϊ%d", commodity[i].price);
			printf("\n��������Ϊ%s",commodity[i].suppeier);
			printf("\n��������Ϊ%s",commodity[i].time);
		}
		else {
			printf("����в�����%ld��ŵ���Ʒ", numbering);
			break;
		}
	}
}
void rout(void)
{
	char charge;
	getchar();
	
		printf("\n##########################\n");
		printf("�Ƿ�������иó�����-y����-n��");
		printf("\n##########################\n");
		charge = getchar();

	
	if (charge == 'n') {
		again = 0;
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t��лʹ�øó���");
		int  i, j, k, l, m;
		char c = 3;
		for (i = 1; i <= 5; i++)    printf("\n"); 
		for (i = 1; i <= 3; i++) { 
			for (j = 1; j <= 32 - 2 * i; j++)  printf(" ");
			for (k = 1; k <= 4 * i + 1; k++)  printf("%c", c);
			for (l = 1; l <= 13 - 4 * i; l++)  printf(" "); 
			for (m = 1; m <= 4 * i + 1; m++)  printf("%c", c);
			printf("\n"); 
		}
		for (i = 1; i <= 3; i++) { 
			for (j = 1; j <= 24 + 1; j++)   printf(" "); 
			for (k = 1; k <= 29; k++)   printf("%c", c);
			printf("\n"); 
		}
		for (i = 7; i >= 1; i--) { 
			for (j = 1; j <= 40 - 2 * i; j++)  printf(" "); 
			for (k = 1; k <= 4 * i - 1; k++)  printf("%c", c);
			printf("\n");  
		}
		for (i = 1; i <= 39; i++)    printf(" "); 
		printf("%c\n", c);  
		for (i = 1; i <= 5; i++)    printf("\n"); 
	}
	else {
		again = 1;
	}
}
void delete_information(COMMODITY commodity[])
{
	long flag;
	printf("��Ʒɾ������");
	printf("\n##########################\n");
	printf("������Ҫɾ����Ʒ�ı�ţ�");
	scanf_s("%ld", &flag);
	for (int i = 0; i < LENGH; i++) {
		if (flag == commodity[i].numbering) {
			printf("�ҵ����Ϊ%ld����Ʒ������ɾ��\n",flag);
			for (int j = i; j < LENGH; j++) {
				commodity[j] = commodity[j + 1];
			}
			break;
		}
		else {
			printf("�Ҳ������Ϊ%ld����Ʒ", flag);
			break;
		}
	}
}
void change_information(COMMODITY commodity[])
{
	long flag;
	printf("�޸���Ʒģ��");
	printf("\n##########################\n");
	printf("������Ʒ��ţ�");
	scanf_s("%ld", &flag);
	for (int i = 0; i < LENGH; i++) {
		if (flag == commodity[i].numbering) {
			printf("�ҵ����Ϊ%ld����Ʒ�����ڿɽ����޸�",flag);
			printf("\n##########################\n");
			printf("�����ţ�");
			scanf_s("%ld", &commodity[i].numbering);
			printf("�������ƣ���������ʮ���ַ��Ҳ������ո񣩣�");
			scanf_s("%s", commodity[i].name, LENGH);
			printf("����������");
			scanf_s("%d", &commodity[i].quantity);
			printf("����۸�");
			scanf_s("%d", &commodity[i].price);
			printf("�����������ڣ�����ʽΪ2000-1-1��   ");
			scanf_s("%s", commodity[i].suppeier, LENGH);
			printf("���빩Ӧ�̣�������ʮ���ַ��Ҳ������ո񣩣�");
			scanf_s("%s", commodity[i].time, LENGH);
			printf("\n##########################\n");
			printf("�����޸����");
			break;
		}
		else {
			printf("\n##########################\n");
			printf("û���ҵ����Ϊ%ld����Ʒ", flag);
			printf("\n##########################\n");
			break;
		}
	}
}
//�����˰ɣ��ǲ���û����һ��ע�ͣ�binggo���ǾͶ��ˣ�����������
//write everything,read nothing-by zgy
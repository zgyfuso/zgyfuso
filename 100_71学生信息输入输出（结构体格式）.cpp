#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char name[10];
	char sex[5];
	int age;
}Message;
int input(Message*stu);
void output(Message*stu);
int main(void)
{
	Message stu[5];
	int flag;
	printf("���ڷֱ��������ѧ������Ϣ������  �Ա�  ����\n\n\n\n");
	flag=input(stu);
	if (flag == 0) goto wrong;
	printf("��������λѧ���Ļ�����Ϣ��\n");
	output(stu);
wrong:printf("\n\n������󣬻���������򲻷��Ϲ淶");
	return 0;
}
int input(Message* stu)
{
	for (int i = 0; i < 2; i++) {
		printf("\n�����%dλѧ����������", i + 1);
		scanf_s("%s", stu[i].name,sizeof(stu[i].name));
		printf("\n�����%dλͬѧ���Ա�(m/w)��",i+1);
		scanf_s("%s", stu[i].sex, sizeof(stu[i].name));
		printf("\n�����%dλͬѧ�����䣺", i + 1);
		scanf_s("%d", &stu[i].age);
		printf("\n************************************\n");
		if ((strlen(stu[i].name) > 10 || stu[i].age < 0 || (*stu[i].sex != 'm' && *stu[i].sex != 'w'))) {
			return 0;
		}
	}
}
void output(Message* stu)
{
	printf("���     ����    �Ա�  ����");
	for (int i = 0; i < 2; i++) {
		printf("\n%d  %10s  %5s   %d\n",i+1, stu[i].name, stu[i].sex,stu[i].age);
	}
}
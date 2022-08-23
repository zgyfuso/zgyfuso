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
	printf("现在分别输入五个学生的信息：姓名  性别  年龄\n\n\n\n");
	flag=input(stu);
	if (flag == 0) goto wrong;
	printf("以下是五位学生的基本信息：\n");
	output(stu);
wrong:printf("\n\n输入错误，缓冲区溢出或不符合规范");
	return 0;
}
int input(Message* stu)
{
	for (int i = 0; i < 2; i++) {
		printf("\n输入第%d位学生的姓名：", i + 1);
		scanf_s("%s", stu[i].name,sizeof(stu[i].name));
		printf("\n输入第%d位同学的性别(m/w)：",i+1);
		scanf_s("%s", stu[i].sex, sizeof(stu[i].name));
		printf("\n输入第%d位同学的年龄：", i + 1);
		scanf_s("%d", &stu[i].age);
		printf("\n************************************\n");
		if ((strlen(stu[i].name) > 10 || stu[i].age < 0 || (*stu[i].sex != 'm' && *stu[i].sex != 'w'))) {
			return 0;
		}
	}
}
void output(Message* stu)
{
	printf("序号     名字    性别  年龄");
	for (int i = 0; i < 2; i++) {
		printf("\n%d  %10s  %5s   %d\n",i+1, stu[i].name, stu[i].sex,stu[i].age);
	}
}
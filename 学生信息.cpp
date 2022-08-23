#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
typedef struct Student
{
    long int number;
    char password[8];
    char name[30];
    char sex[4];
    int year;
    char college[30];
}student;
void init(student*);
int login(student*);
void changeDept(student*);
void show(student*);
int main(void)
{
    int flag=0;
    student stu[4];
    init(stu);
    flag = login(stu);
    if (flag == 1)
    {
        printf("******************������ȷ*****************\n\n");
        changeDept(stu);
        show(stu);
    }
    else {
        printf("�������");
    }
    system("pause");
}
void show(student* stu)
{
    printf("\n\n********************************************\n");
    printf("                    �������\n");
    for (int i = 0; i < 4; i++)
    {
        printf("ѧ�ţ�%ld", stu[i].number);
        printf("   ���룺%s", stu[i].password);
        printf("   ������%s", stu[i].name);
        printf("   �Ա�%s", stu[i].sex);
        printf("   ���䣺%d", stu[i].year);
        printf("   Ժϵ��%s", stu[i].college);
        printf("\n**********************************\n");
    }
}
void changeDept(student* stu)
{
    //fflush(stdin);
    getchar();
    getchar();
    getchar();
    printf("\n                           תԺ����\n");
    int flag = 0;
    int flag_ = 0;
    printf("�������������ѧ�����룺");
    scanf_s("%d", &flag);
    flag -= 1;
    getchar();
    printf("������Ҫת���ѧԺ��\n");
    printf("************************************\n");
    printf("**********    1:����ѧԺ  **********\n");
    printf("**********    2:����ѧԺ **********\n");
    printf("**********    3:ͨ��ѧԺ **********\n");
    printf("**********    4:����ѧԺ **********\n");
    printf("************************************\n");
    scanf_s("%d", &flag_);
    switch (flag_)
    {
    case(1):
        strcpy_s(stu[flag].college, "����ѧԺ");
        break;
    case(2):
        strcpy_s(stu[flag].college, "����ѧԺ");
        break;
    case(3):
        strcpy_s(stu[flag].college, "ͨ��ѧԺ");
        break;
    case(4):
        strcpy_s(stu[flag].college, "����ѧԺ");
        break;
    }
    printf("\n************\n");
    printf("ת�����\n");
    system("pause");
}
int login(student* stu)
{
    int flag = 0;
    long int number_temp;
    char passward_temp[20];
    char l;
    printf("��������˺ţ�");
    scanf_s("%ld", &number_temp);
    getchar();
    printf("����������룺");
    //scanf_s("%c", &l,1);
    getchar();
    scanf_s("%s", &passward_temp);
    for (int i = 0; i < 3; i++)
    {
        char* str1 = passward_temp;
        char* str2 = stu[i].password;
        if (if(strcmp(str1, str2) == 0)&&number_temp == stu[i].number)
        {
           
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return flag;
}
void init(student* stu)
{
    stu[0].number = 20200058;
    strcpy_s(stu[0].password, "A123");
    strcpy_s(stu[0].name, "����");
    strcpy_s(stu[0].sex, "M");
    stu[0].year = 19;
    strcpy_s(stu[0].college, "����ѧԺ");

    stu[1].number = 20200034;
    strcpy_s(stu[1].password, "B321");
    strcpy_s(stu[1].name, "���");
    strcpy_s(stu[1].sex, "F");
    stu[1].year = 19;
    strcpy_s(stu[1].college, "����ѧԺ");

    stu[2].number = 20210106;
    strcpy_s(stu[2].password, "C456");
    strcpy_s(stu[2].name, "����ϲ");
    strcpy_s(stu[2].sex, "M");
    stu[2].year = 18;
    strcpy_s(stu[2].college, "ͨ��ѧԺ");

    stu[3].number = 20200409;
    strcpy_s(stu[3].password, "D654");
    strcpy_s(stu[3].name, "Ԭ��");
    strcpy_s(stu[3].sex, "F");
    stu[3].year = 20;
    strcpy_s(stu[3].college, "����ѧԺ");
}
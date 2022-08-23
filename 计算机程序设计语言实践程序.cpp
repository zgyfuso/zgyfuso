#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define MAX 30
typedef struct User_message
{
    char name[MAX];
    char password[MAX];
} user_message;
void init_user(user_message *); //�û���Ϣ��ʼ������
int login(user_message *);      //��¼����
void judgment(int);             //�жϷ���ֵ�˵�����
int main(void)
{
    int flag = 1;
    user_message user[MAX]; //��ʼ���û��б��С
    init_user(user);
    flag = login(user);
    judgment(flag);
    system("pause");
}
void init_user(user_message *user)
{
    strcpy(user[0].name, "aaa");
    strcpy(user[1].name, "bbb");
    strcpy(user[2].name, "ccc");
    strcpy(user[0].password, "aaa111");
    strcpy(user[1].password, "bbb222");
    strcpy(user[2].password, "ccc333");
}
int login(user_message *user)
{
    int flag = 0; //�û����
    char temp[20];
    char *ptr_temp = nullptr;
    char *ptr_name = nullptr;
    char *ptr_password = nullptr;
    char *ptr_PIN = nullptr;
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t***********   �û���¼����  ************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t����������û����� ");
    gets(temp); //��ȡ����
    ptr_temp = temp;
    for (int i = 0; i < MAX; i++, flag++)
    {
        ptr_name = user[i].name;
        if ((strcmp(ptr_temp, ptr_name) == 0))
        {
            for (int i = 0; i < 3; i++)
            {
                ptr_password = user[flag].password;
                printf("\n\t\t\t\t����������루����������ᣩ��");
                gets(temp);
                ptr_temp = temp;
                if ((strcmp(ptr_temp, ptr_password) == 0))
                {
                    int temp;
                    char PIN[5];
                    srand((unsigned)time(NULL));
                    //����֤�������ת��Ϊ�ַ���
                    temp = rand() % 10;
                    PIN[0] = temp + '0';
                    temp = rand() % 10;
                    PIN[1] = temp + '0';
                    temp = rand() % 10;
                    PIN[2] = temp + '0';
                    temp = rand() % 10;
                    PIN[3] = temp + '0';
                    PIN[4] = '\0';
                    ptr_PIN = PIN;
                    printf("\t\t\t\t��֤�룺");
                    puts(ptr_PIN);
                    printf("\t\t\t\t�ڴ�������֤�룺");
                    //���û����������ת��Ϊ�ַ���
                    int P;
                    scanf("%d", &P);
                    char a[5];
                    int g, s, b, q;//��ʮ��ǧ
                    g = P % 10;
                    a[3] = g + '0';
                    s = P / 10 % 10;
                    a[2] = s + '0';
                    b = P / 100 % 10;
                    a[1] = b + '0';
                    q = P / 1000 % 10;
                    a[0] = q + '0';
                    a[4] = '\0';
                    ptr_temp = a;
                    if ((strcmp(ptr_temp, ptr_PIN) == 0))
                    {
                        return 1;
                    }
                }
            }
            return 2;
        }
    }
    return 0;
}
void judgment(int flag)
{
    system("cls");
    if (flag == 0)
    {
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t*******   ��Ǹ���û����������   *******\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
    }
    if (flag == 1)
    {
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t*******           ��ӭ          ********\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
    }
    if (flag == 2)
    {
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t***     ��Ǹ��������������������   ***\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
    }
}
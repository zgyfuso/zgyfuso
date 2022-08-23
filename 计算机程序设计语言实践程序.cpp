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
void init_user(user_message *); //用户信息初始化函数
int login(user_message *);      //登录函数
void judgment(int);             //判断返回值菜单界面
int main(void)
{
    int flag = 1;
    user_message user[MAX]; //初始化用户列表大小
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
    int flag = 0; //用户编号
    char temp[20];
    char *ptr_temp = nullptr;
    char *ptr_name = nullptr;
    char *ptr_password = nullptr;
    char *ptr_PIN = nullptr;
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t***********   用户登录界面  ************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t****************************************\n");
    printf("\t\t\t\t请输入你的用户名： ");
    gets(temp); //获取输入
    ptr_temp = temp;
    for (int i = 0; i < MAX; i++, flag++)
    {
        ptr_name = user[i].name;
        if ((strcmp(ptr_temp, ptr_name) == 0))
        {
            for (int i = 0; i < 3; i++)
            {
                ptr_password = user[flag].password;
                printf("\n\t\t\t\t输入你的密码（三次输入机会）：");
                gets(temp);
                ptr_temp = temp;
                if ((strcmp(ptr_temp, ptr_password) == 0))
                {
                    int temp;
                    char PIN[5];
                    srand((unsigned)time(NULL));
                    //将验证码从数字转换为字符串
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
                    printf("\t\t\t\t验证码：");
                    puts(ptr_PIN);
                    printf("\t\t\t\t在此输入验证码：");
                    //将用户输入从数字转换为字符串
                    int P;
                    scanf("%d", &P);
                    char a[5];
                    int g, s, b, q;//个十百千
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
        printf("\t\t\t\t*******   抱歉，用户名输入错误   *******\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
    }
    if (flag == 1)
    {
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t*******           欢迎          ********\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
    }
    if (flag == 2)
    {
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t***     抱歉，密码错误次数超过三次   ***\n");
        printf("\t\t\t\t****************************************\n");
        printf("\t\t\t\t****************************************\n");
    }
}
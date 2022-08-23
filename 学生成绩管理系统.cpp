#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define MAX 79
typedef struct Class
{
    float math;      //数学
    float marix;     //马克思主义原理
    float english;   //英语
    float c_code;    //C语言
    float machinery; //机械原理
    float PE;        //体育
} cla;
typedef struct Student
{
    long int number;
    char name[20];
    char sex[4];
    cla cls[6]; //嵌套结构体
} student;

// typedef struct sort
// {
//     long int number;
//     char name[20];
//     char sex[4];
//     float score_temp;
// } student_temp; //此结构体用于对对上方结构体进行切片，方便一个函数，通用所有情况

int number;                 //全局变量，学生人数
int show_manu();            //菜单
void init_score(student *); //录入成绩
void out_score(student *);  //输出分数
int sort_manu();            //排序菜单
void sort(student *, int);  //排序整理
int main(void)
{
    student stu[MAX];
    // student_temp stu_t[MAX];
    int run_flag = 1; //是否运行标致
    int flag;
    int sort_flag; //用来判断那种排序

    do
    {
        flag = show_manu();
        switch (flag)
        {
        case (1):
            init_score(stu);
            break;
        case (2):
            sort_flag = sort_manu();
            sort(stu, sort_flag);
            break;
        case (3):
            out_score(stu);
            break;
        case (4):
            run_flag = 0;
            break;
        }
    } while (run_flag == 1);
    system("cls"); //结束前清屏
    printf("感谢使用本程序");
    puts(stu[0].sex);
    system("pause"); //防止闪退
}

int show_manu()
{
    system("cls");
    int flag;
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("                                **********     成绩管理系统程序    **********\n\n");
    printf("                                **********        操作列表        ***********\n\n");
    printf("                                **********     1：录入成绩        ***********\n\n");
    printf("                                **********     2：排序成绩        ***********\n\n");
    printf("                                **********     3：显示成绩        ***********\n\n");
    printf("                                **********     4：  退出          ***********\n\n");
    printf("                                ********       请输入你的操作：      ********\n\n");
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("\n\n");
    do
    {
        printf("你的操作是：");
        scanf("%d", &flag);
    } while (flag != 1 && flag != 2 && flag != 3 && flag != 4);
    return flag;
}

void init_score(student *stu)
{
    system("cls"); //清理屏幕
    printf("                               **********************************************************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************      录入成绩界面       ***************\n");
    printf("                               ******************                         ***************\n");
    printf("                               **********************************************************\n");
    printf("                               输入你想要录入的学生的个数（1到80人）：");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        printf("\n\n");
        printf("录入第%d位同学的信息：\n", i + 1);
        printf("                     学号：");
        scanf("%d", &stu[i].number);
        getchar(); //清空缓冲区
        printf("                     姓名：");
        scanf("%s", &stu[i].name);
        getchar(); //清空缓冲区
        printf("                     性别：");
        scanf("%s", &stu[i].sex);
        getchar(); //清空缓冲区
        printf("数学：");
        scanf("%f", &stu[i].cls->math);
        getchar(); //清空缓冲区
        printf("马克思主义概论：");
        scanf("%f", &stu[i].cls->marix);
        getchar(); //清空缓冲区
        printf("英语：");
        scanf("%f", &stu[i].cls->english);
        getchar(); //清空缓冲区
        printf("C语言：");
        scanf("%f", &stu[i].cls->c_code);
        getchar(); //清空缓冲区2
        printf("机械原理：");
        scanf("%f", &stu[i].cls->machinery);
        getchar(); //清空缓冲区
        printf("体育：");
        scanf("%f", &stu[i].cls->PE);
        getchar(); //清空缓冲区
    }
    printf("\n\n%d位同学成绩录入完毕，按任意键继续\n\n", number);
    system("pause");
}
void out_score(student *stu)
{
    system("cls");
    printf("                               **********************************************************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************      输出成绩界面       ***************\n");
    printf("                               ******************                         ***************\n");
    printf("                               **********************************************************\n");
    for (int i = 0; i < number; i++) //此处number已经被重定义为学生人数
    {
        printf("学号：%ld\n", stu[i].number);
        printf("姓名：%s\n", stu[i].name);
        printf("性别：%s\n", stu[i].sex);
        printf("数学：%f", stu[i].cls->math);
        printf("      马克思主义概论：%.2f", stu[i].cls->marix);
        printf("      C语言：%.2f\n", stu[i].cls->c_code);
        printf("英语：%.2f", stu[i].cls->english);
        printf("      机械概论：%.2f", stu[i].cls->machinery);
        printf("      体育：%.2f\n", stu[i].cls->PE);
        printf("********************************************\n");
    }
    printf("输出展示完毕\n");
    system("pause");
}
int sort_manu()
{
    int flag;
    system("cls");
    printf("                               **********************************************************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************       成绩排序界面       ***************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************      1：数学优先升序       ***************\n");
    printf("                               ******************      2：数学优先降序      ***************\n");
    printf("                               ******************      3：马克思优先升序      ***************\n");
    printf("                               ******************      4：马克思优先降序      ***************\n");
    printf("                               ******************      5：机械理论优先升序      ***************\n");
    printf("                               ******************      6：机械理论优先降序      ***************\n");
    printf("                               ******************      7：C语言优先升序      ***************\n");
    printf("                               ******************      8：C语言优先降序      ***************\n");
    printf("                               ******************      9：英语优先升序      ***************\n");
    printf("                               ******************      10：英语优先降序      ***************\n");
    printf("                               ******************      11：体育优先升序      ***************\n");
    printf("                               ******************      12：体育优先降序      ***************\n");
    printf("                               **********************************************************\n");
    printf("输入你的操作：");
    scanf("%d", &flag);
    return flag;
}
void sort(student *stu, int flag)
{
    switch (flag)//工具sort_manu返回值来选择排序方法
    {
    case (1):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->math) > (stu[j + 1].cls->math))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (2):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->math) < (stu[j + 1].cls->math))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (3):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->marix) > (stu[j + 1].cls->marix))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (4):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->marix) < (stu[j + 1].cls->marix))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (5):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->machinery) > (stu[j + 1].cls->machinery))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (6):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->machinery) < (stu[j + 1].cls->machinery))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (7):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->c_code) > (stu[j + 1].cls->c_code))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (8):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->c_code) < (stu[j + 1].cls->c_code))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (9):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->english) > (stu[j + 1].cls->english))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (10):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->english) < (stu[j + 1].cls->english))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (11):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->PE) > (stu[j + 1].cls->PE))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    case (12):
        for (int i = 0; i < number; i++) //冒泡排序
        {
            for (int j = 0; j < number - 1 - i; j++)
            {
                if ((stu[j].cls->PE) < (stu[j + 1].cls->PE))
                {
                    student temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;
                }
            }
        }
        break;
    }
}
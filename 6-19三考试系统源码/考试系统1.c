#include <stdio.h>
#include <Windows.h>
#include <string.h>
#define Student_ID "123456"
#define Student_name "张三"
#define Student_class "一班"
#define Student_specialized "专业"

int manu(void);
void test_introduction();
void candidate_information_introduction();
void examination_subject_list();
void examination_time();
void join_examination();
void examination_feedback();
void test_report();
void chinese_test();

int main(void)
{
    boolean i = true;
    while (i)
    {
        system("cls");
        int flag = manu();
        switch (flag)
        {
        case 1:
            test_introduction();
            break;
        case 2:
            candidate_information_introduction();
            break;
        case 3:
            examination_subject_list();
            break;
        case 4:
            examination_time();
            break;
        case 5:
            join_examination();
            break;
        case 6:
            examination_feedback();
            break;
        case 7:
            test_report();
            break;
        case 8:
            i = FALSE;
            break;
        }
    }
}
int manu()
{
    int choice, confirm;
    printf(
        "\n\t                        考试系统"
        "\n\t|_________________________________________________________|\t\n"
        "\t|1:考试介绍                                               |\t\n"
        "\t|2:考生信息介绍                                           |\t\n"
        "\t|3:考试科目列表                                           |\t\n"
        "\t|4:考试时间安排                                           |\t\n"
        "\t|5:加入考试                                               |\t\n"
        "\t|6:考试意见反馈                                           |\t\n"
        "\t|7:考试举报                                               |\t\n"
        "\t|8:退出考试系统                                           |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    printf("\t请输入你想进行的操作：");
    scanf(" %d", &choice);
    while ((confirm = getchar()) != '\n')
        continue;
    while (choice != 9 && (choice < 1 || choice > 8))
    {
        printf("\t您的输入: '%d' 有误!请重新输入：", choice);
        scanf(" %d", &choice);
    }
    return choice;
}
void candidate_information_introduction()
{
    system("cls");
    printf("\n\t        考生信息介绍\n");
    printf("\t|_______________________________|\n");
    printf("\t| 考生姓名：");
    printf(Student_name);
    printf("             |\n");
    printf("\t| 考生学号：");
    printf(Student_ID);
    printf("             |\n");
    printf("\t| 考生班级：");
    printf(Student_class);
    printf("             |\n");
    printf("\t| 考生专业：");
    printf(Student_specialized);
    printf("             |\n");
    printf("\t|_______________________________|\n");
    system("pause");
}
void examination_subject_list()
{
    system("cls");
    printf(
        "\n\t                        考试科目列表"
        "\n\t|_________________________________________________________|\t\n"
        "\t|1:语文                                                    |\t\n"
        "\t|2:数学                                                    |\t\n"
        "\t|3:英语                                                    |\t\n"
        "\t|4:物理                                                    |\t\n"
        "\t|5:历史                                                    |\t\n"
        "\t|6:化学                                                    |\t\n"
        "\t|6:生物                                                    |\t\n"
        "\t|7:地理                                                    |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    system("pause");
}
void examination_time()
{
    system("cls");
    printf(
        "\n\t                        考试时间安排"
        "\n\t|_________________________________________________________|\t\n"
        "\t| 6月13日  9:00-11:00  语文                               |\t\n"
        "\t| 6月13日  2:00-3:30  化学                                |\t\n"
        "\t| 6月14日  9:00-11:00  数学                               |\t\n"
        "\t| 6月14日  4:00-5:30  物理                                |\t\n"
        "\t| 6月15日  9:00-10:40  英语                               |\t\n"
        "\t| 6月15日  2:00-3:30  历史                                |\t\n"
        "\t| 6月16日  9:00-10:30  生物                               |\t\n"
        "\t| 6月16日  2:00-3:30   地理                               |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    system("pause");
}
void examination_feedback()
{
    system("cls");
    printf(
        "\n\t                        考试意见反馈"
        "\n\t                        选择反馈科目"
        "\n\t|_________________________________________________________|\t\n"
        "\t| 语文                                                      |\t\n"
        "\t| 化学                                                       |\t\n"
        "\t| 数学                                                      |\t\n"
        "\t| 物理                                                       |\t\n"
        "\t| 英语                                                      |\t\n"
        "\t| 历史                                                       |\t\n"
        "\t| 生物                                                      |\t\n"
        "\t| 地理                                                      |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    system("pause");
}
void test_report()
{
    system("cls");
    printf(
        "\n\t                        考试举报"
        "\n\t|_________________________________________________________|\t\n"
        "\t| 输入举报内容：                                             |\t\n"
        "\t|                                                           |\t\n"
        "\t|                                                           |\t\n"
        "\t| 输入举报者信息：                                           |\t\n"
        "\t|                                                           |\t\n"
        "\t|                                                          |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    system("pause");
}
void chinese_test(void)
{
    int choice;
    int answer;
    system("cls");
    printf("\t                语文考试\n");
    printf("\t       选择题\n");
    printf("*************************************************\n");
    printf("1：以下哪个选项是四大名著：（）\n");
    printf("a:红楼梦    b:聊斋志异    c:狂人日记    d:三国志\n");
    printf("输入你的选择：");
    scanf("%d", &choice);
    answer = 1;
    if (choice == answer)
    {
        printf("正确\n");
    }
    else
    {
        printf("不正确\n");
    }
    printf("*************************************************\n");

    printf("1：鲁迅作品是以下哪个选项：（）\n");
    printf("a:红楼梦    b:聊斋志异    c:狂人日记    d:三国志\n");
    printf("输入你的选择：");
    scanf("%d", &choice);
    answer = 3;
    if (choice == answer)
    {
        printf("正确\n");
    }
    else
    {
        printf("不正确\n");
    }
    printf("*************************************************\n");
    system("pause");
}
void join_examination()
{
    system("cls");
    int choice, confirm;
    printf("\n\t                        考试科目列表"
           "\n\t|_________________________________________________________|\t\n"
           "\t|1:语文                                                    |\t\n"
           "\t|2:数学                                                    |\t\n"
           "\t|3:英语                                                    |\t\n"
           "\t|4:物理                                                    |\t\n"
           "\t|5:历史                                                    |\t\n"
           "\t|6:化学                                                    |\t\n"
           "\t|6:生物                                                    |\t\n"
           "\t|7:地理                                                    |\t\n"
           "\t|_________________________________________________________|\t\n\n");
    printf("\t请输入你想进行的操作：");
    scanf(" %d", &choice);
    while ((confirm = getchar()) != '\n')
        continue;
    while (choice != 9 && (choice < 1 || choice > 7))
    {
        printf("\t您的输入: '%d' 有误!请重新输入：", choice);
        scanf(" %d", &choice);
    }
    switch (choice)
    {
    case 1:
        chinese_test();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    default:
        break;
    }
    system("pause");
}
void test_introduction()
{
    system("cls");
    printf(
        "\n\t                        考试介绍"
        "\n\t|_________________________________________________________|\t\n"
        "\t|   普通高等学校招生全国统一考试（Nationwide Unified         \t\n"
        "\t| Examination for Admissions to General Universities。    \t\n"
        "\t| and Colleges），简称“高考”，是合格的高中毕业生或具         \t\n"
        "\t|  有同等学力的考生参加的选拔性考试                          \t\n"
        "\t|                                                           \t\n"
        "\t|                                                           \t\n"
        "\t|                                                           \t\n"
        "\t|                                                           \t\n"
        "\t|_________________________________________________________\t\n\n");
    system("pause");
}
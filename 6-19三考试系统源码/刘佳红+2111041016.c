#include <stdio.h>
#include <Windows.h>
int score = 0;
void introduce(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->              考试介绍"
           "\n\t->"
           "\n\t->     普通高等学校招生全国统一考试"
           "\n\t-> （Nationwide Unified Examination for "
           "\n\t-> Admissions to General Universities and "
           "\n\t->  Colleges），简称“高考”，是合格的高中毕业生"
           "\n\t-> 或具有同等学历的考生参加的全国统一选拔性考"
           "\n\t-> 试，是为普通高等学校招生设置的全国性统一考"
           "\n\t-> 试，一般是每年6月7日-8日考试。 "
           "\n\t->"
           "\n\t->"
           "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    system("pause");
}
void single_introduce(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           考试科目介绍             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->  语文：6月7日-10：00            "
           "\n\t->  数学：6月8日-14：00                "
           "\n\t->  英语：6月7日-14：00                "
           "\n\t->  文综：6月8日-10：00                "
           "\n\t->  理综：6月8日-10：00                "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    system("pause");
}
void examiner(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           考试考官安排             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->  语文：6月7日-10：00   李老师       "
           "\n\t->  数学：6月8日-14：00   丽老师       "
           "\n\t->  英语：6月7日-14：00   黎老师       "
           "\n\t->  文综：6月8日-10：00   莉老师       "
           "\n\t->  理综：6月8日-10：00   历老师      "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    system("pause");
}
void chinese(void)
{
    int get = 0;
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->                                   "
           "\n\t->           语文考试             "
           "\n\t->                                   ");
    printf("\n\t\t\t选择题\n");
    printf("\n\t 第一题：\n");
    printf("\n\t 中国首都是（）        ");
    printf("\n\t 1：昆明   2：兰州  3：北京  4：海南");
    printf("\n\t 输入你的选择：");
    scanf("%d", &get);
    if (get == 3)
        score++;
    printf("\n\t*******************************");
    printf("\n\t 第二题：\n");
    printf("\n\t 云南省城是（）        ");
    printf("\n\t 1：昆明   2：兰州  3：北京  4：海南");
    printf("\n\t 输入你的选择：");
    scanf("%d", &get);
    if (get == 1)
        score++;
    printf("\n\t*******************************");
    printf("\n\t 第三题：\n");
    printf("\n\t 我国最接近赤道的城市是（）        ");
    printf("\n\t 1：昆明   2：兰州  3：北京  4：海南");
    printf("\n\t 输入你的选择：");
    scanf("%d", &get);
    if (get == 4)
        score++;
    printf("\n\t*******************************");
    printf("\n\t 第四题：\n");
    printf("\n\t 下列选项中最靠近西部的城市是（）        ");
    printf("\n\t 1：昆明   2：兰州  3：北京  4：海南");
    printf("\n\t 输入你的选择：");
    scanf("%d", &get);
    if (get == 2)
        score++;
    printf("\n\t*******************************");
    printf("\n\t\t\t判断题\n");
    printf("\n\t 第一题：\n");
    printf("\n\t 属于滇东南城市圈的城市是昆明        ");
    printf("\n\t 1：对   2：错");
    printf("\n\t 输入你的选择：");
    scanf("%d", &get);
    if (get == 1)
        score++;
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n\t\t考试结束！");
    system("pause");
}
void exam(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           加入你的考试             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->            1 ： 语文      "
           "\n\t->            2 ： 数学          "
           "\n\t->            3 ： 英语          "
           "\n\t->            4 ： 文综          "
           "\n\t->            5 ： 理综          "
           "\n\t->                                   "
           "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    int get = 0;
    printf("\n\t输入你的选择：");
    scanf("%d", &get);
    switch (get)
    {
    case 1:
        chinese();
        break;

    default:
        printf("输入错误或该考试仍然未开始！\n");
        break;
    }
    system("pause");
}
void get_score(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           考试成绩查询             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->  语文： ");
    printf("%d",score);
    printf(
        "\n\t->  数学：              "
        "\n\t->  英语：              "
        "\n\t->  文综：              "
        "\n\t->  理综：              "
        "\n\t->                                   "
        "\n\t->                                   "
        "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    system("pause");
}
void manu(void)
{
    boolean flag = true;
    while (flag)
    {
        system("cls");
        printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
               "\n\t->           考试管理系统"
               "\n\t->               欢迎  "
               "\n\t->            姓名：刘佳红"
               "\n\t->  学号：2111041016       班级：工程审计(本）2101班      "
               "\n\t->        1：查看考试介绍"
               "\n\t->        2：查看考试科目列表          "
               "\n\t->        3：查看考官安排"
               "\n\t->        4：加入考试"
               "\n\t->        5：查看成绩"
               "\n\t->        6：退出系统"
               "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("\n\t->输入你的选择：");
        int get = 0;
        scanf("%d", &get);
        switch (get)
        {
        case 1:
            introduce();
            break;
        case 2:
            single_introduce();
            break;
        case 3:
            examiner();
            break;
        case 4:
            exam();
            break;
        case 5:
            get_score();
            break;
        case 6:
            flag = FALSE;
            break;
        default:
            printf("\n\t\t输入错误,");
            system("pause");
        }
    }
    system("pause");
}

int main(void)
{
    manu();
}

#include <Windows.h>
#include <stdio.h>
#include <string.h>

void manu(void);
void introduce(void);
void arrange(void);
void subject(void);
void join(void);
void chinese(void);
int main(void)
{
    manu();
}
void manu(void)
{
    boolean circulate = TRUE;
    while (circulate)
    {
        system("cls");
        printf("\n\t  .___________. _______      _______..___________.");
        printf("\n\t  |           ||   ____|    /       ||           |");
        printf("\n\t  `---|  |----`|  |__      |   (----``---|  |----`");
        printf("\n\t      |  |     |   __|      \   \        |  |     ");
        printf("\n\t      |  |     |  |____ .----)   |       |  |     ");
        printf("\n\t      |__|     |_______||_______/        |__|     ");
        printf("\n\t                                                  ");
        printf("\n\t 姓名：高星辰");
        printf("\t 专业：工程审计");
        printf("\n\t 班级：工程审计（本）2101");
        printf("\t   学号：2111041006");
        printf("\n\t***************************************");
        printf("\n\t**> 1：考试介绍");
        printf("\n\t**> 2：考场安排");
        printf("\n\t**> 3：考生报考科目");
        printf("\n\t**> 4：参加考试");
        printf("\n\t**> 5：退出系统");
        printf("\n\t***************************************");
        int get;
        printf("\n\t**> 输入你的操作：");
        scanf("%d", &get);
        switch (get)
        {
        case 1:
            introduce();
            break;
        case 2:
            arrange();
            break;
        case 3:
            subject();
            break;
        case 4:
            join();
            break;
        case 5:
            circulate = FALSE;
        default:
            printf("\n\t**>输入错误\n");
            break;
        }
        system("pause");
    }
}
void introduce(void)
{
    system("cls");
    printf("\n\t              考试介绍");
    printf("\n\t***************************************");
    printf("\n\t**>小升初是小学生升入初中的简称。小升初入学考");
    printf("\n\t**>试与初中升高中的中考、高中升大学的高考并列");
    printf("\n\t**>为中小学生的三大考试。小升初考试大体可以总");
    printf("\n\t**>结为两种主要形式，即笔试和面试。其中笔试考");
    printf("\n\t**>查主要是数学和语文两个科目，一般来说每科平");
    printf("\n\t**>均考试时间为60分钟。");
    printf("\n\t***************************************\n");
    system("pause");
}
void arrange(void)
{
    system("cls");
    printf("\n\t            考场安排");
    printf("\n\t***************************************");
    printf("\n\t**>初三一班  明知楼");
    printf("\n\t**>初三二班  明德楼");
    printf("\n\t**>初三三班  明心楼");
    printf("\n\t**>初三四班  明信楼");
    printf("\n\t**>家长等候区  操场");
    printf("\n\t**>监考官侯考区  明镜楼");
    printf("\n\t***************************************\n");
    system("pause");
}
void subject(void)
{
    system("cls");
    printf("\n\t            考试科目");
    printf("\n\t***************************************");
    printf("\n\t**>     语文  6：00-12：00");
    printf("\n\t**>     数学  14：00-16：00");
    printf("\n\t**>     英语  6：00-12：00");
    printf("\n\t**>     地理  14：00-16：00");
    printf("\n\t**>     科学  6：00-12：00");
    printf("\n\t**>     综合操作知识   18：00-20：00");
    printf("\n\t***************************************\n");
    system("pause");
}
void join(void)
{
    system("cls");
    printf("\n\t            考试科目");
    printf("\n\t***************************************");
    printf("\n\t**>     1：语文");
    printf("\n\t**>     2：数学");
    printf("\n\t**>     3：英语");
    printf("\n\t**>     4：地理");
    printf("\n\t**>     5：科学");
    printf("\n\t**>     6：综合操作知识");
    printf("\n\t***************************************\n");
    int choose;
    printf("\n\t输入你要参加的考试科目：");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        chinese();
        break;
    default:
        printf("\n\t还未到参考时间，请耐心等待.");
    }
    // system("pause");
}
void chinese(void)
{
    int choose;
    int score=0;
    system("cls");
    printf("\n\t            欢迎来到语文考试");
    printf("\n\t***************************************");
    printf("\n\t**>               选择题");
    printf("\n\t***************************************");
    printf("\n\n\t**>     1：以下词组中不正确的一项是（）");
    printf("\n\t**>     1：悬崖     2：吃饭    3：张往    4：寻找");
    printf("\n\t**>     输入你的选择：");
    scanf("%d",&choose);
    if(choose==3)   score++;
    printf("\n\n\t**>     2：选出下列词组中的名词（）");
    printf("\n\t**>     1：悬崖     2：吃饭    3：张往    4：寻找");
    printf("\n\t**>     输入你的选择：");
    scanf("%d",&choose);
    if(choose==1)   score++;
    printf("\n\n\t**>     3：就餐的同义词是（）");
    printf("\n\t**>     1：悬崖     2：吃饭    3：张往    4：寻找");
    printf("\n\t**>     输入你的选择：");
    scanf("%d",&choose);
    if(choose==2)   score++;
    printf("\n\t***************************************");
    printf("\n\t**>               判断题");
    printf("\n\t***************************************");
    printf("\n\n\t**>     1：就餐是名词（）");
    printf("\n\t**>     1：正确     2：错误");
    printf("\n\t**>     输入你的选择：");
    scanf("%d",&choose);
    if(choose==2)   score++;
    printf("\n\n\t**>     2：就餐是动词（）");
    printf("\n\t**>     1：正确     2：错误");
    printf("\n\t**>     输入你的选择：");
    scanf("%d",&choose);
    if(choose==1)   score++;
     printf("\n\n\n\t***************************************");
    printf("\n\t**>               考试结束");
    printf("\n\t**>            你的分数是：");
    printf("%d",score);
    printf("\n\t***************************************");
}
#include <stdio.h>
#include <Windows.h>
int score = 0;
void introduce(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->              ���Խ���"
           "\n\t->"
           "\n\t->     ��ͨ�ߵ�ѧУ����ȫ��ͳһ����"
           "\n\t-> ��Nationwide Unified Examination for "
           "\n\t-> Admissions to General Universities and "
           "\n\t->  Colleges������ơ��߿������Ǻϸ�ĸ��б�ҵ��"
           "\n\t-> �����ͬ��ѧ���Ŀ����μӵ�ȫ��ͳһѡ���Կ�"
           "\n\t-> �ԣ���Ϊ��ͨ�ߵ�ѧУ�������õ�ȫ����ͳһ��"
           "\n\t-> �ԣ�һ����ÿ��6��7��-8�տ��ԡ� "
           "\n\t->"
           "\n\t->"
           "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    system("pause");
}
void single_introduce(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           ���Կ�Ŀ����             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->  ���ģ�6��7��-10��00            "
           "\n\t->  ��ѧ��6��8��-14��00                "
           "\n\t->  Ӣ�6��7��-14��00                "
           "\n\t->  ���ۣ�6��8��-10��00                "
           "\n\t->  ���ۣ�6��8��-10��00                "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    system("pause");
}
void examiner(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           ���Կ��ٰ���             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->  ���ģ�6��7��-10��00   ����ʦ       "
           "\n\t->  ��ѧ��6��8��-14��00   ����ʦ       "
           "\n\t->  Ӣ�6��7��-14��00   ����ʦ       "
           "\n\t->  ���ۣ�6��8��-10��00   ����ʦ       "
           "\n\t->  ���ۣ�6��8��-10��00   ����ʦ      "
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
           "\n\t->           ���Ŀ���             "
           "\n\t->                                   ");
    printf("\n\t\t\tѡ����\n");
    printf("\n\t ��һ�⣺\n");
    printf("\n\t �й��׶��ǣ���        ");
    printf("\n\t 1������   2������  3������  4������");
    printf("\n\t �������ѡ��");
    scanf("%d", &get);
    if (get == 3)
        score++;
    printf("\n\t*******************************");
    printf("\n\t �ڶ��⣺\n");
    printf("\n\t ����ʡ���ǣ���        ");
    printf("\n\t 1������   2������  3������  4������");
    printf("\n\t �������ѡ��");
    scanf("%d", &get);
    if (get == 1)
        score++;
    printf("\n\t*******************************");
    printf("\n\t �����⣺\n");
    printf("\n\t �ҹ���ӽ�����ĳ����ǣ���        ");
    printf("\n\t 1������   2������  3������  4������");
    printf("\n\t �������ѡ��");
    scanf("%d", &get);
    if (get == 4)
        score++;
    printf("\n\t*******************************");
    printf("\n\t �����⣺\n");
    printf("\n\t ����ѡ������������ĳ����ǣ���        ");
    printf("\n\t 1������   2������  3������  4������");
    printf("\n\t �������ѡ��");
    scanf("%d", &get);
    if (get == 2)
        score++;
    printf("\n\t*******************************");
    printf("\n\t\t\t�ж���\n");
    printf("\n\t ��һ�⣺\n");
    printf("\n\t ���ڵᶫ�ϳ���Ȧ�ĳ���������        ");
    printf("\n\t 1����   2����");
    printf("\n\t �������ѡ��");
    scanf("%d", &get);
    if (get == 1)
        score++;
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n\t\t���Խ�����");
    system("pause");
}
void exam(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           ������Ŀ���             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->            1 �� ����      "
           "\n\t->            2 �� ��ѧ          "
           "\n\t->            3 �� Ӣ��          "
           "\n\t->            4 �� ����          "
           "\n\t->            5 �� ����          "
           "\n\t->                                   "
           "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    int get = 0;
    printf("\n\t�������ѡ��");
    scanf("%d", &get);
    switch (get)
    {
    case 1:
        chinese();
        break;

    default:
        printf("��������ÿ�����Ȼδ��ʼ��\n");
        break;
    }
    system("pause");
}
void get_score(void)
{
    system("cls");
    printf("\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
           "\n\t->           ���Գɼ���ѯ             "
           "\n\t->                                   "
           "\n\t->                                   "
           "\n\t->  ���ģ� ");
    printf("%d",score);
    printf(
        "\n\t->  ��ѧ��              "
        "\n\t->  Ӣ�              "
        "\n\t->  ���ۣ�              "
        "\n\t->  ���ۣ�              "
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
               "\n\t->           ���Թ���ϵͳ"
               "\n\t->               ��ӭ  "
               "\n\t->            ���������Ѻ�"
               "\n\t->  ѧ�ţ�2111041016       �༶���������(����2101��      "
               "\n\t->        1���鿴���Խ���"
               "\n\t->        2���鿴���Կ�Ŀ�б�          "
               "\n\t->        3���鿴���ٰ���"
               "\n\t->        4�����뿼��"
               "\n\t->        5���鿴�ɼ�"
               "\n\t->        6���˳�ϵͳ"
               "\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("\n\t->�������ѡ��");
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
            printf("\n\t\t�������,");
            system("pause");
        }
    }
    system("pause");
}

int main(void)
{
    manu();
}

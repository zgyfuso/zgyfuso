#include <stdio.h>
#include <Windows.h>
#include <string.h>
#define Student_ID "123456"
#define Student_name "����"
#define Student_class "һ��"
#define Student_specialized "רҵ"

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
        "\n\t                        ����ϵͳ"
        "\n\t|_________________________________________________________|\t\n"
        "\t|1:���Խ���                                               |\t\n"
        "\t|2:������Ϣ����                                           |\t\n"
        "\t|3:���Կ�Ŀ�б�                                           |\t\n"
        "\t|4:����ʱ�䰲��                                           |\t\n"
        "\t|5:���뿼��                                               |\t\n"
        "\t|6:�����������                                           |\t\n"
        "\t|7:���Ծٱ�                                               |\t\n"
        "\t|8:�˳�����ϵͳ                                           |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    printf("\t������������еĲ�����");
    scanf(" %d", &choice);
    while ((confirm = getchar()) != '\n')
        continue;
    while (choice != 9 && (choice < 1 || choice > 8))
    {
        printf("\t��������: '%d' ����!���������룺", choice);
        scanf(" %d", &choice);
    }
    return choice;
}
void candidate_information_introduction()
{
    system("cls");
    printf("\n\t        ������Ϣ����\n");
    printf("\t|_______________________________|\n");
    printf("\t| ����������");
    printf(Student_name);
    printf("             |\n");
    printf("\t| ����ѧ�ţ�");
    printf(Student_ID);
    printf("             |\n");
    printf("\t| �����༶��");
    printf(Student_class);
    printf("             |\n");
    printf("\t| ����רҵ��");
    printf(Student_specialized);
    printf("             |\n");
    printf("\t|_______________________________|\n");
    system("pause");
}
void examination_subject_list()
{
    system("cls");
    printf(
        "\n\t                        ���Կ�Ŀ�б�"
        "\n\t|_________________________________________________________|\t\n"
        "\t|1:����                                                    |\t\n"
        "\t|2:��ѧ                                                    |\t\n"
        "\t|3:Ӣ��                                                    |\t\n"
        "\t|4:����                                                    |\t\n"
        "\t|5:��ʷ                                                    |\t\n"
        "\t|6:��ѧ                                                    |\t\n"
        "\t|6:����                                                    |\t\n"
        "\t|7:����                                                    |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    system("pause");
}
void examination_time()
{
    system("cls");
    printf(
        "\n\t                        ����ʱ�䰲��"
        "\n\t|_________________________________________________________|\t\n"
        "\t| 6��13��  9:00-11:00  ����                               |\t\n"
        "\t| 6��13��  2:00-3:30  ��ѧ                                |\t\n"
        "\t| 6��14��  9:00-11:00  ��ѧ                               |\t\n"
        "\t| 6��14��  4:00-5:30  ����                                |\t\n"
        "\t| 6��15��  9:00-10:40  Ӣ��                               |\t\n"
        "\t| 6��15��  2:00-3:30  ��ʷ                                |\t\n"
        "\t| 6��16��  9:00-10:30  ����                               |\t\n"
        "\t| 6��16��  2:00-3:30   ����                               |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    system("pause");
}
void examination_feedback()
{
    system("cls");
    printf(
        "\n\t                        �����������"
        "\n\t                        ѡ������Ŀ"
        "\n\t|_________________________________________________________|\t\n"
        "\t| ����                                                      |\t\n"
        "\t| ��ѧ                                                       |\t\n"
        "\t| ��ѧ                                                      |\t\n"
        "\t| ����                                                       |\t\n"
        "\t| Ӣ��                                                      |\t\n"
        "\t| ��ʷ                                                       |\t\n"
        "\t| ����                                                      |\t\n"
        "\t| ����                                                      |\t\n"
        "\t|_________________________________________________________|\t\n\n");
    system("pause");
}
void test_report()
{
    system("cls");
    printf(
        "\n\t                        ���Ծٱ�"
        "\n\t|_________________________________________________________|\t\n"
        "\t| ����ٱ����ݣ�                                             |\t\n"
        "\t|                                                           |\t\n"
        "\t|                                                           |\t\n"
        "\t| ����ٱ�����Ϣ��                                           |\t\n"
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
    printf("\t                ���Ŀ���\n");
    printf("\t       ѡ����\n");
    printf("*************************************************\n");
    printf("1�������ĸ�ѡ�����Ĵ�����������\n");
    printf("a:��¥��    b:��ի־��    c:�����ռ�    d:����־\n");
    printf("�������ѡ��");
    scanf("%d", &choice);
    answer = 1;
    if (choice == answer)
    {
        printf("��ȷ\n");
    }
    else
    {
        printf("����ȷ\n");
    }
    printf("*************************************************\n");

    printf("1��³Ѹ��Ʒ�������ĸ�ѡ�����\n");
    printf("a:��¥��    b:��ի־��    c:�����ռ�    d:����־\n");
    printf("�������ѡ��");
    scanf("%d", &choice);
    answer = 3;
    if (choice == answer)
    {
        printf("��ȷ\n");
    }
    else
    {
        printf("����ȷ\n");
    }
    printf("*************************************************\n");
    system("pause");
}
void join_examination()
{
    system("cls");
    int choice, confirm;
    printf("\n\t                        ���Կ�Ŀ�б�"
           "\n\t|_________________________________________________________|\t\n"
           "\t|1:����                                                    |\t\n"
           "\t|2:��ѧ                                                    |\t\n"
           "\t|3:Ӣ��                                                    |\t\n"
           "\t|4:����                                                    |\t\n"
           "\t|5:��ʷ                                                    |\t\n"
           "\t|6:��ѧ                                                    |\t\n"
           "\t|6:����                                                    |\t\n"
           "\t|7:����                                                    |\t\n"
           "\t|_________________________________________________________|\t\n\n");
    printf("\t������������еĲ�����");
    scanf(" %d", &choice);
    while ((confirm = getchar()) != '\n')
        continue;
    while (choice != 9 && (choice < 1 || choice > 7))
    {
        printf("\t��������: '%d' ����!���������룺", choice);
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
        "\n\t                        ���Խ���"
        "\n\t|_________________________________________________________|\t\n"
        "\t|   ��ͨ�ߵ�ѧУ����ȫ��ͳһ���ԣ�Nationwide Unified         \t\n"
        "\t| Examination for Admissions to General Universities��    \t\n"
        "\t| and Colleges������ơ��߿������Ǻϸ�ĸ��б�ҵ�����         \t\n"
        "\t|  ��ͬ��ѧ���Ŀ����μӵ�ѡ���Կ���                          \t\n"
        "\t|                                                           \t\n"
        "\t|                                                           \t\n"
        "\t|                                                           \t\n"
        "\t|                                                           \t\n"
        "\t|_________________________________________________________\t\n\n");
    system("pause");
}
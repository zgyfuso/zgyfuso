#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define MAX 79
typedef struct Class
{
    float math;      //��ѧ
    float marix;     //���˼����ԭ��
    float english;   //Ӣ��
    float c_code;    //C����
    float machinery; //��еԭ��
    float PE;        //����
} cla;
typedef struct Student
{
    long int number;
    char name[20];
    char sex[4];
    cla cls[6]; //Ƕ�׽ṹ��
} student;

// typedef struct sort
// {
//     long int number;
//     char name[20];
//     char sex[4];
//     float score_temp;
// } student_temp; //�˽ṹ�����ڶԶ��Ϸ��ṹ�������Ƭ������һ��������ͨ���������

int number;                 //ȫ�ֱ�����ѧ������
int show_manu();            //�˵�
void init_score(student *); //¼��ɼ�
void out_score(student *);  //�������
int sort_manu();            //����˵�
void sort(student *, int);  //��������
int main(void)
{
    student stu[MAX];
    // student_temp stu_t[MAX];
    int run_flag = 1; //�Ƿ����б���
    int flag;
    int sort_flag; //�����ж���������

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
    system("cls"); //����ǰ����
    printf("��лʹ�ñ�����");
    puts(stu[0].sex);
    system("pause"); //��ֹ����
}

int show_manu()
{
    system("cls");
    int flag;
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("                                **********     �ɼ�����ϵͳ����    **********\n\n");
    printf("                                **********        �����б�        ***********\n\n");
    printf("                                **********     1��¼��ɼ�        ***********\n\n");
    printf("                                **********     2������ɼ�        ***********\n\n");
    printf("                                **********     3����ʾ�ɼ�        ***********\n\n");
    printf("                                **********     4��  �˳�          ***********\n\n");
    printf("                                ********       ��������Ĳ�����      ********\n\n");
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("                                ********************************************\n\n");
    printf("\n\n");
    do
    {
        printf("��Ĳ����ǣ�");
        scanf("%d", &flag);
    } while (flag != 1 && flag != 2 && flag != 3 && flag != 4);
    return flag;
}

void init_score(student *stu)
{
    system("cls"); //������Ļ
    printf("                               **********************************************************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************      ¼��ɼ�����       ***************\n");
    printf("                               ******************                         ***************\n");
    printf("                               **********************************************************\n");
    printf("                               ��������Ҫ¼���ѧ���ĸ�����1��80�ˣ���");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        printf("\n\n");
        printf("¼���%dλͬѧ����Ϣ��\n", i + 1);
        printf("                     ѧ�ţ�");
        scanf("%d", &stu[i].number);
        getchar(); //��ջ�����
        printf("                     ������");
        scanf("%s", &stu[i].name);
        getchar(); //��ջ�����
        printf("                     �Ա�");
        scanf("%s", &stu[i].sex);
        getchar(); //��ջ�����
        printf("��ѧ��");
        scanf("%f", &stu[i].cls->math);
        getchar(); //��ջ�����
        printf("���˼������ۣ�");
        scanf("%f", &stu[i].cls->marix);
        getchar(); //��ջ�����
        printf("Ӣ�");
        scanf("%f", &stu[i].cls->english);
        getchar(); //��ջ�����
        printf("C���ԣ�");
        scanf("%f", &stu[i].cls->c_code);
        getchar(); //��ջ�����2
        printf("��еԭ��");
        scanf("%f", &stu[i].cls->machinery);
        getchar(); //��ջ�����
        printf("������");
        scanf("%f", &stu[i].cls->PE);
        getchar(); //��ջ�����
    }
    printf("\n\n%dλͬѧ�ɼ�¼����ϣ������������\n\n", number);
    system("pause");
}
void out_score(student *stu)
{
    system("cls");
    printf("                               **********************************************************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************      ����ɼ�����       ***************\n");
    printf("                               ******************                         ***************\n");
    printf("                               **********************************************************\n");
    for (int i = 0; i < number; i++) //�˴�number�Ѿ����ض���Ϊѧ������
    {
        printf("ѧ�ţ�%ld\n", stu[i].number);
        printf("������%s\n", stu[i].name);
        printf("�Ա�%s\n", stu[i].sex);
        printf("��ѧ��%f", stu[i].cls->math);
        printf("      ���˼������ۣ�%.2f", stu[i].cls->marix);
        printf("      C���ԣ�%.2f\n", stu[i].cls->c_code);
        printf("Ӣ�%.2f", stu[i].cls->english);
        printf("      ��е���ۣ�%.2f", stu[i].cls->machinery);
        printf("      ������%.2f\n", stu[i].cls->PE);
        printf("********************************************\n");
    }
    printf("���չʾ���\n");
    system("pause");
}
int sort_manu()
{
    int flag;
    system("cls");
    printf("                               **********************************************************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************       �ɼ��������       ***************\n");
    printf("                               ******************                         ***************\n");
    printf("                               ******************      1����ѧ��������       ***************\n");
    printf("                               ******************      2����ѧ���Ƚ���      ***************\n");
    printf("                               ******************      3�����˼��������      ***************\n");
    printf("                               ******************      4�����˼���Ƚ���      ***************\n");
    printf("                               ******************      5����е������������      ***************\n");
    printf("                               ******************      6����е�������Ƚ���      ***************\n");
    printf("                               ******************      7��C������������      ***************\n");
    printf("                               ******************      8��C�������Ƚ���      ***************\n");
    printf("                               ******************      9��Ӣ����������      ***************\n");
    printf("                               ******************      10��Ӣ�����Ƚ���      ***************\n");
    printf("                               ******************      11��������������      ***************\n");
    printf("                               ******************      12���������Ƚ���      ***************\n");
    printf("                               **********************************************************\n");
    printf("������Ĳ�����");
    scanf("%d", &flag);
    return flag;
}
void sort(student *stu, int flag)
{
    switch (flag)//����sort_manu����ֵ��ѡ�����򷽷�
    {
    case (1):
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
        for (int i = 0; i < number; i++) //ð������
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
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
        printf("\n\t ���������ǳ�");
        printf("\t רҵ���������");
        printf("\n\t �༶��������ƣ�����2101");
        printf("\t   ѧ�ţ�2111041006");
        printf("\n\t***************************************");
        printf("\n\t**> 1�����Խ���");
        printf("\n\t**> 2����������");
        printf("\n\t**> 3������������Ŀ");
        printf("\n\t**> 4���μӿ���");
        printf("\n\t**> 5���˳�ϵͳ");
        printf("\n\t***************************************");
        int get;
        printf("\n\t**> ������Ĳ�����");
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
            printf("\n\t**>�������\n");
            break;
        }
        system("pause");
    }
}
void introduce(void)
{
    system("cls");
    printf("\n\t              ���Խ���");
    printf("\n\t***************************************");
    printf("\n\t**>С������Сѧ��������еļ�ơ�С������ѧ��");
    printf("\n\t**>������������е��п�����������ѧ�ĸ߿�����");
    printf("\n\t**>Ϊ��Сѧ���������ԡ�С�������Դ��������");
    printf("\n\t**>��Ϊ������Ҫ��ʽ�������Ժ����ԡ����б��Կ�");
    printf("\n\t**>����Ҫ����ѧ������������Ŀ��һ����˵ÿ��ƽ");
    printf("\n\t**>������ʱ��Ϊ60���ӡ�");
    printf("\n\t***************************************\n");
    system("pause");
}
void arrange(void)
{
    system("cls");
    printf("\n\t            ��������");
    printf("\n\t***************************************");
    printf("\n\t**>����һ��  ��֪¥");
    printf("\n\t**>��������  ����¥");
    printf("\n\t**>��������  ����¥");
    printf("\n\t**>�����İ�  ����¥");
    printf("\n\t**>�ҳ��Ⱥ���  �ٳ�");
    printf("\n\t**>�࿼�ٺ��  ����¥");
    printf("\n\t***************************************\n");
    system("pause");
}
void subject(void)
{
    system("cls");
    printf("\n\t            ���Կ�Ŀ");
    printf("\n\t***************************************");
    printf("\n\t**>     ����  6��00-12��00");
    printf("\n\t**>     ��ѧ  14��00-16��00");
    printf("\n\t**>     Ӣ��  6��00-12��00");
    printf("\n\t**>     ����  14��00-16��00");
    printf("\n\t**>     ��ѧ  6��00-12��00");
    printf("\n\t**>     �ۺϲ���֪ʶ   18��00-20��00");
    printf("\n\t***************************************\n");
    system("pause");
}
void join(void)
{
    system("cls");
    printf("\n\t            ���Կ�Ŀ");
    printf("\n\t***************************************");
    printf("\n\t**>     1������");
    printf("\n\t**>     2����ѧ");
    printf("\n\t**>     3��Ӣ��");
    printf("\n\t**>     4������");
    printf("\n\t**>     5����ѧ");
    printf("\n\t**>     6���ۺϲ���֪ʶ");
    printf("\n\t***************************************\n");
    int choose;
    printf("\n\t������Ҫ�μӵĿ��Կ�Ŀ��");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        chinese();
        break;
    default:
        printf("\n\t��δ���ο�ʱ�䣬�����ĵȴ�.");
    }
    // system("pause");
}
void chinese(void)
{
    int choose;
    int score=0;
    system("cls");
    printf("\n\t            ��ӭ�������Ŀ���");
    printf("\n\t***************************************");
    printf("\n\t**>               ѡ����");
    printf("\n\t***************************************");
    printf("\n\n\t**>     1�����´����в���ȷ��һ���ǣ���");
    printf("\n\t**>     1������     2���Է�    3������    4��Ѱ��");
    printf("\n\t**>     �������ѡ��");
    scanf("%d",&choose);
    if(choose==3)   score++;
    printf("\n\n\t**>     2��ѡ�����д����е����ʣ���");
    printf("\n\t**>     1������     2���Է�    3������    4��Ѱ��");
    printf("\n\t**>     �������ѡ��");
    scanf("%d",&choose);
    if(choose==1)   score++;
    printf("\n\n\t**>     3���Ͳ͵�ͬ����ǣ���");
    printf("\n\t**>     1������     2���Է�    3������    4��Ѱ��");
    printf("\n\t**>     �������ѡ��");
    scanf("%d",&choose);
    if(choose==2)   score++;
    printf("\n\t***************************************");
    printf("\n\t**>               �ж���");
    printf("\n\t***************************************");
    printf("\n\n\t**>     1���Ͳ������ʣ���");
    printf("\n\t**>     1����ȷ     2������");
    printf("\n\t**>     �������ѡ��");
    scanf("%d",&choose);
    if(choose==2)   score++;
    printf("\n\n\t**>     2���Ͳ��Ƕ��ʣ���");
    printf("\n\t**>     1����ȷ     2������");
    printf("\n\t**>     �������ѡ��");
    scanf("%d",&choose);
    if(choose==1)   score++;
     printf("\n\n\n\t***************************************");
    printf("\n\t**>               ���Խ���");
    printf("\n\t**>            ��ķ����ǣ�");
    printf("%d",score);
    printf("\n\t***************************************");
}
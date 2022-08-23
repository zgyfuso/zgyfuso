#include <math.h>
#include <stdio.h> /*	��׼�������ͷ�ļ� */
#include <string.h>/*	�ַ�������ĺ��������ͷ�ļ�	*/
#define N 500
void binaryAdder(int b[N], int f) /*�����Ƹ�ֵ��һ��*/
{
    //ԭ����Ƕ������൱��д����forѭ��
    if (b[f] == 0) //�����λ��0���һ
        b[f] = 1;
    else //�����൱��1+1��λ�ݹ��жϺ����Ƿ��λ
    {
        b[f] = 0;
        binaryAdder(b, f + 1);
    }
}
//ԭ�����Ʊ��ʽ����� �ο���ģ�����
int getAns0(char expression[N], char variable[N], int loop[N], int h0) //�������Ű汾����ֵ
{
    int i, h = 0, j = 0, j1 = 0, j2 = 0, j3 = 0, i1, i2, p1 = -1, p2 = -1, s;
    char dt[N];
    s = strlen(expression);
    if (s == 1)
        if (expression[0] == -2)
            return 0;
        else
            return 1; /*1	���� expression[0] ��ֵ*/
    else
    {
        for (i = 0; i < s - j; i++) /*	�ȴ���� */
        {
            if (expression[i] == '!')
            {
                for (i1 = 0; i1 < h0; i1++)
                    if (expression[i + 1] == variable[i1])
                        p1 = loop[i1];
                if (expression[i + 1] == -2)
                    p1 = 0;
                if (p1 == -1)
                    p1 = expression[i + 1];
                dt[j + 2] = !p1;
                expression[i] = j + 2;
                j++;
                p1 = 0;
                for (i1 = i + 1; i1 < s - j; i1++)
                    expression[i1] = expression[i1 + 1];
            }
        }
        p1 = -1;
        j1 = j;
        for (i = 0; i < s - j1 - 2 * j2; i++) /*	������ */
            if (expression[i] == '&')
            {
                for (i1 = 0; i1 < h0; i1++)
                {
                    if (expression[i - 1] == variable[i1])
                        p1 = loop[i1];
                    if (expression[i + 1] == variable[i1])
                        p2 = loop[i1];
                }
                for (i2 = 2; i2 < j + 2; i2++)
                {
                    if (expression[i - 1] == i2)
                        p1 = dt[i2];
                    if (expression[i + 1] == i2)
                        p2 = dt[i2];
                }
                if (expression[i - 1] == -2)
                    p1 = 0;
                if (expression[i + 1] == -2)
                    p2 = 0;
                if (p1 == -1)
                    p1 = (int)(expression[i - 1]);
                if (p2 == -1)
                    p2 = (int)(expression[i + 1]);
                dt[j + 2] = p1 && p2;
                expression[i - 1] = j + 2;
                j++;
                j2++;
                p1 = -1;
                p2 = -1;
                for (i1 = i; i1 < s - j1 - 2 * j2; i1++)
                    expression[i1] = expression[i1 + 2];
                i = i - 1;
            }
        for (i = 0; i < s - j1 - 2 * j2 - 2 * j3; i++) /*	����� */
            if (expression[i] == '|')
            {
                for (i1 = 0; i1 < h0; i1++)
                {
                    if (expression[i - 1] == variable[i1])
                        p1 = loop[i1];
                    if (expression[i + 1] == variable[i1])
                        p2 = loop[i1];
                }
                for (i2 = 2; i2 < j + 2; i2++)
                {
                    if (expression[i - 1] == i2)
                        p1 = dt[i2];
                    if (expression[i + 1] == i2)
                        p2 = dt[i2];
                }
                if (expression[i - 1] == -2)
                    p1 = 0;
                if (expression[i + 1] == -2)
                    p2 = 0;
                if (p1 == -1)
                    p1 = expression[i - 1];
                if (p2 == -1)
                    p2 = expression[i + 1];
                dt[j + 2] = p1 || p2;
                expression[i - 1] = j + 2;
                j++;
                j3++;
                p1 = -1;
                p2 = -1;
                for (i1 = i; i1 < s - j1 - 2 * j2 - 2 * j3; i1++)
                    expression[i1] = expression[i1 + 2];
                i--;
            }
        return dt[j + 1];
    }
}
int getAns(char expression[N], char variable[N], int loop[N], int h0) //ȥ����
{
    int i, j, k, slen, bracketsNum = 0, bracketsIndex[N], flag; /*bracketsIdex ������������λ�� */
    char charStore[N], brackets[N];                             /*charStore	�������������ڵ��ַ�	brackets ������������ */
    slen = strlen(expression);
    for (i = 0; i < slen; i++)
    {
        if (expression[i] == '(' || expression[i] == ')')
        {
            bracketsIndex[bracketsNum] = i;
            brackets[bracketsNum] = expression[i];
            bracketsNum++;
        }
    }
    if (bracketsNum == 0)
        return getAns0(expression, variable, loop, h0);
    else
    {
        for (i = 0; i < bracketsNum; i++) //�ҵ���һ��������
            if (brackets[i] == ')')
                break;
        for (j = bracketsIndex[i - 1] + 1, k = 0; j < bracketsIndex[i]; j++, k++) //������������ڱ��ʽ
            charStore[k] = expression[j];
        charStore[k] = '\0';

        flag = getAns0(charStore, variable, loop, h0);
        if (flag == 1)
            expression[bracketsIndex[i - 1]] = 1;
        else
            expression[bracketsIndex[i - 1]] = -2;
        for (j = bracketsIndex[i - 1] + 1; j < slen + bracketsIndex[i - 1] - bracketsIndex[i]; j++) //ȥ����
            expression[j] = expression[j + bracketsIndex[i] - bracketsIndex[i - 1]];
        expression[j] = '\0';
        return getAns(expression, variable, loop, h0);
    }
}

void format(char expression[N]) //��ʽ���̺�ʽ�͵ȼ�ʽչ����������ֵ 
{
    while (1) //�������ҵ����ȼ�
    {
        int flag = 1;                                    //��û�� -> ���� <->
        char left[N], midLeft[N], midRight[N], right[N]; //��߲����ұ߲��ֺ� -> ���ŷֿ�����������
        int slen = strlen(expression);
        for (int i = 0; i < slen; i++)
        {
            if (expression[i] == '-' && expression[i + 1] == '>')
            { //�����̺�ʽ q&(p->r)|y �������������
                //�̺�ʽ���ȼ���ͣ�Ҫ���������������
                flag = 0;
                int li = i - 1, bracketsNum = 0;
                //�����ɨ
                //ƥ�䵽������+1��������-1
                while (li >= 0) //�е����������ű�ʾq|��q->r���̺�ʽ���ȼ�����������˵�������
                {
                    if (expression[li] == ')')
                        bracketsNum--;
                    else if (expression[li] == '(')
                        bracketsNum++;
                    if (bracketsNum > 0)
                        break;
                    li--;
                }
                if (bracketsNum > 0) //�ж���������
                {
                    int j = 0, tempi = li + 1;
                    for (tempi; tempi < i; tempi++)
                    { //��p������
                        midLeft[j++] = expression[tempi];
                    }
                    midLeft[j] = '\0';
                    for (tempi = 0; tempi <= li; tempi++)
                    { //��q������
                        left[tempi] = expression[tempi];
                    }
                    left[tempi] = '\0';
                }
                else
                {
                    int tempi;
                    left[0] = '\0';
                    for (tempi = 0; tempi < i; tempi++)
                    { //��q������
                        midLeft[tempi] = expression[tempi];
                    }
                    midLeft[tempi] = '\0';
                }
                li = i + 2, bracketsNum = 0;
                //���ұ�ɨ
                //ƥ�䵽������+1��������-1
                while (li < slen && expression[li] != '-' && expression[li] != '<') //������ԭ���෴
                {
                    if (expression[li] == ')')
                        bracketsNum--;
                    else if (expression[li] == '(')
                        bracketsNum++;
                    if (bracketsNum < 0)
                        break;
                    li++;
                }
                if (bracketsNum < 0 || expression[li] == '-' || expression[li] == '<') //�ж���������
                {
                    int j = 0, tempi;
                    for (tempi = i + 2; tempi < li; tempi++)
                    { //��p������
                        midRight[j++] = expression[tempi];
                    }
                    midRight[j] = '\0';
                    j = 0;
                    for (tempi = li; tempi < slen; tempi++)
                    { //��q������
                        right[j++] = expression[tempi];
                    }
                    right[j] = '\0';
                }
                else
                {
                    int tempi;
                    right[0] = '\0';
                    int j = 0;
                    for (tempi = i + 2; tempi < slen; tempi++)
                    { //��q������
                        midRight[j++] = expression[tempi];
                    }
                    midRight[j] = '\0';
                }
                //��ʼƴ���µ�expression
                //r&q->p|a  --> (!(r&q)v())
                expression[0] = '\0';
                strcat(expression, left);
                strcat(expression, "(!");
                if (strlen(midLeft) > 1)
                    strcat(expression, "(");
                strcat(expression, midLeft);
                if (strlen(midLeft) > 1)
                    strcat(expression, ")");
                strcat(expression, "|");
                if (strlen(midRight) > 1)
                    strcat(expression, "(");
                strcat(expression, midRight);
                if (strlen(midRight) > 1)
                    strcat(expression, ")");
                strcat(expression, ")");
                strcat(expression, right);
                break;
            }
            else if (i + 2 < slen && expression[i] == '<' && expression[i + 1] == '-' && expression[i + 2] == '>')
            { //����ȼ�ʽ
                flag = 0;
                int li = i - 1, bracketsNum = 0;
                //������ͬ��ֻ�ǳ��ȱ����3�� <->
                while (li >= 0)
                {
                    if (expression[li] == ')')
                        bracketsNum--;
                    else if (expression[li] == '(')
                        bracketsNum++;
                    if (bracketsNum > 0)
                        break;
                    li--;
                }
                if (bracketsNum > 0) //�ж���������
                {
                    int j = 0, tempi = li + 1;
                    for (tempi; tempi < i; tempi++)
                    { //��p������
                        midLeft[j++] = expression[tempi];
                    }
                    midLeft[j] = '\0';
                    for (tempi = 0; tempi <= li; tempi++)
                    { //��q������
                        left[tempi] = expression[tempi];
                    }
                    left[tempi] = '\0';
                }
                else
                {
                    int tempi;
                    left[0] = '\0';
                    for (tempi = 0; tempi < i; tempi++)
                    { //��q������
                        midLeft[tempi] = expression[tempi];
                    }
                    midLeft[tempi] = '\0';
                }
                li = i + 2, bracketsNum = 0;
                //���ұ�ɨ
                //ƥ�䵽������+1��������-1
                while (li < slen && expression[li] != '-' && expression[li] != '<') //������ԭ���෴
                {
                    if (expression[li] == ')')
                        bracketsNum--;
                    else if (expression[li] == '(')
                        bracketsNum++;
                    if (bracketsNum < 0)
                        break;
                    li++;
                }
                if (bracketsNum < 0 || expression[li] == '-' || expression[li] == '<') //�ж���������
                {
                    int j = 0, tempi;
                    for (tempi = i + 3; tempi < li; tempi++)
                    { //��p������
                        midRight[j++] = expression[tempi];
                    }
                    midRight[j] = '\0';
                    j = 0;
                    for (tempi = li; tempi < slen; tempi++)
                    { //��q������
                        right[j++] = expression[tempi];
                    }
                    right[j] = '\0';
                }
                else
                {
                    int tempi;
                    right[0] = '\0';
                    int j = 0;
                    for (tempi = i + 3; tempi < slen; tempi++)
                    { //��q������
                        midRight[j++] = expression[tempi];
                    }
                    midRight[j] = '\0';
                }
                expression[0] = '\0';
                strcat(expression, left);
                strcat(expression, "((!");
                if (strlen(midLeft) > 1)
                    strcat(expression, "(");
                strcat(expression, midLeft);
                if (strlen(midLeft) > 1)
                    strcat(expression, ")");
                strcat(expression, "|");
                if (strlen(midRight) > 1)
                    strcat(expression, "(");
                strcat(expression, midRight);
                if (strlen(midRight) > 1)
                    strcat(expression, ")");
                strcat(expression, ")&");
                strcat(expression, "(!");
                if (strlen(midRight) > 1)
                    strcat(expression, "(");
                strcat(expression, midRight);
                if (strlen(midRight) > 1)
                    strcat(expression, ")");
                strcat(expression, "|");
                if (strlen(midLeft) > 1)
                    strcat(expression, "(");
                strcat(expression, midLeft);
                if (strlen(midLeft) > 1)
                    strcat(expression, ")");
                strcat(expression, "))");
                strcat(expression, right);
                break;
            }
        }
        //printf("%s\n", expression);
        if (flag)
            break; //û���̺�ʽ���ߵȼ�ʽ�˳�
    }
}

void printTable() /*	���� BC*/
{
    int i1, i2, loop[N], bracketsNum = 0, ans, variableNum = 0;
    char expression[N], oldexpression[N], variable[N], expressionTemp[N];
    printf("��������һ���Ϸ������⹫ʽ��\n");
    printf("|������ȡ��q|p            |\n");
    printf("|������ȡ: q&p            |\n");
    printf("|�ɰ����̺�ʽ : q->r      |\n");
    printf("|�ɰ����ȼ�ʽ : q<->r     |\n");
    printf("|�ɰ����������: p|(!q|r) |\n");
    printf("|\n|\n|:");
    scanf("%s", expression);
    strcpy(oldexpression, expression);
    format(expression); //������ȡ��ʽת��Ϊ��׼ʽ
    strcpy(expressionTemp, expression);
    for (i1 = 0; i1 < strlen(expression); i1++)
    {
        if (expression[i1] == ')' || expression[i1] == '(')
            bracketsNum++;
        if (expression[i1] >= 'a' && expression[i1] <= 'z' || expression[i1] >= 'A' && expression[i1] <= 'Z')
        {
            for (i2 = 0; i2 < variableNum; i2++) /*	�жϲ�������� */
                if (variable[i2] == expression[i1])
                    break;
            if (i2 == variableNum) //��Ȼ�˳�ѭ��˵������֮ǰ��û�й��ʹ���
            {
                variable[variableNum] = expression[i1];
                variableNum++;
            }
        }
    }
    printf("�ܱ�������Ϊ��	%d\n", variableNum);
    variableNum;
    printf("�����ֵ�����£� \n");
    //��ӡ��ͷ����Ϣ
    for (i1 = 0; i1 < variableNum; i1++)
        printf(" %c ", variable[i1]);
    printf("[%s] ==> ", oldexpression);
    printf("[%s] ", expression);
    printf("\n");
    for (i1 = 0; i1 < variableNum; i1++) /*	�Ƚ����еı�����ֵΪ��	*/
        loop[i1] = 0;
    //��ӡ����������Ϣ
    for (i1 = 0; i1 < (int)pow(2, variableNum); i1++) //��ӡ2^n�η������
    {
        if (i1 != 0)              //0��ʱ����Ҫ��һ
            binaryAdder(loop, 0); //nλ�����Ƶݹ�ӷ�����000 -> 100 -> 010 -> 110����
        ans = getAns(expression, variable, loop, variableNum);
        strcpy(expression, expressionTemp);  //�ָ����޸ĵ�����
        for (i2 = 0; i2 < variableNum; i2++) //��ÿ�еı�����ֵ��ӡ����
            printf(" %d ", loop[i2]);
        for (int formati = 0; formati < strlen(oldexpression) + 5; formati++)
            printf("-");
        printf("> ");
        for (int formati = 0; formati < strlen(oldexpression); formati++)
            printf(" ");
        printf("%d\n", ans);
    }
    getchar();
    getchar();
}

int main()
{
    do
    {
        printTable();
    } while (1);
}


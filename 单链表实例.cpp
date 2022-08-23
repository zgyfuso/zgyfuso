#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char array;
	struct node* next;
}intlist;

intlist* init_intlist(void)
{
	intlist* a;
	a = (intlist*)malloc(sizeof(intlist));
	if (a != NULL)
	{
		a->next = NULL;
	}

	return a;

}
void insert_intlist(intlist* a, int i, char t)
{
	intlist* p, * q;
	q = (intlist*)malloc(sizeof(intlist));
	if (q != NULL)
	{
		q->array = t;//q��ÿһ������ģ���ж�����Ϊ�м���ȡ�ò�����ַ������
					 //�ں���������ʼ��ʹ�ø������ַ��

	}
	p = a;
	for (int j = 1; j <= i - 1; j++)
	{
		p = p->next;//��ѭ���ǽ�ָ���Ƶ���Ҫ���ӵĵ�ַ
					//��ĩβ
	}
	if (q != NULL)
	{
		q->next = p->next;
	}

	p->next = q;
}
void output_intlist(intlist* a)
{
	intlist* p = a;
	printf("\n\n���������");
	while (p->next != NULL)
	{

		p = p->next;
		printf("%3c", p->array);
	}
}
void output_intlist_length(intlist* a)
{
	int flag = 0;
	intlist* p;
	p = (intlist*)malloc(sizeof(intlist));
	p = a;
	while (p != NULL)
	{

		p = p->next;
		flag++;
	}
	printf("\n\n������ĳ���Ϊ%d", flag);
}
void output_intlist_three(intlist* a)
{
	int flag = 0;
	intlist* p;
	p = (intlist*)malloc(sizeof(intlist));
	p = a;
	while (p != NULL)
	{
		flag++;
		p = p->next;
		if (flag == 3)
		{
			printf("\n\n������ĵ�����Ԫ����%c", p->array);
		}


	}
	//free(p);
}
void output_intlist_a_location(intlist* a, char date)
{
	int flag = 0;
	intlist* p;
	p = (intlist*)malloc(sizeof(intlist));
	p = a;
	while (p != NULL)
	{
	
		flag++;
		p = p->next;//�˴������������ж�֮��
		//Ϊɶ
		//���߸����������˴����������ж��ڼ���break
		if (p->array == date)
		{
			printf("\n\nc�ַ����ֵ�λ�ýǱ���%d", flag);
			break;
		}
		
	}

}
void insert_intlist_four(intlist* a,int i, char date)
{
	intlist* p, * q;
	q = (intlist*)malloc(sizeof(intlist));
	if (q != NULL)
	{
		q->array = date;//q��ÿһ������ģ���ж�����Ϊ�м���ȡ�ò�����ַ������
					 //�ں���������ʼ��ʹ�ø������ַ��

	}
	p = a;
	for (int j = 1; j <= i - 1; j++)
	{
		p = p->next;//��ѭ���ǽ�ָ���Ƶ���Ҫ���ӵĵ�ַ
					//��ĩβ
	}
	if (q != NULL)
	{
		q->next = p->next;
	}

	p->next = q;
	printf("\n\n����ɹ�\n");
}
void delete_intlist_three(intlist* a, int i)
{
	intlist* p, * q;
	p = a;
	for (int j = 1; j < i; j++)
	{
		p = p->next;//1.��pָ���i-1��Ԫ�ؽڵ�
	}
	q = p->next;//2.��qָ���i��Ԫ�ؽڵ�
	p->next = q->next;//3.ɾ��
	free(q);//4.�ͷſռ�
	printf("\n\nɾ��������Ԫ�سɹ�\n");
}
int length(intlist* a)
{
	int flag = 0;
	intlist* p;
	p = (intlist*)malloc(sizeof(intlist));
	p = a;
	while (p != NULL)
	{

		p = p->next;
		flag++;
	}
	return flag;
}
void let_go_off(intlist* a)
{
	intlist* pre = a, * p = a->next;
	int flag = 0;
	int max = length(a);
	while (flag<max)
	{
		free(pre);//�ͷ�ͷ�ڵ�

		pre = p;//ͷ�ڵ��ƶ�����̽ڵ�

		p = pre->next;//ͬ������ƶ�һ��
		flag++;
	}
	free(pre);
	printf("\n\nbinggo�ͷ����\n");
}


int main(void)
{
	char array[5] = { 'a','b','c','d','e' };
	intlist* a = init_intlist();
	for (int i = 0; i < 5; i++)
	{
		insert_intlist(a, i + 1, array[i]);
	}
	output_intlist(a);
	output_intlist_length(a);
	output_intlist_three(a);
	output_intlist_a_location(a, 'c');
	insert_intlist_four(a, 4, 'h');
	output_intlist(a);
	delete_intlist_three(a, 3);
	output_intlist(a);
	//let_go_off(a);        ��ȱ��
	//output_intlist(a);
	free(a);
}
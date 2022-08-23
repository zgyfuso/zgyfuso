#include<iostream>
using namespace std;
typedef struct node
{
	char array;
	struct node* next;
}intlist;

class List
{
private:
	intlist* list;
public:
	intlist* init_intlist(void);
	void insert_intlist(intlist*,int,char);
	void output_intlist(intlist*);
	void output_intlist_length(intlist*);
	void output_intlist_three(intlist*);
	void output_intlist_a_location(intlist*, char);
	void delete_intlist_three(intlist*, int);
	int length(intlist*);
	void let_go_off(intlist*);
};
class Stack :public List
{
private:
	intlist* list;
public:
	intlist* init_intstack(void);
	void push_intstack(intlist*, int, char);
	void output_intstack(intlist*);
	void output_intstack_length(intlist*);
	void output_intstack_top(intlist*);
	void output_intstack_a_location(intlist*, char);
	void pop_intstack(intlist*,int i);
	//int length_(intlist*);
};

intlist* List::init_intlist()
{
		intlist* a;
		a = (intlist*)malloc(sizeof(intlist));
		if (a != NULL)
		{
			a->next = NULL;
		}
		return a;
}
void List::insert_intlist(intlist* a, int i, char t)
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
void List::output_intlist(intlist* a)
{
	intlist* p = a;
	printf("\n\n���������");
	while (p->next != NULL)
	{

		p = p->next;
		printf("%3c", p->array);
	}
}
void List::output_intlist_length(intlist* a)
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
void List::output_intlist_three(intlist* a)
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
void List::output_intlist_a_location(intlist* a, char date)
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
void List::delete_intlist_three(intlist* a, int i)
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
int List::length(intlist* a)
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
void List::let_go_off(intlist* a)
{
	intlist* pre = a, * p = a->next;
	int flag = 0;
	int max = length(a);
	while (flag < max)
	{
		free(pre);//�ͷ�ͷ�ڵ�

		pre = p;//ͷ�ڵ��ƶ�����̽ڵ�

		p = pre->next;//ͬ������ƶ�һ��
		flag++;
	}
	free(pre);
	printf("\n\nbinggo�ͷ����\n");
}//��bug

intlist* Stack::init_intstack(void)
{
	return init_intlist();
}
void Stack::push_intstack(intlist* a, int i, char t)
{
	insert_intlist(a, i,t);
}
void Stack::output_intstack(intlist* a)
{
	output_intlist(a);
}
void Stack::output_intstack_length(intlist*a)
{
	output_intlist_length(a);
}
/*
int Stack::length_(intlist* a)
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
*/
void Stack::output_intstack_top(intlist*a)
{
	int flag = 0;
	intlist* p;
	p = (intlist*)malloc(sizeof(intlist));
	p = a;
	while (p != NULL)
	{
		flag++;
		p = p->next;
		if (flag == length(a)-1)
		{
			printf("\n\n��ջ���ջ��Ԫ����%c", p->array);
		}
	}
	//free(p);
}
void Stack::pop_intstack(intlist*a,int i)
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
	printf("\n\n����ջ��Ԫ�سɹ�\n");
}

int main(void)
{
	List l;
	char array[] = { 'a','b','c','d','e' };
	intlist*data= l.init_intlist();
	for (int i = 0; i < 5; i++)
	{
		l.insert_intlist(data, i + 1,array[i]);
	}
	l.output_intlist(data);
	l.output_intlist_length(data);
	l.output_intlist_three(data);
	l.output_intlist_a_location(data, 'b');
	l.delete_intlist_three(data, 3);
	free (data);

	cout << "\n" << "**************************************************************" << "\n";

	Stack s;
	intlist* data_ = s.init_intstack();
	for (int i = 0; i < 5; i++)
	{
		s.push_intstack(data_, i + 1, array[i]);
	}
	s.output_intstack(data_);
	s.output_intstack_length(data_);
	s.output_intstack_top(data_);
	s.pop_intstack(data_,5);
	s.output_intstack(data_);
}
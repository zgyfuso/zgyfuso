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
		q->array = t;//q在每一个函数模块中都是作为中间量取得操作地址，并且
					 //在后续操作中始终使用该替代地址，
	}
	p = a;
	for (int j = 1; j <= i - 1; j++)
	{
		p = p->next;//该循环是将指针移到需要链接的地址
					//即末尾
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
	printf("\n\n输出单链表：");
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
	printf("\n\n该链表的长度为%d", flag);
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
			printf("\n\n该链表的第三个元素是%c", p->array);
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
		p = p->next;//此处必须在条件判断之后
		//为啥
		//或者该条件移至此处，并且在判断内加入break
		if (p->array == date)
		{
			printf("\n\nc字符出现的位置角标是%d", flag);
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
		p = p->next;//1.让p指向第i-1个元素节点
	}
	q = p->next;//2.让q指向第i个元素节点
	p->next = q->next;//3.删除
	free(q);//4.释放空间
	printf("\n\n删除第三个元素成功\n");
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
		free(pre);//释放头节点

		pre = p;//头节点移动到后继节点

		p = pre->next;//同步向后移动一个
		flag++;
	}
	free(pre);
	printf("\n\nbinggo释放完成\n");
}//有bug

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
			printf("\n\n该栈表的栈顶元素是%c", p->array);
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
		p = p->next;//1.让p指向第i-1个元素节点
	}
	q = p->next;//2.让q指向第i个元素节点
	p->next = q->next;//3.删除
	free(q);//4.释放空间
	printf("\n\n弹出栈顶元素成功\n");
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
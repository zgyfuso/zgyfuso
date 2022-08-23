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
void output_intlist(intlist* a)
{
	intlist* p = a;
	printf("\n\n输出单链表：");
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
	printf("\n\n该链表的长度为%d", flag);
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
			printf("\n\n该链表的第三个元素是%c", p->array);
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
void insert_intlist_four(intlist* a,int i, char date)
{
	intlist* p, * q;
	q = (intlist*)malloc(sizeof(intlist));
	if (q != NULL)
	{
		q->array = date;//q在每一个函数模块中都是作为中间量取得操作地址，并且
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
	printf("\n\n插入成功\n");
}
void delete_intlist_three(intlist* a, int i)
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
		free(pre);//释放头节点

		pre = p;//头节点移动到后继节点

		p = pre->next;//同步向后移动一个
		flag++;
	}
	free(pre);
	printf("\n\nbinggo释放完成\n");
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
	//let_go_off(a);        有缺陷
	//output_intlist(a);
	free(a);
}
#include<stdio.h>
#include<stdlib.h>
typedef struct LianBiao
{
	char data;
	struct LianBiao* qian;
	struct LianBiao* hou;
}DLink;
DLink* init_LianBiao(void)
{
	/*DLink* a;
	a = (DLink*)malloc(sizeof(DLink));
	if (a != 0)
	{
		a->qian = a->hou = NULL;
}
	/*DLink* t;
	t= (DLink*)malloc(sizeof(DLink));
	t->data = 'l';
	a->hou = t;
	t->qian = a;
	a = t;
	
	if (a != NULL)
	{
		return a;
	}
	*/
	DLink* h;
	h = (DLink*)malloc(sizeof(DLink));
	h->hou = NULL;
	h->qian = NULL;
	return h;
}
void insert_LianBiao(DLink* a, char data,int flag)
{
	DLink* t, * p=a;
	t= (DLink*)malloc(sizeof(DLink));
	if (t != NULL)
	{
		t->data = data;//中间变量值
	}
	
	for (int i = 0; i < flag ; i++)
	{
		p = p->hou;//循环至倒数第二个节点
	}
	t->hou = p->hou;
	p->hou->qian = t;
	t->qian = p;
	p->hou = t;


}
void show(DLink* a)
{
	DLink* p = a;
	while (p != NULL)
	{
		printf("%3c", p->data);
		p->hou;
	}
}
int main()
{
	char data[5] = { 'a','b','c','d','e' };
	DLink* array = init_LianBiao();
	for (int i = 0; i < 5; i++)
	{
		insert_LianBiao(array, data[i],i);
	}
	show(array);
}

#include <stdio.h>

//typedef int int;

typedef struct Node
{
	int data;//�洢���Ա��Ԫ��ֵ��1���� 
	struct Node *next;//�洢���Ԫ�ؽڵ�ĵ�ַ 
	struct Node *prior;//�洢ǰ��Ԫ�ؽڵ�ĵ�ַ
}DLinkList;

/*
Ϊ�˷���������ر�ؼ���һ��ͷ�ڵ���������ͺ���ͨ�ڵ�һ��
data������ 
next���洢��1��Ԫ�ؽڵ�ĵ�ַ
��һ��Ԫ�ص�ǰ�����Կ�����ͷ�ڵ� 
prior��NULL 

ִ�����p=p->next;һ�Σ�p��ָ�������ƶ�һ��λ��
ִ�����p=p->prior;һ�Σ�p��ָ����ǰ�ƶ�һ��λ��

�գ�h->next==NULL&&h->prior==NULL 
���һ���ڵ㣺��p->next==NULL,˵��pָ�����һ���ڵ� 
*/

/*
1.��ʼ��
����һ���յ����Ա� 
*/
DLinkList *InitList()
{
	DLinkList *h;
	h=(DLinkList *)malloc(sizeof(DLinkList));
	h->next=NULL;
	h->prior=NULL;
	return h;
}

/*
2.���� 
*/
void DestroyList(DLinkList *h)
{
	int ListDelete(DLinkList *h,int i,int *e);
	int v;
	
	while(h->next!=NULL||h->prior!=NULL)//����
	{
		//ɾ����1��Ԫ�ؽڵ�
		ListDelete(h,1,&v); 
	} 
	free(h);
} 

/*
3.�ж����Ա��Ƿ�Ϊ��
��Ϊ�գ�����1��
���򣬷���0 
*/
ListEmpty(DLinkList *h)
{
	if(h->next==NULL&&h->prior==NULL)
	{
		return 1;
	} 
	else
	{
		return 0;
	}
} 

/*
4.�󳤶� 
*/
int ListLength(DLinkList *h)
{
	DLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)
	{
		p=p->next;
		len=len+1;
	} 
	return len;
} 

/*
5.��� 
*/
void DispList(DLinkList *h)
{
	DLinkList *p;
	p=h; 
	printf("���Ա��Ԫ��Ϊ��");
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%d ",p->data); 
	} 
	printf("\n");
}

/*
5.��� 
*/
void DispList1(DLinkList *h)
{
	DLinkList *p;
	//��pָ�����һ��Ԫ�ؽڵ�
	p=h;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	//�������
	printf("���Ա��Ԫ��Ϊ��");
	while(p!=h)
	{
		printf("%d ",p->data);
		p=p->prior;
	} 
	printf("\n");	
}

/*
6.ȡֵ
 
�����Ϸ���i>=1 && i<=ListLength(h)
�������Ϸ���������ز���������1��
������ʾ������0  
*/
int GetElem(DLinkList *h,int i,int *e)
{
	DLinkList *p;
	int j;
	
	if(i>=1 && i<=ListLength(h))
	{
		p=h;
		for(j=1;j<=i;j++)
		{
			p=p->next;
		} 
		*e=p->data;
		return 1;
	} 
	else
	{
		printf("��������\n");
		return 0;
	}	
}

/*
7.����
�����Ա��в����Ƿ����ֵΪe��Ԫ�أ�
�����ڣ����ظ�Ԫ�ص�λ��
���򣬷���0 
*/
int LocateElem(DLinkList *h,int e)
{
	DLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)
	{
		p=p->next;
		len=len+1;
		if(p->data==e)
		{
			return len;
		}
	} 
	return 0;
} 

/*
8.��� 

�����Ϸ���i>=1 && i<=ListLength(h)+1
�������Ϸ���������ز���������1��
������ʾ������0  
*/
int ListInsert(DLinkList *h,int i,int e)
{
	DLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h)+1)
	{
		//1.����һ���ڵ�q���洢Ԫ��e
		q=(DLinkList *)malloc(sizeof(DLinkList));
		q->data=e;
		//2.��pָ���i-1��Ԫ�ؽڵ� 
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		} 
		//3.���
		q->next=p->next;
		p->next->prior=q;
		p->next=q;
		q->prior=p;
		return 1;
	}
	else
	{
		printf("��������\n");
		return 0;
	} 
}

/*
9.ɾ��

�����Ϸ���i>=1 && i<=ListLength(h)
�������Ϸ���������ز���������1��
������ʾ������0  
*/
int ListDelete(DLinkList *h,int i,int *e)
{
	DLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h))
	{
		//1.��pָ���i-1��
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		} 
		//2.��qָ���i��
		q=p->next;
		//3.��Ҫɾ����Ԫ��ֵ�洢��*e�� 
		*e=q->data;
		//4.ɾ��
		p->next=q->next;
		q->next->prior=p;
		//5.�ͷŴ洢�ռ�
		free(q); 
		return 1;
	}
	else
	{
		printf("��������\n");
		return 0;
	} 	
} 
/*
�����ȶ��壬�ٸ���ֵ������ʹ�� 
*/
int main()
{
	/*
	int a;
	int b;
	
	b=a*10;
	printf("%d\n",b);*/
	
	/*
	int *p;
	
	p=(int *)malloc(sizeof(int));
	
	*p = 123;
	
	printf("%d\n",*p);
	
	free(p);
	*/
	return 1;
} 

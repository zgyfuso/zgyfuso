#include <stdio.h>



typedef struct Node
{
	char data;//�洢���Ա��Ԫ��ֵ��1���� 
	struct Node *next;//�洢���Ԫ�ؽڵ�ĵ�ַ 
}SLinkList;

/*
Ϊ�˷���������ر�ؼ���һ��ͷ�ڵ���������ͺ���ͨ�Ľڵ�һ��
data����ʹ�� 
next���洢��1��Ԫ�ؽڵ�ĵ�ַ 

��֪��ĳ���ڵ�ĵ�ַ����
��ַ->data��ʾ�ýڵ�data��Ա��ֵ
��ַ->next��ʾ�ýڵ�next��Ա��ֵ

�գ�h->next==NULL 
���һ���ڵ㣺��p->next==NULL��˵��pָ�����һ���ڵ�

ִ���������1�Σ� 
p=p->next; 
p��ָ�������ƶ�1��λ�á� 
*/

/*
1.��ʼ�� 
*/
SLinkList *InitList()
{
	SLinkList *h;
	h=(SLinkList *)malloc(sizeof(SLinkList));
	h->next=NULL;
	return h;
} 

/*
2.���� 
*/
void DestroyList(SLinkList *h)
{
	int ListDelete(SLinkList *h,int i,char *e);
	char v;
	
	while(h->next!=NULL)//����
	{
		//ɾ����1��Ԫ�ؽڵ�
		ListDelete(h,1,&v); 
	} 
	free(h);
} 

/*
3.�ж����Ա��Ƿ�Ϊ�գ�
��Ϊ�գ�����1��
���򣬷���0 
*/
int ListEmpty(SLinkList *h)
{
	if(h->next==NULL)
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
int ListLength(SLinkList *h)
{
	SLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)//p�������һ��
	{
		p=p->next;
		len=len+1;
	} 
	return len;
} 

/*
5.��� 
*/
void DispList(SLinkList *h)
{
	SLinkList *p;
	p=h;
	while(p->next!=NULL)//p�������һ��
	{
		p=p->next;
		printf("%d ",p->data); 
	} 
}

/*
5.ȡֵ
�����Ա��еĵ�i��Ԫ��ȡ�������洢��*e��

�����Ϸ���i>=1 && i<=ListLength(h) 

�������Ϸ���������ز�����������1��
������ʾ������0 
*/
int GetElem(SLinkList *h,int i,char *e)
{
	SLinkList *p;
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
int LocateElem(SLinkList *h,char e)
{
	SLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)//p�������һ��
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
�����Ա�ĵ�i��λ�����һ��ֵΪe��Ԫ�ؽ�ȥ

�����Ϸ���i>=1 && i<=ListLength(h)+1 

�������Ϸ���������ز�����������1��
������ʾ������0 
*/
int ListInsert(SLinkList *h,int i,char e)
{
	SLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h)+1)
	{
		//1.����һ���ڵ�q���洢ֵΪe��Ԫ��
		q=(SLinkList *)malloc(sizeof(SLinkList));
		q->data=e;
		//2.��pָ���i-1�� 
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		}
		//3.���
		q->next=p->next;
		p->next=q; 
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
�����Ա��еĵ�i��Ԫ��ɾ��������ɾ����Ԫ��ֵ�洢��*e�� 

�����Ϸ���i>=1 && i<=ListLength(h) 

�������Ϸ���������ز�����������1��
������ʾ������0 
*/
int ListDelete(SLinkList *h,int i,char *e)
{
	SLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h))
	{
		//1.��pָ���i-1��Ԫ�ؽڵ�
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		}
		//2.��qָ���i��Ԫ�ؽڵ�
		q=p->next;
		//3.��Ҫɾ����Ԫ�ش洢��*e��
		*e=q->data;
		//4.ɾ��
		p->next=q->next;
		//5.�ͷ���ռ�Ĵ洢�ռ�
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
    
    
    
    return 0;
}

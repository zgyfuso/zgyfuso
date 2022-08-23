#include<stdio.h>
#include<stdlib.h>
#define MAX 30
typedef struct
{
	char array[MAX];
	int length;
}sqlist;
void init_array(sqlist*l)
{
	//sqlist l;
	//l= (sqlist*)malloc(sizeof(sqlist));
	l->length = 0;
}
void insert_array(sqlist* l, char word)
{
	l->array[l->length] = word;
	l->length++;
}

void output_array(sqlist* l)
{
	printf("\n顺序表内容：\n");
	for (int i = 0; i < l->length; i++)
	{
		printf("%3c", l->array[i]);
	}
}
void output_array_length(sqlist* l)
{
	printf("\n\n顺序表长度是 ：");
	printf("%d", l->length);
}
int judge_array(sqlist* l)
{
	if (l->length != 0) return 1;
	else return 0;
}
void output_array_three(sqlist* l)
{
	printf("\n\n第三个元素是：");
	printf("%c", l->array[3 + 1]);
}
void insert_array_four(sqlist* l,int four)
{
	l->length++;
	for (int i =l->length; i>(four-1); i--)
	{
		l->array[i] = l->array[i - 1];
	}
	l->array[four - 1] = 'f';
	//l->array[four - 1] = '\0';
	printf("\n\n插入成功\n");
}
void delete_array_three(sqlist* l, int three)
{
	l->length--;
	l->array[three - 1] = '\0';
	for (int i = three; i <= l->length; i++)
	{
		l->array[i - 1] = l->array[i];
	}
	printf("\n\n删除成功\n");
}

int main(void)
{
	sqlist l;
	char array[5] = { 'a','b','c','d','e' };
	int flag = 0;

	init_array(&l);
	for (int i = 0; i < 5; i++)
	{
		insert_array(&l, array[i]);
	}
	output_array(&l);
	output_array_length(&l);
	flag = judge_array(&l);
	output_array_three(&l);
	insert_array_four(&l, 4);
	output_array(&l);
	delete_array_three(&l, 3);
	output_array(&l);

}
#include<stdio.h>
#include<stdlib.h>
#define five 7  //��Ҫ����ý�����2
void init(int[][five]);
void run(int[][five]);
int main()
{
	int array[five][five];
	init(array);
	run(array);
	for (int i = 0; i < five; i++)
	{
		for (int j = 0; j < five; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
	
}
void init(int array[][five])
{
	//��һ�θ�ֵ��ȫ��Ϊ��
	for (int i = 0; i < five; i++)
	{
		for (int j = 0; j < five; j++)
		{
			array[i][j] = ' ';
		}
	}
	//�ڶ��θ�ֵȫ��Ϊd
	for (int i = 1; i < five-1; i++)
	{
		for (int j = 1; j < five-1; j++)
		{
			array[i][j] = 'd';
		}
	}
	//���и�ֵȫ��weia
	for (int i = 0; i < five; i++)
	{
		array[0][i] = 'a';
	}
	//�ҶԽ��߸�ֵΪb
	array[0][five-1] = 'b';
	//�Ҳ��и�ֵȫ��Ϊc
	for (int i = 1; i < five; i++)
	{
		array[i][five - 1] = 'c';
	}
}
void run(int array[][five])
{
	int x = 1, y = (five - 2) / 2 + 1;
	array[x][y] = 5;//��ʼλ��
		for (int i = 1; i <= 9; i++,x--,y++)
	{
			//�Ϸ���ײѭ��

		if (array[x][y] == 'a')
		{
			x += (five - 2);
		}


		//array[x][y] = i;
		//printf("\n%d", array[x][y]);


		//�ҷ���ײѭ��
		if (array[x][y] == 'c')
		{
			y -= (five - 2);
		}

		//������ײѭ�������Ͻ���ײѭ��
		/*if (array[x][y] == 'd' || array[x][y] == 'b')
		{
			x++;
		}
		*/
		
		array[x][y] = i;
		
	}

}
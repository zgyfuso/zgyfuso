#include<stdio.h>
#include<stdlib.h>
#define flag 35  //��Ҫ����ý�����2
//��ȥ2�����Ϊ����
void init(int[][flag]);
void run(int[][flag]);
int main()
{
	int array[flag][flag];
	init(array);
	run(array);
	printf("%d�ĶԽ��������ǣ�\n", flag - 2);
	for (int i = 1; i < flag - 1; i++)
	{
		for (int j = 1; j < flag - 1; j++)
		{
			//printf("\n%d", array[i][j]);
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}

}
void init(int array[][flag])
{
	//��һ�θ�ֵ��ȫ��Ϊ��
	for (int i = 0; i < flag; i++)
	{
		for (int j = 0; j < flag; j++)
		{
			array[i][j] = ' ';
		}
	}
	//�ڶ��θ�ֵȫ��Ϊd
	for (int i = 1; i < flag - 1; i++)
	{
		for (int j = 1; j < flag - 1; j++)
		{
			array[i][j] = 'd';
		}
	}
	//���и�ֵȫ��weia
	for (int i = 0; i < flag; i++)
	{
		array[0][i] = 'a';
	}
	//�ҶԽ��߸�ֵΪb
	array[0][flag - 1] = 'b';
	//�Ҳ��и�ֵȫ��Ϊc
	for (int i = 1; i < flag; i++)
	{
		array[i][flag - 1] = 'c';
	}
}
void run(int array[][flag])
{
	int x = 1, y = (flag - 2) / 2 + 1;
	array[x][y] = 1;//��ʼλ��
	for (int i = 1; i <= (flag - 2) * (flag - 2); i++, x--, y++)
	{
		//�Ϸ���ײѭ��

		if (array[x][y] == 'a')
		{
			x += (flag - 2);
		}


		//array[x][y] = i;



		//�ҷ���ײѭ��
		if (array[x][y] == 'c')
		{
			y -= (flag - 2);
		}

		//������ײѭ�������Ͻ���ײѭ��
		if (i != 1) {
			if (array[x][y] != 'd')
			{
				y--;
				x++;

				x++;
			}
		}



		array[x][y] = i;

	}

}
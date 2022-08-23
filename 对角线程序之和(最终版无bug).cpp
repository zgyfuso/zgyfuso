#include<stdio.h>
#include<stdlib.h>
#define flag 35  //需要计算得阶数加2
//减去2后必须为奇数
void init(int[][flag]);
void run(int[][flag]);
int main()
{
	int array[flag][flag];
	init(array);
	run(array);
	printf("%d的对角线序列是：\n", flag - 2);
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
	//第一次赋值，全部为空
	for (int i = 0; i < flag; i++)
	{
		for (int j = 0; j < flag; j++)
		{
			array[i][j] = ' ';
		}
	}
	//第二次赋值全部为d
	for (int i = 1; i < flag - 1; i++)
	{
		for (int j = 1; j < flag - 1; j++)
		{
			array[i][j] = 'd';
		}
	}
	//首行赋值全部weia
	for (int i = 0; i < flag; i++)
	{
		array[0][i] = 'a';
	}
	//右对角线赋值为b
	array[0][flag - 1] = 'b';
	//右侧列赋值全部为c
	for (int i = 1; i < flag; i++)
	{
		array[i][flag - 1] = 'c';
	}
}
void run(int array[][flag])
{
	int x = 1, y = (flag - 2) / 2 + 1;
	array[x][y] = 1;//初始位置
	for (int i = 1; i <= (flag - 2) * (flag - 2); i++, x--, y++)
	{
		//上方碰撞循环

		if (array[x][y] == 'a')
		{
			x += (flag - 2);
		}


		//array[x][y] = i;



		//右方碰撞循环
		if (array[x][y] == 'c')
		{
			y -= (flag - 2);
		}

		//自身碰撞循环及右上角碰撞循环
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
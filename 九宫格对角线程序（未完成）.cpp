#include<stdio.h>
#include<stdlib.h>
#define five 7  //需要计算得阶数加2
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
	//第一次赋值，全部为空
	for (int i = 0; i < five; i++)
	{
		for (int j = 0; j < five; j++)
		{
			array[i][j] = ' ';
		}
	}
	//第二次赋值全部为d
	for (int i = 1; i < five-1; i++)
	{
		for (int j = 1; j < five-1; j++)
		{
			array[i][j] = 'd';
		}
	}
	//首行赋值全部weia
	for (int i = 0; i < five; i++)
	{
		array[0][i] = 'a';
	}
	//右对角线赋值为b
	array[0][five-1] = 'b';
	//右侧列赋值全部为c
	for (int i = 1; i < five; i++)
	{
		array[i][five - 1] = 'c';
	}
}
void run(int array[][five])
{
	int x = 1, y = (five - 2) / 2 + 1;
	array[x][y] = 5;//初始位置
		for (int i = 1; i <= 9; i++,x--,y++)
	{
			//上方碰撞循环

		if (array[x][y] == 'a')
		{
			x += (five - 2);
		}


		//array[x][y] = i;
		//printf("\n%d", array[x][y]);


		//右方碰撞循环
		if (array[x][y] == 'c')
		{
			y -= (five - 2);
		}

		//自身碰撞循环及右上角碰撞循环
		/*if (array[x][y] == 'd' || array[x][y] == 'b')
		{
			x++;
		}
		*/
		
		array[x][y] = i;
		
	}

}
#include<stdio.h>
#include<math.h>
int main(void)
{
	  double money,year,mouths,tax;
	money = 1000;
	do
	{
		money--;
		for (year = 0; year < 5; year++)
		{
			for (mouths = 0; mouths < 1; mouths++)
			{
				tax = money * 0.01875*12;
			}
			money += tax;
			money -= 100;
		}

	} while (money < -0.0000001 && money>0.000001);
	printf("you need %lf money\n",money);
	return 0;
}
//�ó����ʼ���ɵ���1000������ʼ���Ϊ10000��100000��1000000��ʱ
//������������ֵ��һ������ѡ��
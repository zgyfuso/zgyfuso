#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;
//  3 °ό  2 Ότ  1΄Έ
int run(int a, int b)
{
	if (a == b) return 0;
	if (a == 3 && b == 2) return 2;
	if (a == 3 && b == 1) return 1;
	if (a == 2 && b == 3) return 1;
	if (a == 2 && b == 1) return 2;
	if (a == 1 && b == 3) return 2;
	if (a == 1 && b == 2) return 1;
}
int main(void)
{
	int run(int, int);
	int a, b, c;
	int flag;
	int last_a=0, last_b=0,last_temp;
	cout << "input flag: ";
	cin >> flag;
	srand(time(0));
	for (int i = 0; i < flag; i++)
	{
		
		a = rand() % 3+1 ;
		b = rand() % 3+1;
		//c = rand() % 3 + 1;
		//printf("%d %d\n", a, b);
		last_temp = run(a, b);
		switch (last_temp)
		{
		case 0:; break;
		case 1:last_a += 1; break;
		case 2:last_b += 1; break;
		//case 3:last_c++;
		}
	}
	cout << "a win: ";
	for (int i = 0; i < last_a; i++)
	{
		cout << "*";
	}
	cout << "\n";
	cout << "b win: ";
	for (int i = 0; i < last_b; i++)
	{
		cout << "*";
	}
}
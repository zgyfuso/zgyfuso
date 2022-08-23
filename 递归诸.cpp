#include<iostream>
#include<Windows.h>
using namespace std;
void fun(int n)
{
	if (n == 1)
	{
		printf("a:%d\n", n);
	}
	else
	{
		printf("b:%d\n", n);
		fun(n - 1);
		printf("c:%d\n", n);
	}
}
int average(int *n)
{
	int i = 0;
	int last = 0;
	if (i == 4)
	{
		//printf("resukt is: %d", last/5);
		return n[0];
	}
	else
	{
		last += *(n+1);
		average((n+1));
		return last;
	}
}
int jiechen(int n)
{
	int i = 0;
	if (n == 1)
	{
		return 1;
		//printf("last is %d", i);
	}
	else {
		return n* jiechen(n - 1);
	}
	//return 1;
}
int ans [21];
void digui(int n, int cnt)
{
	if (cnt == n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		ans[cnt] = i;
		digui(n, cnt + 1);
	}
}
int main(void)
{
	/*
	for (int i = 0; i < 100; i++)
	{
		cout << i << " " << "\n"[(i) % 5 != 0];																
	}
	*/
	//fun(5);
	//int data[5] = { 1,7,5,2,4 };
	//printf("last is %d", average(data));
	//printf("last is %d", jiechen(5));
	//printf("%d", *(data + 1));
	//system("color 81");
	digui(3, 0);
}
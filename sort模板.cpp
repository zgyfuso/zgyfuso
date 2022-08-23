#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void show(int array[])
{
	for (int i = 0; i < 6; i++)
	{
		cout << array[i] << " ";
	}
}
int main(void)
{
	int array[] = { 1,5,2,8,3,7 };
	sort(array, array + 6);
	show(array);
	cout << "\n";
	sort(array, array + 6, greater<>());
	show(array);
	cout << "\n";
	sort(array, array + 6,less<>());
	show(array);
}
#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int array_i[] = { 1,2,3,4,5, };
	bool array_b[] = { true,false,true };
	string array_s[] = { "z","g","y" };
	for (auto& i : array_i)
	{
		cout << i << "  ";
	}
	cout << "\n";
	for (auto& i : array_b)
	{
		cout << i << "  ";
	}
	cout << "\n";
	for (auto& i : array_s)
	{
		cout << i;
	}
}
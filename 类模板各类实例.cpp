#include<iostream>
using namespace std;
template<typename T>
void findmax(T a, T b)
{
	cout << "max is " << (a > b ? a : b)<<"\n";
}
template <typename T>
void findmax(T a, T b, T c)
{
	cout << "max is " << (a > b ? (a > c ? a : c) : (b > c ? b : c))<<"\n";
}
template<typename T,int size>
void sort(T a[size])//T a[size]也可，但不可自动类型识别
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				T temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
template<typename T, int size>
void sort_(T(&a)[size])//与上方写法不可重载，因为可兼容，无法识别
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				T temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main(void)
{
	findmax(1, 2);
	findmax(3.0, 2.0);
	findmax('a', 'b');
	findmax<int>('a', 'b');
	findmax<double>(2, 3, 4);
	findmax<char>(2, 3, 4);
	float array_f[]= { 1,4,7,3,2,5 };
	int size = sizeof(array_f) / sizeof(typeid(array_f));
	sort<float,6>(array_f);
	cout << "array is " << "\n";
	for (int i = 0; i < 6; i++)
	{
		cout << " " << array_f[i];
	}
	cout << "\n";

	sort_(array_f);
	cout << "array_ is " << "\n";
	for (int i = 0; i < 6; i++)
	{
		cout << " " << array_f[i];
	}
	cout << "\n";
}
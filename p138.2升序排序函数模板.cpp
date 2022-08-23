#include<iostream>
#include<string.h>
using namespace std;

template<typename T, int size>
T findmax(T array[size])
{
	int max = 0;
	max = array[size - 1];
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				T temp;
				temp = array[j]; array[j] = array[j + 1]; array[j + 1] = temp;
			}
		}
	}
	return max;
}

int main(void)
{
	int last;
	char last_c;
	int a[] = { 1,2,3,4,5,6,7,8 };
	int a_size = sizeof(a) / sizeof(int);
	char b[] = { 'a','g','h','q','o','u','i'};
	int b_size = sizeof(b) / sizeof(char);

	last = findmax<int, 8>(a);
	for (int i = a_size-1; i > 0; i--)
	{
		cout << " " << a[i];
	}
	last_c = findmax<char, 6>(b);
	cout << endl;
	for (int i = b_size - 1; i > 0; i--)
	{
		cout << " " << b[i];
	}
}
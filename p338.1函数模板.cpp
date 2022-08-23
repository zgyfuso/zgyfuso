#include<iostream>
#include<string.h>
using namespace std;

template<typename T,int size>
T findmax(T array[size])
{
	int max = 0;
	max = array[size - 1];
	for (int i = size - 1; i > 0; i--)
	{
		if (array[size] > max)
		{
			max = array[size];
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
	char b[] = { 'a','g','h','q','o','u' };
	int b_size = sizeof(b) / sizeof(char);

	last=findmax<int,8>(a);
	cout << "max is " <<last<<endl;
	last_c = findmax<char, 6>(b);
	cout << "max is " << last_c << endl;
}
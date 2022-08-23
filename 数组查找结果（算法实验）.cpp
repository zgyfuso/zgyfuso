#include<string.h>
#include<iostream>
using namespace std;
int main(void)
{
	int array[] = { 1,9,5,2,0,5,2,1,6,3 };
	//int length = sizeof(array) / sizeof(int);
	int target=4;
	int hash[10];
	hash[0] = array[0];
	for (int i = 0; i < 10; i++)
	{
		if(array[i] - target)
			cout<<i<<" "<<
	}
}
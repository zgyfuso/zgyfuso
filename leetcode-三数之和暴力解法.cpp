#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int array[] = { -1,0,3,2,-2,4 };
	for (int i = 0; i < 6; i++)
	{
		
		for (int j = i+1; j < 6; j++)
		{
			
			for (int n = j+1; n < 6; n++)
			{
				if (array[i] + array[n] + array[j] == 0)
				{
					cout << array[i] << " " << array[j] << " " << array[n] << "\n";
				}
			}
		}
	}
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void look(vector<int>&,int& ,int&,int&);
void again(vector<int>&, int&, int&, int&);
int main(void)
{
	int a=0, b=0, c=0;
	vector<int>array = { 0,1,2,0,2,1 };
	look(array,a,b,c);
	again(array, a, b, c);
	//cout << a << " " << b << " " << c;
	vector<int>::iterator iter;
	iter = array.begin();
	while (iter != array.end())
	{
		cout << *iter<<" ";
		iter++;
	}

}
void look(vector<int>& array,int &a,int &b,int &c)
{
	for (int i = 0; i < array.size(); i++)
	{
		//cout << array[i] << "\n";
		if (array[i] == 0) a++;
		if (array[i] == 1) b++;
		if (array[i] == 2) c++;
		/*
		switch (array[i])
		{
		case 1:a++; break;
		case 2:b++; break;
		case 3:c++;	break;
		}
			*/
	}
}
void again(vector<int>&array, int&a, int&b, int&c)
{
	/*
	vector<int>::iterator iter;
	iter = array.begin();
	while (iter != array.end())
	{
		
	}
	*/
	for (int i = 0; i < a; i++)
	{
		array[i] = 0;
	}
	
	for (int i = a; i < a + b; i++)
	{
		array[i] = 1;
	}
	
	for (int i = c+b; i < a + b + c; i++)
	{
		array[i] = 2;
	}
	/*
	*/
}
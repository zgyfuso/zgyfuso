#include<iostream>
#include<string>
#include<vector>
using namespace std;
void sort(vector<int>&);
void run(vector<int>&,int binggo);
int main(void)
{
	vector<int>array{ -1,0,3,2,-2,1 };
	sort(array);
	run(array, 0);
	
}
void sort(vector<int>& array)
{
	//vector<int>::iterator iter;
	//iter = array.begin();
	int n = array.size();
	for (int i = 0; i < n - 1; ++i)  //�Ƚ�n-1��
	{
		for (int j = 0; j < n - 1 - i; ++j)  //ÿ�ֱȽ�n-1-i��,
		{
			if (array[j] > array[j + 1])//˳������
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
void run(vector<int>& array,int binggo)
{
	int flag, left=1, right=array.size()-1;
	
	for (int i = 0; i < array.size(); i++)
	{
		flag =i;
		left = i + 1;
		right = array.size() - 1;
		//if (array[i] != array[0] || array[i] != array.size())
		//{
		while (left<right)
		{		
		//}
		
		if (array[flag] + array[left] + array[right] == binggo)
		{
			cout << array[flag] << " " << array[left] << " " << array[right] << "\n";
			break;//������ѭ��
		}
		while (array[flag] + array[left ]+ array[right ]< binggo)
		{
			if(array[left]<array.size())
			left++;
		}
		while (array[flag] + array[left] + array[right] > binggo)
		{
			if(right>0)
			right--;
		}
	}
	}
}
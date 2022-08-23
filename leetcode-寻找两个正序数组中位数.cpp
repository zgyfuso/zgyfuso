#include<string>
#include<iostream>
#include<vector>
using namespace std;
void get(vector<int>&);
void sort(vector<int>&);
void out(vector<int>&);
vector<int> add(vector<int>&,vector<int>&);
float found(vector<int>&);
int main(void)
{
	float result;
	vector<int>array_1;
	vector<int>array_2;
	vector<int>last;
	get(array_1);
	get(array_2);
	last=add(array_1, array_2);
	//cout << array_1.size() << " " << last.size();
	sort(last);
	result=found(last);
	cout <<"中间数是：" << result << "\n";
	cout << "排序结果是（调试使用）";
	out(last);
	//sort(array_1);
	//sort(array_2);
	//out(array_1);
	//out(array_2);
	
}
void get(vector<int>& array)
{
	int max, temp;
	cout << "数组大小：";
	cin >> max;
	//cout << "\n";
	for (int i = 0; i < max; i++)
	{
		cout << i + 1 << ": ";
		cin >> temp;
		array.push_back(temp);
	}
	cout << "\n";
}
void out(vector<int>& array)
{
	vector<int>::iterator iter;//迭代器
	iter = array.begin();
	while (iter != array.end())
	{

		cout << "\n" << *iter << " ";
		iter++;
	}
}
void sort(vector<int>& array)
{
	//vector<int>::iterator iter;
	//iter = array.begin();
	int n = array.size();
	for (int i = 0; i < n - 1; ++i)  //比较n-1轮
	{
		for (int j = 0; j < n - 1 - i; ++j)  //每轮比较n-1-i次,
		{
			if (array[j] > array[j + 1])//顺序排序
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
vector<int> add(vector<int>& array_1,vector<int>&array_2)
{
	vector<int>array_all;
	//int flag = array_1.size() + array_2.size();

	for (int i = 0; i < array_1.size(); i++)
	{
		array_all.push_back(array_1[i]);
	}
	//cout << array_all.size();

	for (int i =0; i <array_2.size(); i++)
	{
		array_all.push_back(array_2[i]);
	}
	return array_all;
}
float found(vector<int>& array)
{
	int length = array.size();
	if (length % 2 == 1) return (array[array.size() / 2 ]);
	if (length % 2 == 0)
	{
		//cout << "1: " << array[array.size() / 2-1] << " 2: " << array[array.size() / 2 + 1-1]<<"\n";
		return ((float(array[array.size() / 2-1]) + float(array[array.size() / 2 + 1-1])) / 2);
	}
		//return((float(array[array.size() / 2]) + float(array[array.size() / 2]) + 1) / 2);
}
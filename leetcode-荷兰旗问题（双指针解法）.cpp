#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void)
{
	vector<int>array = { 1,0,2,2,0,1,1,2 };
	int i = 0;
	int p_0 = 0;
	int p_1 = array.size() - 1;
	while (i <= p_1)//�ӵȺ�����Ϊ��p_2���λ�û�Ҫ���һ��
	{
		if (array[i] == 0)
		{
			int temp = array[i]; array[i] = array[p_0]; array[p_0] = temp;
			p_0++;
		}
		if (array[i] == 2)
		{
			int temp = array[i]; array[i] = array[p_1]; array[p_1] = temp;
			
			i--;
			p_1--;
		}
		i++;
	}
	vector<int>::iterator iter;
	iter = array.begin();
	while (iter != array.end())
	{
		cout << *iter << " ";
		iter++;
	}
}
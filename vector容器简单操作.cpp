#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void)
{
	vector<int>array(10,1);
	array[1] = 2;
	swap(array[0], array[1]);
	//����
	//array[0].swap(array[1]);
	array.push_back(2);//β����ͷ��Ϊfront
	array.emplace_back(3);
	//array.insert(4, 5);
	//array.push_front;    vector ��֧�ָò�������insert����������
	array.insert(array.begin(), 20);
	//array.insert(array[5], 55);//�ò�������


	vector<int>::iterator iter;//������
	iter = array.begin();
	while (iter!=array.end())
	{
		
		cout << "\n" << *iter << " ";
		iter++;
	}

}
#include<iostream>
#define pcc pair<char,char>
#define x first
#define y second
using namespace std;

void test(pcc* p)
{
	p[1].x = 'b';

}

int main(void)
{
	pcc p[2];
	p[1].x = 'a';
	test(p);
	cout << p[1].x;
}
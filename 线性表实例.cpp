#include<iostream>
#include<string>
#include<list>
using namespace std;
class LIST
{
private:
	list<int>li;
public:
	void init_list();
	void insert_list();
	void get_list(int);
	void out_list();
	void clean_list();
};
void LIST::init_list()
{
	li.insert(li.begin(),1, 1);
	cout << "初始化成功" << "\n";
}
void LIST::insert_list()
{
	//list<int>::iterator iter;
	//iter = li.begin();
	for (int i = 0; i < 3; i++)
	{
		li.insert(li.end(), 1, 2);
	}
	cout << "插入成功" << "\n";
}
void LIST::get_list(int flag)
{
	if (flag > li.size())
	{
		cout << "越界" << "\n";
	}
	//list<int>::iterator iter;
	//iter = li.begin();
	for (int i = 0; i < li.size(); i++)
	{
		if (i == flag)
		{
			//cout<<
		}
	}
	cout << "取值成功" << "\n";
}
void LIST::out_list()
{
	list<int>::iterator iter;
	iter = li.begin();
	for (int i = 0; i < li.size(); i++, iter++)
	{
		cout << *iter << " ";
	}
	cout << "输出成功" << "\n";
}
void LIST::clean_list()
{
	li.clear();
	if (!li.empty())
	{
		cout << "删除不成功" << "\n";
	}
	cout << "删除成功" << "\n";
}


int main(void)
{
	LIST list;
	list.init_list();
	list.insert_list();
	list.get_list(2);
	list.out_list();
	list.clean_list();
	list.out_list();
}
#include<string>
#include<iostream>
#include<stack>
using namespace std;
class ST
{
private:
	stack<int>st;
public:
	int init_stack(void);
	int insert_stack(void);
	int pop_stack(void);
	int out_stack(void);
	int clean_stack(void);
};
int main(void)
{
	int flag;
	ST stack;
	flag=stack.init_stack();
	flag = stack.insert_stack();
	flag = stack.pop_stack();
	flag = stack.out_stack();
	flag = stack.clean_stack();
	if (flag == 0)
	{
		cout << "\n" << "ÔËÐÐ³ö´í";
	}
}
int ST::init_stack(void)
{
	st.push(0);
	if (st.empty())
	{
		return 0;
	}
	return 1;
}
int ST::insert_stack(void)
{
	st.push(2);
	st.push(3);
	st.push(4);
	if (st.size() == 4)
	{
		return 1;
	}
	return 0;
}
int ST::pop_stack(void)
{
	int temp;
	temp = st.top();
	st.pop();
	if (st.top() == temp)
	{
		return 0;
	}
	return 1;
}
int ST::clean_stack(void)
{
	while (!st.empty())
	{
		st.pop();
	}
	if (st.empty())
	{
		return 1;
	}
	return 0;
}
int ST::out_stack(void)
{
	for (int i = 0; i < st.size(); i++)
	{
		cout << "\n" << st.top() << " ";
		st.pop();
	}
	if (st.empty())
	{
		return 1;
	}
	return 0;
}
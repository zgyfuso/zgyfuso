#include<iostream>
#include<string>
#include<stack>
using namespace std;
int init_stack(stack<int>&);
int insert_stack(stack<int>&);
int pop_stack(stack<int>&);
int out_stack(stack<int>&);
int clean_stack(stack<int>&);
int main(void)
{
	int flag = 1;
	stack<int>st;
	
	flag = init_stack(st);
	flag = insert_stack(st);
	flag = pop_stack(st);
	flag = out_stack(st);
	flag = clean_stack(st);
	
	if (flag==0)
	{
		cout << "\n" << "ÔËĞĞ³ö´í";
	}
}
int init_stack(stack<int>& st)
{
	st.push(0);
	if (st.empty())
	{
		return 0;
	}
	return 1;
}
int insert_stack(stack<int>& st)
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
int pop_stack(stack<int>& st)
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
int out_stack(stack<int>&st)
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
int clean_stack(stack<int>& st)
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
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(void)
{
	//stack<int>st = { 1,5,89,4,3,2,0 };
	stack<int>st;
	st.push(20);
	st.push(10);
	st.push(3);
	cout << "\n" << "����Ϊ��" << st.size()<<"\n";
	while (!st.empty())
	{
		int temp = st.top();
		st.pop();
		cout << temp << "\n";
	}//�Ƚ����
	cout << "\n" << "����Ϊ��" << st.size()<<"\n";
}
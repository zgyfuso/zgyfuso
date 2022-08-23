#include<string>
#include<iostream>
#include<stack>
using namespace std;
int main(void)
{
	/*
	string data[] = { "(","[","}" };
	for (int i = 0; i < 3; i++)
	{
		cout << data[i] << endl;
	}
	*/

	/*
	string data;
	cin >> data;
	cout << data;
	*/
	string data;
	stack<char>array;
	cout << "输入括号内容: ";
	cin >> data;
	//if (data[0] == '(')
	//cout << data[0];
	
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] == '(' || data[i] == '{' || data[i] == '[')
		{
			array.push(data[i]);
			//cout << array.top();
		}
		if (data[i] == ')' || data[i] == '}' || data[i] == ']')
		{
			char temp = array.top();
			if (temp == '(') temp = ')';
			if (temp == '[') temp = ']';//反置，方便比较
			if (temp == '{') temp = '}';
			//cout << temp;
			if (temp == data[i])
			{
				array.pop();
			}
			
		}
	}
	if (array.empty()) cout << "\n" << "匹配" << "\n";

	else cout << "\n" << "不匹配" << "\n";
		
}
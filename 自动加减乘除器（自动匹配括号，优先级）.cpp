#include<iostream>
#include<string>
#include<stack>
#include<cctype>
using namespace std;
void init_data(string&);
void inverse(string&, string&);
void out(string&);
double run(string&);//�˴�double���߱�ʵ������
int check(string&);
int main(void)
{
	int flag = 1;
	double result;
	char result_temp;
	string data;
	string inverse_data;
	init_data(data);
	//out(data);
	flag=check(data);
	if (flag == 1)
	{
		inverse(data, inverse_data);
		out(inverse_data);
		result = run(inverse_data);
		//result_temp = result;
		cout << "\n\n" << "last result is :  " << result;
		//printf("last result is %c", result);
	}
	else
	{
		cout << "\n\n" << " �㲻������";
	}
}
void init_data(string& data)
{
	cout << "********************************************";
	cout << "             Ŀǰֻ֧����������Ŷ";
	cout << "********************************************\n\n";
	cout << "�������㣺";
	cin >> data;
}
void inverse(string& data, string& inverse_data)
{
	stack<char>temp;
	/*
	temp.push(data[0]);
	temp.push(data[1]);
	cout << temp.top();
	*/
	
	for (int i = 0; i < data.size(); i++)
	{
		if (isdigit(data[i]))
		{
			inverse_data.insert(inverse_data.size(),1, data[i]);
		}
		if (data[i] == '+' || data[i] == '-')
		{
			if (temp.empty()/* || temp.top() == '('*/)
			{
				temp.push(data[i]);
			}
			else
			{
				if (temp.top() != '(')//binggo
				inverse_data.insert(inverse_data.size(), 1, temp.top());
				temp.pop();
				temp.push(data[i]);
			}
			
		}
		if (data[i] == '*' || data[i] == '/')
		{
			//temp.push(data[i]);//���ȼ���Ϊ��ߣ�ֱ�ӽ�ջ
			while (!temp.empty())
			{
				if (temp.top() != '(')//binggo
				inverse_data.insert(inverse_data.size(), 1, temp.top());//ȡջ��Ԫ�أ�����Ŀ��
				temp.pop();
			}
			temp.push(data[i]);
		}
		if (data[i] == '(' )
		{
			temp.push(data[i]);
		}
		if (data[i] == ')')
		{
			while (temp.top() == '(')//����ط���ǰ��bug����Ҳ��֪��ΪʲôҪ����д�����޸���
			{                        //������дȷʵ��������   !!!�Ѿ��޸���
				//if(temp.top()=='(')                            �����46��
				inverse_data.insert(inverse_data.size(), 1, temp.top());
				temp.pop();	
				temp.pop();
			}
			//if(temp.top()=='(')
			//temp.pop();
		}
	}
	inverse_data.insert(inverse_data.size(), 1, temp.top());//��ջ���һ��Ԫ��
}
void out(string& data)
{
	int flag = data.size();
	cout <<"\n\n" << "after inverse poland run: ";
	for (int i = 0; i < flag; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	
}
double run(string& data)
{
	stack<char>temp;
	int front, after,temp_result;
	for (int i = 0; i < data.size(); i++)
	{
		if (isdigit(data[i]))
		{
			//��׳�Դ��벹ȫ
			data[i] = data[i] - '0';
			//data[i] = double(data[i]);
			temp.push(data[i]);
		}
		if (data[i] == '+' /* || data[i] == '-' || data[i] == '*'*/)
		{
			front = temp.top();
			//cout << endl << front;
			temp.pop();
			after = temp.top();
			//cout << endl << after;
			temp.pop();
			temp_result = front +after;
			//cout << endl << temp_result;
			temp.push(temp_result);
		}
		if (data[i] == '-' )
		{
			after = temp.top();
			//cout << endl << front;
			temp.pop();
			front = temp.top();//�˴�����˳��
			//cout << endl << after;
			temp.pop();
			temp_result = front - after;
			//cout << endl << temp_result;
			temp.push(temp_result);
		}
		if (data[i] == '*')
		{
			after = temp.top();
			//cout << endl << front;
			temp.pop();
			front = temp.top();//�˴�����˳��
			//cout << endl << after;
			temp.pop();
			temp_result = front * after;
			//cout << endl << temp_result;
			temp.push(temp_result);
		}
		if (data[i] == '/')
		{
			after = temp.top();
			//cout << endl << front;
			temp.pop();
			front = temp.top();//�˴�����˳��
			//cout << endl << after;
			temp.pop();
			temp_result = front / after;
			//cout << endl << temp_result;
			temp.push(temp_result);
		}
	}
	temp_result = double(temp.top());
	return temp_result;
	//return temp.top();
}
int check(string& data)
{
	int k_1=0, k_2=0, k_3=0 ;

	for (int i = 0; i < data.size(); i++)
	{
		if (isalpha(data[i]) /* || data[i] != '*' || data[i] != '/' || data[i] != '+' || data[i] != '-'*/)
		{
			cout << "\n\n" << "ɵ�ƣ�������󣡣�����";
			return 0;
		}
		if (data[i] == '(' || data[i] == ')')
			k_1++;
		if (data[i] == '[' || data[i] == ']')
			k_2++;
		if (data[i] == '{' || data[i] == '}')
			k_3++;
	}
	if (k_1 % 2 != 0 || k_2 % 2 != 0 || k_3 % 2 != 0)
	{
		cout << "\n\n" << "ɵ�ƣ����Ų�ƥ�䣡������";
		return 0;
	}
	return 1;
}

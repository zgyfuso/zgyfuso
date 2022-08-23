#include<iostream>
#include<vector>
#define MAX 10
#define pii pair<int,int>
#define pcc pair<char,char>
#define x first
#define y second
using namespace std;

void input(vector<char>&);
void out(vector<char>&);
int init(pcc*);
void out_p(pcc*, int);
void compare(pcc*, pcc*, int, int,pcc*);
int main(void)
{
	int length = 1;
	int length_ = 1;
	pcc r[MAX];
	pcc r_[MAX];
	pcc last[MAX];
	/*
	vector<char>array_a;
	vector<char>array_b;
	vector<char>array_c;
	input(array_a);
	input(array_b);
	input(array_c);
	out(array_a);
	*/
	length=init(r);
	out_p(r, length);
	length = init(r_);
	out_p(r_, length);
	compare(r, r_, length, length_,last);
}
void input(vector<char>& array)
{
	int flag;
	char temp;
	cout << "创建长度为： ";
	cin >> flag;
	for (int i = 0; i < flag; i++)
	{
		cout << i + 1 << ": ";
		cin >> temp;
		array.push_back(temp);
	}
}
void out(vector<char>& array)
{
	cout << "\n\n";
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
}
int init(pcc *r)
{
	int flag = 0;
	char temp_x, temp_y;
	while (flag > 10 || flag <= 0)
	{
		cout << "\n" << "输入该关系的大小： ";
		cin >> flag;
	}
	for (int i = 0; i < flag; i++)
	{
		cout << "第" << i + 1 << "组关系： ";
		cout << "        " << "x: ";
		cin >> temp_x;
		cout << "                    " << "y: ";
		cin >> temp_y;
		r[i] = make_pair(temp_x, temp_y);
	}
	cout << "关系创建完成"<<"\n\n";
	return flag;
}
void out_p(pcc *r, int length)
{
	cout <<'\n' << "最终结果为：";
	for (int i = 0; i < length; i++)
	{
		cout << "(" << r[i].x << " " << r[i].y << ")" << "   ";
	}
	cout << "\n";
}
void compare(pcc*r, pcc*r_, int l, int l_,pcc*last)
{
	int test = 0;
	for (int i = 0; i <= l; i++)
	{
		for (int j = 0; j <= l_; j++)
		{
			if (r[i].y == r_[j].x)
			{
				cout << "\n" << "匹配数组有：" << "(" << r[i].x << " " << r[i].y << ")"
					<< "" << "(" << r_[j].x << " " << r_[j].y << ")" << "   ";
				last[test++] =make_pair (r[i].x, r_[j].y);
			}
		}
	}
	out_p(last, test);
}
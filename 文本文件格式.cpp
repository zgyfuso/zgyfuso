#include<string>
#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
	ofstream out;
	out.open("c:\\Users\\Lenovo\\Desktop\\test.txt", ios::out);
	for (int i = 1; i <= 100;i++)
	{
		out.width(6);//������Ҫ���ļ�������Ĳ��������滻Ϊ����ʱ������
		out.setf(ios::left);
		out << i;
		if (i % 10 == 0) out << endl;
	}
}
//Date.h
#include <iostream>
using namespace std;

class Date
{
	friend istream& operator>>(istream& input, Date& d);//�����>>��������
	//                       ��������  ��һ��  �ڶ���
	friend ostream& operator<<(ostream& output, Date& d);//�����<<��������
public:
	Date();
	Date(int y, int m, int d);//ʹ�����ֵ�������ݳ�Ա��
	Date operator+(int d);//����ĳ���ڼ��������õ�������
	Date operator-(int d);//����ĳ���ڼ�ȥ�����õ�������
	int operator-(Date& b);//������������������
	~Date();
private:
	int year, month, days;
};
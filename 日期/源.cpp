#include "Date.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Please input number of days:(���ڽ������������)" << endl;
	int x, y;
	cin >> x;
	Date t1, t2, t3, t4;
	cin >> t1;
	t2 = t1 + x;
	cout << "���������õ������ڣ�" << endl;
	cout << t2 << endl;
	cout << "-------*************************-------" << endl << endl;
	cout << "Please input number of days:(���ڽ������������)" << endl;
	cin >> y;
	cin >> t3;
	t4 = t3 - y;
	cout << "��ȥ�����õ������ڣ�" << endl;
	cout << t4 << endl;
	cout << "-------*************************-------" << endl << endl;
	int z = 0;
	Date p1(2017, 5, 6), p2;
	cout << "Please input two dates:(���ڽ������������������ļ���)" << endl;
	//Date p1(2017,5,6),p2(2017,4,1);//˭�ǵ�ǰthis->��ֵ����������
	//cin>>p1>>p2;
	cin >> p2;
	z = p1 - p2;
	cout << "����������������" << endl;
	cout << z << endl;
	return 0;
}


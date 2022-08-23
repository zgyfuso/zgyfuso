#include "Date.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Please input number of days:(便于进行天数的相加)" << endl;
	int x, y;
	cin >> x;
	Date t1, t2, t3, t4;
	cin >> t1;
	t2 = t1 + x;
	cout << "加上天数得到的日期：" << endl;
	cout << t2 << endl;
	cout << "-------*************************-------" << endl << endl;
	cout << "Please input number of days:(便于进行天数的相减)" << endl;
	cin >> y;
	cin >> t3;
	t4 = t3 - y;
	cout << "减去天数得到的日期：" << endl;
	cout << t4 << endl;
	cout << "-------*************************-------" << endl << endl;
	int z = 0;
	Date p1(2017, 5, 6), p2;
	cout << "Please input two dates:(便于进行两日期相差的天数的计算)" << endl;
	//Date p1(2017,5,6),p2(2017,4,1);//谁是当前this->的值？？？？？
	//cin>>p1>>p2;
	cin >> p2;
	z = p1 - p2;
	cout << "两日期相差的天数：" << endl;
	cout << z << endl;
	return 0;
}


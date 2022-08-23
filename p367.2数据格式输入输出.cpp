#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(void)
{
	int data=12345;

	cout << "初始化：" << data << endl;

	cout.width(12);//设置域宽

	cout.setf(ios::left);//左对齐
	cout << "左对齐"<<data<<endl;
	cout.setf(ios::right);
	cout << "右对齐"<<data<<endl;

	//八进制
	cout << "八进制" << oct << data<<endl;
	//十六进制
	cout << "十六进制" << hex << data << endl;

	
	//设置精度
	double data_ = 1232411;
	cout << data_ << endl;
	cout << setiosflags(ios::scientific) << setprecision(2);
	cout << "data:" << data_ << endl;
	cout << "精度" << setprecision(2) << data_ << endl;
	
	cout << "小数" << setiosflags(ios::fixed) << data_ << endl;

}
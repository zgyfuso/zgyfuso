#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(void)
{
	int data=12345;

	cout << "��ʼ����" << data << endl;

	cout.width(12);//�������

	cout.setf(ios::left);//�����
	cout << "�����"<<data<<endl;
	cout.setf(ios::right);
	cout << "�Ҷ���"<<data<<endl;

	//�˽���
	cout << "�˽���" << oct << data<<endl;
	//ʮ������
	cout << "ʮ������" << hex << data << endl;

	
	//���þ���
	double data_ = 1232411;
	cout << data_ << endl;
	cout << setiosflags(ios::scientific) << setprecision(2);
	cout << "data:" << data_ << endl;
	cout << "����" << setprecision(2) << data_ << endl;
	
	cout << "С��" << setiosflags(ios::fixed) << data_ << endl;

}
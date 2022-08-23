#include<iostream>
#include<string>
using namespace std;

class Complex
{
private:
	int yuan, jiao, fen;
public:

	friend Complex operator-(Complex,Complex);//��Ϊ˫�β�

	void optimize();//����������Ա����
	void show();
	Complex() = default;
	Complex(int yuan, int jiao, int fen) :yuan(yuan), jiao(jiao), fen(fen)
	{
		optimize();//���亯�����÷����ڹ��캯���У�ʹ��ÿ��ʹ���඼���Զ����ø÷���
	}
};
void Complex::optimize(void)//���ⶨ���Ա��������ֱ��ʹ�������Ѿ����������
{
	jiao += fen / 10; fen %= 10;
	yuan += jiao / 10; jiao %= 10;
}
void Complex::show(void)
{
	cout << "yuan is " << yuan << endl << "jiao is " << jiao << endl << "fen is " << fen;
}

 Complex operator-(Complex temp_1,Complex temp_2)
{
	return Complex( temp_1.yuan- temp_2.yuan, temp_1.jiao -temp_2.jiao, temp_1.fen - temp_2.fen);
}
int main(void)
{
	Complex first(5, 8, 7), second(4, 5, 6);
	Complex total;
	total = first - second;
	total.show();
}
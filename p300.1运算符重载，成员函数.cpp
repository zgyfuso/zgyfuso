#include<iostream>
#include<string>
using namespace std;

class Complex
{
private:
	int yuan, jiao, fen;
public:

	Complex operator+(Complex&);

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
	cout << "yuan is " << yuan << "jiao is " << jiao << "fen is " << fen;
}

Complex Complex::operator+(Complex& temp)
{
	return Complex(yuan + temp.yuan, jiao + temp.jiao, fen + temp.fen);
}
int main(void)
{
	Complex first(1, 2, 3), second(4, 5, 6);
	Complex total;
	total = first + second;
	total.show();
}
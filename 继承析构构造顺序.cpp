#include <iostream>
#include<windows.h>
#include <string>
using namespace std;

class Vehicle
{
protected:
	string color;
	string load;
	string displacement;

public:
	Vehicle() = default;
	Vehicle(string color, string load, string displacement) : color(color), load(load), displacement(displacement) {
		cout<<"���๹�캯����Ӧ"<<"\n";
	}
	Vehicle(const Vehicle&v){
		color=v.color;
		load=v.load;
		displacement=v.displacement;
		cout<<"���࿽�����캯����Ӧ"<<"\n";
	}
	~Vehicle(){
		cout<<"��������������Ӧ"<<"\n";
	}
	friend ostream & operator << (ostream &out, Vehicle *obj)
	{
		out << "��ɫ��" << obj->color << "  ���أ�"<<obj->load<<"  ��������"<<obj->displacement<<"\n";
		return out;
	}
};
class car:public Vehicle
{
	private:
	string type;
	string band;
	public:
	car()=default;
	car(string color,string load,string displacement,string type,string band):Vehicle(color,load,displacement),type(type),band(band){
		cout<<"���๹�캯����Ӧ";
	}
	~car(){
		cout<<"��������������Ӧ"<<"\n";
	}
	friend ostream & operator << (ostream &out, car *obj)
	{
		out << "��ɫ��" << obj->color << "  ���أ�"<<obj->load<<"  ��������"<<obj->displacement<<"  �ͺţ�"<<obj->type<<"  ���ӣ�"<<obj->band<<"\n";
		return out;
	}

};
int main(void)
{
	
	Vehicle *v=new Vehicle("��ɫ","2��","200cc");
	Vehicle *v_=v;
	cout<<v_<<"\n";
	delete v;

	car *c=new car("��ɫ","2��","150ƥ","a186/Corolla SR5","TOYOTA");
	cout<<c;
	delete c;
	system("pause");
}
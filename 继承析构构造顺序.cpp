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
		cout<<"父类构造函数响应"<<"\n";
	}
	Vehicle(const Vehicle&v){
		color=v.color;
		load=v.load;
		displacement=v.displacement;
		cout<<"父类拷贝构造函数响应"<<"\n";
	}
	~Vehicle(){
		cout<<"父类析构函数响应"<<"\n";
	}
	friend ostream & operator << (ostream &out, Vehicle *obj)
	{
		out << "颜色：" << obj->color << "  载重："<<obj->load<<"  排气量："<<obj->displacement<<"\n";
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
		cout<<"子类构造函数响应";
	}
	~car(){
		cout<<"子类析构函数响应"<<"\n";
	}
	friend ostream & operator << (ostream &out, car *obj)
	{
		out << "颜色：" << obj->color << "  载重："<<obj->load<<"  排气量："<<obj->displacement<<"  型号："<<obj->type<<"  牌子："<<obj->band<<"\n";
		return out;
	}

};
int main(void)
{
	
	Vehicle *v=new Vehicle("白色","2吨","200cc");
	Vehicle *v_=v;
	cout<<v_<<"\n";
	delete v;

	car *c=new car("白色","2吨","150匹","a186/Corolla SR5","TOYOTA");
	cout<<c;
	delete c;
	system("pause");
}
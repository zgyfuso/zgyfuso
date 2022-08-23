#include <iostream>
#include <math.h>
using namespace std;

class Point
{
public:
	Point(double x0, double y0){
		x=x0;
		y=y0;
	}
	double distance(Point& p)
	{
		return sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y));
	}
private:
	int x, y;
};

class Circle
{
public:
	Circle(Point p, double r):center(p),rad(r){};
	double area();
	bool InCircle(Point &p)
	{
		return (p.distance(center) < rad);
	}
	
private:
	const double PI=3.1415926535;
	Point center;
	double rad;
};

double Circle::area()
{
	return PI*rad*rad;
}

int main()
{
	Point  p(1.,2.), p2(2,3);
	double r=3.;
	
	Circle c(p, r);
	
	cout<<c.area()<<endl;
	
	cout<<c.InCircle(p2)<<endl;
	
	return 0;
}
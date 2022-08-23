#include<iostream>
#include<string>
#define pii pair<int,int>
#define x first
#define y second
//using pii =pair<int, int>;
using namespace std;

void show(pii p)
{
	cout << "p_x: " << p.x<< "  p_y: " << p.y << "\n";
}
void show(pair<string, pii>p)
{
	cout << "p_x: " << p.x << "  p_y_x: " << p.y.x <<"  p_y_y" <<p.y.y<< "\n";
}

int main(void)
{
	pii a(1, 2);
	show(a);

	pii b = make_pair(3, 4);
	show(b);

	pair < string, pii >c{"zgy", make_pair(5, 6)};
	show(c);

}
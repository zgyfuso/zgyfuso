#include <iostream>
#include <windows.h>
using namespace std;

class Point
{
private:
    double m_x, m_y;

public:
    Point() = default;        //无参构造函数
    Point(double x, double y) //有参构造函数
    {
        this->m_x = x;
        this->m_y = y;
    }
    void set()
    {
        cout << "请输入你的坐标： ";
        cout << "x:";
        // if(!(cin>>m_x))
        // {
        //     cout<<"\n"<<"输入错误！坐标设置为默认值"<<"\n\n";
        //     m_x=0;
        //     cin.clear();
        //     getchar();
        // }
        while (!(cin >> m_x))
        {
            cout << "输入错误！ 请输入正确的数值类型（double）"
                 << "\n";
            cin.clear(); //更改状态位
            getchar();
            cout << "\t\t y:";
        }
        cout << "\t\t y:";
        while (!(cin >> m_y))
        {
            cout << "输入错误！ 请输入正确的数值类型（double）"
                 << "\n";
            cin.clear();
            getchar();
            cout << "\t\t y:";
        }
        cout << "\n坐标录入完毕\n";
    };

    void display()
    {
        cout << "\nx点的坐标是：" << m_x << "\n";
        cout << "y点的坐标是：" << m_y << "\n";
    }
    ~Point()
    {
        cout << "\n再见啦"
             << "\n";
    };
};

int main(void)
{
    Point p1, p2(2, 5);
    p1.set();
    cout << "\n对象p1:\n";
    p1.display();
    cout << "\n对象p2:\n";
    p2.display();
    p1.~Point();
    p2.~Point();
    system("pause");
}
#include <iostream>
#include <windows.h>
using namespace std;

class Point
{
private:
    double m_x, m_y;

public:
    Point() = default;        //�޲ι��캯��
    Point(double x, double y) //�вι��캯��
    {
        this->m_x = x;
        this->m_y = y;
    }
    void set()
    {
        cout << "������������꣺ ";
        cout << "x:";
        // if(!(cin>>m_x))
        // {
        //     cout<<"\n"<<"���������������ΪĬ��ֵ"<<"\n\n";
        //     m_x=0;
        //     cin.clear();
        //     getchar();
        // }
        while (!(cin >> m_x))
        {
            cout << "������� ��������ȷ����ֵ���ͣ�double��"
                 << "\n";
            cin.clear(); //����״̬λ
            getchar();
            cout << "\t\t y:";
        }
        cout << "\t\t y:";
        while (!(cin >> m_y))
        {
            cout << "������� ��������ȷ����ֵ���ͣ�double��"
                 << "\n";
            cin.clear();
            getchar();
            cout << "\t\t y:";
        }
        cout << "\n����¼�����\n";
    };

    void display()
    {
        cout << "\nx��������ǣ�" << m_x << "\n";
        cout << "y��������ǣ�" << m_y << "\n";
    }
    ~Point()
    {
        cout << "\n�ټ���"
             << "\n";
    };
};

int main(void)
{
    Point p1, p2(2, 5);
    p1.set();
    cout << "\n����p1:\n";
    p1.display();
    cout << "\n����p2:\n";
    p2.display();
    p1.~Point();
    p2.~Point();
    system("pause");
}
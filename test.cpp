#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>
#include <iostream>
#include<string>
#include<fstream>

using namespace std;

#define I 10
#define J 20
#define X 0.02 // 0.05   0.5  - 0.02 =0.48 /360=0.133
#define Y 0.05 // 0.1    0.7  - 0.05 =0.65 /360=0.001805
#define init_year 2022;
#define init_mouth 3;
#define init_day 14;
void heart_(void)
{
    cout << "按下任意键开始生成小爱心" << endl
         << endl;
    system("pause");
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            if (j < i + 3 && j > 1 - i || j < i + 8 && j > 6 - i)
            {
                cout << " " << 0;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            if (j >= i && j <= 9 - i)
            {
                cout << " " << 0;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "dang!dang!dang!" << endl
         << "小爱心生成成功！！！" << endl
         << endl
         << endl
         << endl;
    system("pause");
}
float f(float x, float y, float z)
{
    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}
void heart__(void)
{
    string word=" zgy & tbb ";
    int index=0;
    float a=0.5;//0.02
    float b=0.7;//0.05
    int flag=1;//      0.5       0.7
    for (a,b,flag; a>0.02|| b>0.05; a -= 0.00133, b -= 0.001805, flag++)
    {
        for (float y = 1.3; y >= -1.1; y -= b)
        {
            for (float x = -1.2; x <= 1.2; x += a,index++)
                if (pow((x * x + y * y - 1.0), 3) - x * x * y * y * y <= 0.0)
                    {
                        cout <<word[index%word.length()];
                    }
                else
                    cout << ' ';
            cout << endl;
        }
        int t=1;
        Sleep(t);
        cout<<"次数："<<flag;
        system("cls");
    }
}
float h(float x, float z)
{
    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
        if (f(x, y, z) <= 0.0f)
            return y;
    return 0.0f;
}
void bomb_heart(void)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0C);
    HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
    _TCHAR buffer[25][80] = {_T(' ')};
    _TCHAR ramp[] = _T(".:-=+*#%@");
    int count = 0;
    int count1 = 0;
    // system("color F4");
    for (float t = 0.0f;; t += 0.1f)
    {
        int sy = 0;
        float s = sinf(t);
        float a = s * s * s * s * 0.2f;

        for (float z = 1.3f; z > -1.2f; z -= 0.1f)
        {
            _TCHAR *p = &buffer[sy++][0];
            float tz = z * (1.2f - a);
            for (float x = -1.5f; x < 1.5f; x += 0.05f)
            {
                float tx = x * (1.2f + a);
                float v = f(tx, 0.0f, tz);
                if (v <= 0.0f)
                {
                    float y0 = h(tx, tz);
                    float ny = 0.01f;
                    float nx = h(tx + ny, tz) - y0;
                    float nz = h(tx, tz + ny) - y0;
                    float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
                    float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
                    *p++ = ramp[(int)(d * 5.0f)];
                }
                else
                    *p++ = ' ';
            }
        }

        for (sy = 0; sy < 25; sy++)
        {
            COORD coord = {0, sy};
            SetConsoleCursorPosition(o, coord);
            WriteConsole(o, buffer[sy], 79, NULL, 0);
        }
        if (count <= 10)
        {
            printf("短暂的总是浪漫\n"); //表白内容
            printf("漫长总会不满");     // 表白者的名字
            count++;
        }
        else
        {
            printf("陪伴是最长情的告白\n");
            printf("            ————zgy");
            count++;
            if (count >= 20)
            {
                count = 0;
            }
        }
        Sleep(33);
    }
}

int main()
{
    // string word="ab cd";
    // for(char i:word)
    // {
    //     cout<<"\n"<<i;
    // }
    // heart__();
    // heart_();
    // bomb_heart();
    // int result=2;
    // cout<<result+init_day;
    // system("start C:\\Users\\Lenovo\\Desktop\\ha.bat");
    // system(" schtasks");
    // system("pause");
}
#include <string>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <windows.h>
#include <tchar.h>
using namespace std;
void love_tree(void);
void bomb_heart(void);
void i_l_y(void);
float h(float, float);
float f(float, float, float);
void hhh(void);
int main(void)
{
    hhh();
}
float h(float x, float z)
{
    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
        if (f(x, y, z) <= 0.0f)
            return y;
    return 0.0f;
}
float f(float x, float y, float z)
{
    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
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
            // printf("短暂的总是浪漫\n");
            // printf("漫长总会不满");
            count++;
        }
        else
        {
            // printf("陪伴是最长情的告白\n");
            // printf("            ————zgy");
            count++;
            if (count >= 20)
            {
                count = 0;
            }
        }
        Sleep(33);
    }
}
void hhh(void)
{
    float y, x, z, f;
    for (y = 1.5f; y > -1.5f; y -= 0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += 0.05f)
        {
            z = x * x + y * y - 1;
            f = z * z * z - x * x * y * y * y;
            putchar(f <= 0.0f ? "*********"[(int)(f * -8.0f)] : ' ');
        }
        putchar('\n');
    }
}
void i_l_y(void)
{
    int x, z, y;
    for (double y = 2.5; y >= -1.6; y = y - 0.2)
    {
        for (double x = -3; x <= 4.8; x = x + 0.1)
        {
            (pow((x * x + y * y - 1), 3) <= 3.6 * x * x * y * y * y || (x > -2.4 && x < -2.1 && y < 1.5 && y > -1) || (((x < 2.5 && x > 2.2) || (x > 3.4 && x < 3.7)) && y > -1 && y < 1.5) || (y > -1 && y < -0.6 && x < 3.7 && x > 2.2)) ? printf("*") : printf(" ");
        }
        printf("\n");
    }
    system("pause");
}
void love_tree()
{
    system("cls");
    // std::time_t t = std::time(0); // get time now
    // std::tm *now = std::localtime(&t);
    // std::cout << (now->tm_year + 1900) << '-'
    //      << (now->tm_mon + 1) << '-'
    //      <<  now->tm_mday
    //      << "\n";
    // int now_year = now->tm_year + 1900;
    // int now_mouth = now->tm_mon + 1;
    // int now_day = now->tm_mday;
    // int start_year = init_year;
    // int start_mouth = init_mouth;
    // int start_day = init_day;
    // int result = dayDis(start_year, start_mouth, start_day, now_year, now_mouth, now_day);

    int index = 0;
    string word = "zgy & nss";
    float a = 0.5; // 0.02
    float b = 0.7; // 0.05
    int flag = 1;  //      0.5       0.7
    for (a, b, flag; a > 0.02 || b > 0.05; a -= 0.00133, b -= 0.001805, flag++)
    {
        // a += result * 0.00133;
        // b += result * 0.001805;

        for (float y = 1.3; y >= -1.1; y -= b)
        {
            for (float x = -1.2; x <= 1.2; x += a, index++)
                if (pow((x * x + y * y - 1.0), 3) - x * x * y * y * y <= 0.0)
                {
                    cout << /*"*"*/ word[index % word.length()];
                }
                else
                    cout << ' ';
            cout << endl;
        }

        cout << "\n\n\n";
        int t = 10;
        Sleep(t);
        cout << "次数：" << flag;
    }
    //     cout << R"deli(
    //                                                            *
    //                                                         *******
    //                                                ***唯有时间可以将其灌溉***
    // )deli"
    //          << endl
    //          << "\n\n\n\n";
    system("pause");
}


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

#define init_year 2022;
#define init_mouth 5;
#define init_day 2;

int dayDis(int year1, int month1, int day1, int year2, int month2, int day2);
void manu(void);
void time(void);
bool isLeapYear(int);
int getDays(int, int, int);
void exit_manu(void);
void bye_0(void);
void bye_1(void);
void bye_2(void);
void bye_3(void);
void bye_4(void);
void daily_talk(void);
void love_tree(void);
void eat_what(void);
void check_time(int);
void check_time_mouth(void);
void check_time_year(void);
void check_time_100(void);
void check_time_birthday(void);
void bomb_heart(void);
float h(float, float);
float f(float, float, float);
void back_door(void);
void write_manu(void);
void read_manu(void);
void picture_manu(void);
void init_manu(void);

int main(void)
{
    back_door();
    manu();
    system("pause");
}
void manu(void)
{
    int flag = 0;
    while (flag != 5)
    {
        system("cls");
        cout << R"deli(                   
                    //   ____  ________  _       _                   
                    //  /_   \/  __/\  \//      /.\                  
                    //   /   /| |  _ \  /       \ _\_                
                    //  /   /_| |_// / /        /|/ /                
                    //  \____/\____\/_/         \__/\                
                    //                                               
                    //                       _      ____  ____       
                    //                      / \  /|/ ___\/ ___\      
                    //                      | |\ |||    \|    \      
                    //                      | | \||\___ |\___ |      
                    //                      \_/  \|\____/\____/      
                    //                                               
                    //                                              )deli"
             << "\n\n";

        cout << "\n\n\n\n"
             << R"deli(                     
                     ************************************************************
                     ************************************************************
                     ***********      1:�������������һ��೤ʱ����        ********
                     ***********                                         ********
                     ***********      2:�������ǵİ�����                   ********
                     ***********                                         ********
                     ***********      5:�˳�������                        ********
                     ************************************************************
                     ************************************************************
                     ************************************************************
                     ************************************************************
                     ************************************************************
                     ************************************************************
                     ************************************************************
                     ************************************************************)deli"
             << endl;
        // int flag = 0;
        cout << "\t\t\t\t\t\t�������ѡ��";
        cin >> flag;
        while (flag != 1 && flag != 2 && flag != 5)
        {
            cout << "\n\t\t\t\t\t\t����������������ŶŶŶ\n";
            cout << "\n\t\t\t\t\t\t�������ѡ��";
            cin >> flag;
        }
        switch (flag)
        {
        case 1:
        {
            time();
        }
        break;
        case 2:
        {
            love_tree();
        }
        break;
        // case 4:
        // {
        //     eat_what();
        // }
        // break;
        case 5:
        {
            exit_manu();
            exit(0);
        }
        break;
            // case 2:
            // {
            //     picture_manu();
            // }
            // break;

            // default:
            //     break;
        }
    }
}

void love_tree()
{
    system("cls");
    std::time_t t = std::time(0); // get time now
    std::tm *now = std::localtime(&t);
    // std::cout << (now->tm_year + 1900) << '-'
    //      << (now->tm_mon + 1) << '-'
    //      <<  now->tm_mday
    //      << "\n";
    int now_year = now->tm_year + 1900;
    int now_mouth = now->tm_mon + 1;
    int now_day = now->tm_mday;
    int start_year = init_year;
    int start_mouth = init_mouth;
    int start_day = init_day;
    int result = dayDis(start_year, start_mouth, start_day, now_year, now_mouth, now_day);

    int index = 0;
    string word = "zgy & nss";
    float a = 0.5; // 0.02
    float b = 0.7; // 0.05
    int flag = 1;  //      0.5       0.7
                   // for (a,b,flag; a>0.02|| b>0.05; a -= 0.00133, b -= 0.001805, flag++)
                   // {
    a += result * 0.00133;
    b += result * 0.001805;

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
    // int t=10;
    // Sleep(t);
    // cout<<"������"<<flag;
    // }
    cout << R"deli(
                                                               *
                                                            *******
                                                   ***Ψ��ʱ����Խ�����***
    )deli"
         << endl
         << "\n\n\n\n";
    system("pause");
}

void time()
{
    system("cls");
    cout << R"deli(
                                 //   ___                                                          
                                 //    |   |_    _      _   _   ._ _   ._    _.  ._                
                                 //    |   | |  (/_    (_  (_)  | | |  |_)  (_|  | |  \/           
                                 //                                    |              /            
                                 //                                                                
                                 //   o   _    _|_  |_    _                                        
                                 //   |  _>     |_  | |  (/_                                       
                                 //                                                                
                                 //                                                                
                                 //   |   _   ._    _    _    _  _|_     _  ._    _    _    _  |_  
                                 //   |  (_)  | |  (_|  (/_  _>   |_    _>  |_)  (/_  (/_  (_  | | 
                                 //                 _|                      |                      )deli"
         << endl;
    std::time_t t = std::time(0); // get time now
    std::tm *now = std::localtime(&t);
    // std::cout << (now->tm_year + 1900) << '-'
    //      << (now->tm_mon + 1) << '-'
    //      <<  now->tm_mday
    //      << "\n";
    int now_year = now->tm_year + 1900;
    int now_mouth = now->tm_mon + 1;
    int now_day = now->tm_mday;
    int start_year = init_year;
    int start_mouth = init_mouth;
    int start_day = init_day;
    int result = dayDis(start_year, start_mouth, start_day, now_year, now_mouth, now_day);
    //******************************
    // result = 30;
    // now_year = 2023;
    // now_mouth =start_mouth;
    // now_day =start_day;
    // now_mouth=9;
    // now_day=22;
    // result=100;
    //******************************
    cout << "\n\t\t\t\t\tzgy & nss��һ��" << result << " ����\n";
    daily_talk();
    system("pause");
    if (now_year == (start_year + 1) && now_mouth == start_mouth && now_day == start_day)
    {
        check_time_year();
    }
    else if (now_mouth == 9 && now_day == 30)
    {
        check_time_birthday();
    }
    else
    {
        check_time(result);
    }
    system("pause");
}
void check_time_birthday()
{
    system("cls");
    cout << R"deli(
//   /$$                                                     /$$       /$$             /$$     /$$             /$$                    
//  | $$                                                    | $$      |__/            | $$    | $$            | $$                    
//  | $$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$      | $$$$$$$  /$$  /$$$$$$  /$$$$$$  | $$$$$$$   /$$$$$$$  /$$$$$$  /$$   /$$
//  | $$__  $$ |____  $$ /$$__  $$ /$$__  $$| $$  | $$      | $$__  $$| $$ /$$__  $$|_  $$_/  | $$__  $$ /$$__  $$ |____  $$| $$  | $$
//  | $$  \ $$  /$$$$$$$| $$  \ $$| $$  \ $$| $$  | $$      | $$  \ $$| $$| $$  \__/  | $$    | $$  \ $$| $$  | $$  /$$$$$$$| $$  | $$
//  | $$  | $$ /$$__  $$| $$  | $$| $$  | $$| $$  | $$      | $$  | $$| $$| $$        | $$ /$$| $$  | $$| $$  | $$ /$$__  $$| $$  | $$
//  | $$  | $$|  $$$$$$$| $$$$$$$/| $$$$$$$/|  $$$$$$$      | $$$$$$$/| $$| $$        |  $$$$/| $$  | $$|  $$$$$$$|  $$$$$$$|  $$$$$$$
//  |__/  |__/ \_______/| $$____/ | $$____/  \____  $$      |_______/ |__/|__/         \___/  |__/  |__/ \_______/ \_______/ \____  $$
//                      | $$      | $$       /$$  | $$                                                                       /$$  | $$
//                      | $$      | $$      |  $$$$$$/                                                                      |  $$$$$$/
//                      |__/      |__/       \______/                                                                        \______/ 
                               
                                               �������������໥������
                                               ���ñ��ʴ���Ǹ���
                                               �������˵ļᶨ��ѡ���˱˴ˣ�
                                               ������������ĵ�һ������
                                               ף�¸����Ҵ���������տ���  --zgy                                   
                                                                                    
                                                                                    
                                                                                    )deli";
    system("pause");
}
void daily_talk()
{
    printf("\n\nÿ��Сɧ����\n");
    srand(time(NULL));
    int flag = (rand() % 30) + 1;
    switch (flag)
    {
    case 1:
        printf("�Ҵ�Լ���û��ʲô�Ż���ֻ����Ϊ���Ҽ������㣬�������ӹ�������в�ƾ��������Щ������\n");
        break;
    case 2:
        printf("�����㲢�Һ�����һ�������̫�����ˣ�������ڣ�ȴ���ĺ����磬 �п�ӯ���п��١�\n");
        break;
    case 3:
        printf("ϲ������ϲ�������������ܹ��ݿ������̣��ҰͲ���һ�����ͳ���ʲô�������㣬·������С����ҲҪ�ĸ��㿴����Ҳ������д��\n");
        break;
    case 4:
        printf("�Ȱ��������Ҫ��������\n");
        break;
    case 5:
        printf("���Һ�ϲ�����أ�ֻ֪��Ŀǰϲ����ĳ̶ȣ�����������ϲ����������������޷��󼰵ġ����ǵ�һ����ңң���ȡ�\n");
        break;
    case 6:
        printf("����ķ�˿��ָ�䣬���ÿһ���Ҷ���ռ�С�����������������ʮ�����ݡ��ƻ��ݡ�\n");
        break;
    case 7:
        printf("��Ϳ���������ÿ�춼�ԣ�����ܲ���ÿ�춼���������㣬���һ��Ҫ�ظ��ö�Ρ�ûƭ�㣬������ġ���仰������д��\n");
        break;
    case 8:
        printf("�������:ʱ���ĵ�ǣ�����������������ɵ�ƫ��������ÿ�춼��˵���������\n");
        break;
    case 9:
        printf("������ʼ�ϲ�����������Ҳ����ͻ�������Ļ�ϲ��\n");
        break;
    case 10:
        printf("���ܹ鳳�ܣ�ϲ�����ϲ���㣬�������ĸ�����ֻҪ������֣��Ҿͻ�һֱ�����ȥ��\n");
        break;
    case 11:
        printf("��Щ��ϲ��������Ϊ���ܸ����������֣�����ϲ���㣬����Ϊ������ҵĿ��֡�\n");
        break;
    case 12:
        printf("���Ƿǳ��ǳ��ǳ��ɰ����ˣ���Ӧ��������õ��ˣ���Ҳ��ϣ���Ҿ��ǡ�\n");
        break;
    case 13:
        printf("�������ҵ�ʱ���Ҵ�δ��Ľ���κ��ˡ�\n");
        break;
    case 14:
        printf("����ɰ�����˵ʱ������˼������˼��֮�󣬻�������˵��\n");
        break;
    case 15:
        printf("���ǳ�¶�������ǣ�����һ�еĻ�ϲ��\n");
        break;
    case 16:
        printf("������ϲ���������㶼�У����������е������Ҷ�ϲ����\n");
        break;
    case 17:
        printf("��ǧǧ�������������㣬���㻨�����������Ҷ���֮����\n");
        break;
    case 18:
        printf("�����һ���¹��������ҵ����ϣ�ӳ������ҹ�����������\n");
        break;
    case 19:
        printf("�����кö���������ĵ����������㡣\n");
        break;
    case 20:
        printf("��ʹ����û��ô���ף��һ�����������δ���һ����ϲ�� ��Ϊ����������\n");
        break;
    case 21:
        printf("��ô��û�����£���һֱ��������֡�\n");
        break;
    case 22:
        printf("û�����������������һ�¶������ѹ���\n");
        break;
    case 23:
        printf("ʱ�������㣬Խ��ƽ������飬Խ�ǳ��� ��\n");
        break;
    case 24:
        printf("����ÿ����� ��ʱ��ϵ����֪���㲻���� ��֪����һֱ�ڣ��໥��� ����æµ�����ž�����õ������ɡ�\n");
        break;
    case 25:
        printf("�Ҿ�����õ�״̬�ǣ����ʱ������������ʱ���¶�\n");
        break;
    case 26:
        printf("��˵ɵ�ᴫȾ���ұ�ɵ֮��᲻�ỹ�Ǻ�ϲ�����أ��Ҿ��ÿ϶��ᣡ��������\n");
        break;
    case 27:
        printf("��Ӧ�ò��������Ӧ�ò������\n");
        break;
    case 28:
        printf("��ϲ���㣬���Ҷ��ҵļ���\n");
        break;
    case 29:
        printf("ϲ���㣬������ʣ��쾭���壬����ôק�\n");
        break;
    case 30:
        printf("�Ҿ��ý������ǵ�һ��������ˣ�������ǣ���ô���ⲻ����ÿ�����㣬����һ����\n");
        break;
    }
    printf("\n\n\n");
}
void exit_manu()
{
    system("cls");
    srand(time(0));
    int flag = rand() % 5;
    switch (flag)
    {
    case 0:
    {
        bye_0();
    }
    break;
    case 1:
    {
        bye_1();
    }
    break;
    case 2:
    {
        bye_2();
    }
    break;
    case 3:
    {
        bye_3();
    }
    break;
    default:
    {
        bye_4();
    }
    break;
    }
    cout << "\n\n\n";
    system("pause");
}
void bye_0()
{
    // cout << "\n0";
    cout << R"deli(
                            //    __                                                    
                            //   /__   _    _    _|  __  |_        _     _|_  o  |  |   
                            //   \_|  (_)  (_)  (_|      |_)  \/  (/_     |_  |  |  |   
                            //                                /                         
                            //                                                          
                            //   _|_   _   ._ _    _   ._  ._   _                       
                            //    |_  (_)  | | |  (_)  |   |   (_)  \/\/                
                            //                                                          )deli";
}
void bye_1()
{
    // cout << "\n1";
    cout << R"deli(
                        //      __                                                                                 
                        //     /__   _    _    _|    ._ _    _   ._  ._   o  ._    _                               
                        //     \_|  (_)  (_)  (_|    | | |  (_)  |   | |  |  | |  (_|  o                           
                        //                                                         _|  /                           
                        //                    __                          _                                        
                        //                   /__   _    _    _|     _.  _|_  _|_   _   ._  ._    _    _   ._       
                        //                   \_|  (_)  (_)  (_|    (_|   |    |_  (/_  |   | |  (_)  (_)  | |  o   
                        //                                                                                     /   
                        //    __                                                                                   
                        //   /__   _    _    _|     _        _   ._   o  ._    _                                   
                        //   \_|  (_)  (_)  (_|    (/_  \/  (/_  | |  |  | |  (_|  o                               
                        //                                                     _|  /                               
                        //                                                                                         
                        //                    /\   ._    _|     _    _    _    _|    ._   o   _   |_   _|_         
                        //                   /--\  | |  (_|    (_|  (_)  (_)  (_|    | |  |  (_|  | |   |_  o      
                        //                                      _|                            _|                   
    )deli";
}
void bye_2()
{
    // cout << "\n2";
    cout << R"deli(
                               //   ___                                                  
                               //    |      _.  ._ _          _        ._   _            
                               //   _|_    (_|  | | |    \/  (_)  |_|  |   _>            
                               //                        /                               
                               //                                                                        
                               //             |_    _    _.  ._  _|_     _.  ._    _|     _   _        | 
                               //             | |  (/_  (_|  |    |_    (_|  | |  (_|    _>  (_)  |_|  | 
                               //                                                                        
    )deli";
}
void bye_3()
{
    // cout << "\n3";
    cout << R"deli(
                    //                                                                                                      
                    //   |    _        _     o   _          |_    _   ._     _|_         _     ._    _    _   ._   |   _    
                    //   |_  (_)  \/  (/_    |  _>    \/\/  | |  (/_  | |     |_  \/\/  (_)    |_)  (/_  (_)  |_)  |  (/_   
                    //                                                                         |              |             
                    //                                                                                                      
                    //         |_    _      _.  ._   _                                                                      
                    //   \/\/  | |  (_)    (_|  |   (/_                                                                     
                    //                                                                                                      
                    //          _                            _                                                              
                    //    _.  _|_  ._   _.  o   _|     _   _|_    |_    _   o  ._    _      _.  |   _   ._    _             
                    //   (_|   |   |   (_|  |  (_|    (_)   |     |_)  (/_  |  | |  (_|    (_|  |  (_)  | |  (/_            
                    //                                                               _|                                     
                    //                                                                                                      
                    //    _    _   _   _.  ._    _     _|_   _    _    _   _|_  |_    _   ._  |                             
                    //   (/_  _>  (_  (_|  |_)  (/_     |_  (_)  (_|  (/_   |_  | |  (/_  |   o                             
                    //                     |                      _|                                                        
    )deli";
}
void bye_4()
{
    // cout << "\n4";
    cout << R"deli(
                                //                                                                         
                                //    _   _          _        /  |  |    |_    _     |_    _.   _  |       
                                //   _>  (_)    \/  (_)  |_|     |  |    |_)  (/_    |_)  (_|  (_  |<  o   
                                //              /                                                      /   
                                //                         _                                               
                                //   ._  o   _   |_   _|_   )                                              
                                //   |   |  (_|  | |   |_  o                                               
                                //           _|                                                             
    )deli";
}
void check_time(int day)
{
    // cout<<"\n"<<day+2;
    switch (day)
    {
    case 30:
        check_time_mouth();
        break;
    case 100:
        check_time_100();
        break;

        // default:
        //     break;
    }
}
void check_time_year(void)
{
    system("cls");
    cout << R"deli(
//        ::::::::       ::::    :::       ::::::::::        :::   :::       ::::::::::           :::        ::::::::: 
//      :+:    :+:      :+:+:   :+:       :+:               :+:   :+:       :+:                :+: :+:      :+:    :+: 
//     +:+    +:+      :+:+:+  +:+       +:+                +:+ +:+        +:+               +:+   +:+     +:+    +:+  
//    +#+    +:+      +#+ +:+ +#+       +#++:++#            +#++:         +#++:++#         +#++:++#++:    +#++:++#:    
//   +#+    +#+      +#+  +#+#+#       +#+                  +#+          +#+              +#+     +#+    +#+    +#+    
//  #+#    #+#      #+#   #+#+#       #+#                  #+#          #+#              #+#     #+#    #+#    #+#     
//  ########       ###    ####       ##########           ###          ##########       ###     ###    ###    ###     
    
                                            �������·�������˴�
                                            ����Ѷ��Թµ�������¸�
                                            һ�δ�ʧȥ������
                                            ��û�뿪
                                            ��������ĸ��
                                            ������������ӵ������ů
                                            ���������д�������
                                            δ�������������������ڴ�
                                            �����
                                            һֱ�� ���¸�˵�� zgy->nss
    )deli";
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
void check_time_100(void)
{
    system("cls");
    cout << R"deli(
                                                                 //  :::'##:::::'#####:::::'#####:::
                                                                 //  :'####::::'##.. ##:::'##.. ##::
                                                                 //  :.. ##:::'##:::: ##:'##:::: ##:
                                                                 //  ::: ##::: ##:::: ##: ##:::: ##:
                                                                 //  ::: ##::: ##:::: ##: ##:::: ##:
                                                                 //  ::: ##:::. ##:: ##::. ##:: ##::
                                                                 //  :'######::. #####::::. #####:::
                                                                 //  :......::::.....::::::.....::::
                                                                          ��һ�죬��ʼ��ƽ����������ܿ���
                                                                          ��Ҫ���ȵ��Ҹ�
                                                                          �ֵܵ�ʧ���ʹ��
                                                                          �ڲ�������ҹ
                                                                          ���и�����
                                                                          ��Ҫ���ȵ��Ҹ�
                                                                          ����˫��ȥ����
                                                                          ÿ�������뻳��
                                                                          ������¶�
                                                                          ��Ҫ���ȵ��Ҹ�
                                                                          ��������������
                                                                          ���������ںδ�
                                                                          ��������·
             
             
                                                                         ��ʵ�Ҹ���������ƽƽ������
                                                                         ��Ҫ�Ĳ��Ƕ�ӵ�У���������Ҫ��ǡ������ߡ�
                                                                         ���Ͱ������ģ�����������������������
                                                                         ��ô�����ĸ������͹ֵֹģ��������Բ�һ�°����
                                                                         zgy->nss       
    )deli";
    // float y, x, z, f;
    // for (y = 1.5f; y > -1.5f; y -= 0.1f)
    // {
    // 	for (x = -1.5f; x < 1.5f; x += 0.05f)
    // 	{
    // 		z = x * x + y * y - 1;
    // 		f = z * z * z - x * x * y * y * y;
    // 		putchar(f <= 0.0f ? "*********"[(int)(f * -8.0f)] : ' ');
    // 	}
    // 	putchar('\n');
    // }
    bomb_heart();
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
            // printf("���ݵ���������\n");
            // printf("�����ܻ᲻��");
            count++;
        }
        else
        {
            // printf("��������ĸ��\n");
            // printf("            ��������zgy");
            count++;
            if (count >= 20)
            {
                count = 0;
            }
        }
        Sleep(33);
    }
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
void check_time_mouth(void)
{
    system("cls");
    cout << R"deli(
                                                                   
                                                      .--,-``-.                    
                                                     /   /     '.       ,----..    
                                                    / ../        ;     /   /   \   
                                                    \ ``\  .`-    '   /   .     :  
                                                     \___\/   \   :  .   /   ;.  \ 
                                                          \   :   | .   ;   /  ` ; 
                                                          /  /   /  ;   |  ; \ ; | 
                                                          \  \   \  |   :  | ; | ' 
                                                      ___ /   :   | .   |  ' ' ' : 
                                                     /   /\   /   : '   ;  \; /  | 
                                                    / ,,/  ',-    .  \   \  ',  /  
                                                    \ ''\        ;    ;   :    /   
                                                     \   \     .'      \   \ .'    
                                                      `--`-,,-'         `---`      
                            ����������һ��ĵ���ʮ�죬��������һ��ĵ�һ���£�Ҳ���㴥���ĵ�һ���ʵ���
                            ��������һ�����ڵ�ʱ����Ӧ���ദ�ĺ����ɣ�����������
                            ϣ��������������Դ�������
                                                                                  --zgy
                                                                                    
)deli";

    system("pause");
}
bool isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
int getDays(int year, int month, int day)
{
    int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
        m[2]++;
    int result = 0;
    for (int i = 1; i < year; i++)
    {
        result += 365;
        if (isLeapYear(i))
            result++;
    }
    for (int i = 1; i < month; i++)
    {
        result += m[i];
    }
    result += day;

    return result;
}
int dayDis(int year1, int month1, int day1, int year2, int month2, int day2)
{
    return abs(getDays(year2, month2, day2) - getDays(year1, month1, day1));
}
void back_door(void)
{
    ofstream outfile;
    outfile.open("D:\\for_nss.txt", ios::out);
    string word = R"deli(
                        С�棬�����һ�������ҷ�����ĳ���ʱ������ĵ���������������ļ��ڣ�
                        ���ᾲ���Ĵ�����ĵ�����ֱ�������
                        ��������Ļ���������9��30��Ҳ�����������죬��ῴ����λ�
                        д���ʱһֱ���Ÿ�����ļ���ӱ������֣���������ѡ�����������
                        ����һֱûʵ�֣�Ҳ�գ���������Щ�˸�
                        ������Ҳ���ٸ���д��Щ����ˣ�����˵˵���ﻰ��
                        ������ʱ�����Ѿ���ҵ�ˣ����ܿ������о�����Ҳ����ȥ�ξ�������������������Ȼ���п����Ѿ���ʼ������
                        ˵�����ǣ�������ʱ������Ȼ��һ�𣬿��ǵ�Ӧ����ȥ��Ҽ���ĸʱ������������Ľ�ͨ���߰�
                        �������ǻ�����Ϊ������ķ������һ����
                        ���Ҷ��ԣ������ĳ���Ҳ���������ʱ��̸����
                        ����֮���������껪
                        �����ǰ���
                        �ֻ��������Ѿ��ֿ������Ѿ���������²��������Σ�
                        �ҽ�������һ���������������������嵥��
                        ��Ҳ�޷�
                        ���²Թ��������޳���������������ıȽ���ĵ�����
                        �����Ƕ��Ǻܾ��Ժ�������ˣ�
                        �����ڣ�������Ȼ�������У���ɪ������
                        ������͹��˰�
                        ϲ�������������ģ���ϲ����Ҳ�����
                        ��ͺܰ�����
                        ˵����ô�࣬�ص�������ص�
                        ף�����տ��֣�С��Ҫ�ᶨ������δ����
                        �����ʱ���ǻ���һ�𣬴���绰���Ұɣ����ǳ�ȥ��
                        �����ʱ���Ƿֿ��ˣ��Ǿ���ȴ�ɣ���������£������Ƚ������Ҫ�����㲻��ڡ�
                        ����
                                                                                       --�����)deli";
    outfile << word;
    outfile.close();
}
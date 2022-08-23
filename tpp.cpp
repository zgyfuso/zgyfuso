
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
                     ***********      1:看看和你猪哥在一起多长时间啦        ********
                     ***********                                         ********
                     ***********      2:看看我们的爱情树                   ********
                     ***********                                         ********
                     ***********      5:退出！！！                        ********
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
        cout << "\t\t\t\t\t\t输入你滴选择：";
        cin >> flag;
        while (flag != 1 && flag != 2 && flag != 5)
        {
            cout << "\n\t\t\t\t\t\t输入错误啦，看清楚哦哦哦\n";
            cout << "\n\t\t\t\t\t\t输入你滴选择：";
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
    // cout<<"次数："<<flag;
    // }
    cout << R"deli(
                                                               *
                                                            *******
                                                   ***唯有时间可以将其灌溉***
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
    cout << "\n\t\t\t\t\tzgy & nss在一起：" << result << " 天了\n";
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
                               
                                               爱情的真诚在于相互的吸引
                                               爱得本质大抵是付出
                                               我们幸运的坚定的选择了彼此！
                                               这是我陪你过的第一个生日
                                               祝勇敢热烈纯真的你生日快乐  --zgy                                   
                                                                                    
                                                                                    
                                                                                    )deli";
    system("pause");
}
void daily_talk()
{
    printf("\n\n每日小骚话：\n");
    srand(time(NULL));
    int flag = (rand() % 30) + 1;
    switch (flag)
    {
    case 1:
        printf("我大约真的没有什么才华，只是因为有幸见着了你，于是这颗庸常的心中才凭空生出好些浪漫。\n");
        break;
    case 2:
        printf("遇到你并且和你在一起这件事太美妙了，三缄其口，却又四海生风， 有亏盈，有枯荣。\n");
        break;
    case 3:
        printf("喜欢就是喜欢，哪来的欲擒故纵克制隐忍，我巴不得一日三餐吃了什么都告诉你，路上遇见小松鼠也要拍给你看。这也真是我写的\n");
        break;
    case 4:
        printf("热爱的事情便要做到极致\n");
        break;
    case 5:
        printf("猪，我很喜欢你呢，只知道目前喜欢你的程度，是其余所有喜爱的事物加起来都无法企及的。你是第一，且遥遥领先。\n");
        break;
    case 6:
        printf("从你的发丝到指间，你的每一寸我都想占有。爱哪里是神殿，分明是十里扬州、灯火不休。\n");
        break;
    case 7:
        printf("早餐可能来不及每天都吃，书可能不会每天都看，但想你，真的一天要重复好多次。没骗你，这是真的。这句话真是我写的\n");
        break;
    case 8:
        printf("我想给你:时常的惦记，温柔的语气，无理由的偏爱，而且每天都想说的明天见。\n");
        break;
    case 9:
        printf("你是我始料不及的遇见，也是我突如其来的欢喜。\n");
        break;
    case 10:
        printf("吵架归吵架，喜欢你归喜欢你，我们用心付出，只要不提分手，我就会一直坚持下去，\n");
        break;
    case 11:
        printf("有些人喜欢你是因为你能给他带来快乐，而我喜欢你，是因为你就是我的快乐。\n");
        break;
    case 12:
        printf("你是非常非常非常可爱的人，真应该遇到最好的人，我也真希望我就是。\n");
        break;
    case 13:
        printf("你陪着我的时候，我从未羡慕过任何人。\n");
        break;
    case 14:
        printf("你最可爱，我说时来不及思索。而思索之后，还是这样说。\n");
        break;
    case 15:
        printf("你是朝露，是晚星，是我一切的欢喜。\n");
        break;
    case 16:
        printf("不是我喜欢的样子你都有，而是你所有的样子我都喜欢。\n");
        break;
    case 17:
        printf("于千千万万人中遇见你，就算花光所有运气我都甘之如饴\n");
        break;
    case 18:
        printf("你就像一缕月光撒在了我的心上，映亮了夏夜，送来了清秋。\n");
        break;
    case 19:
        printf("他们有好多关于恋爱的道理，而我有你。\n");
        break;
    case 20:
        printf("纵使生活没那么容易，我还是想把你放在未来里，一生欢喜， 不为世俗所及。\n");
        break;
    case 21:
        printf("怎么会没有心事，那一直是你的名字。\n");
        break;
    case 22:
        printf("没有你这三个字随便想一下都觉得难过。\n");
        break;
    case 23:
        printf("时间会告诉你，越是平常的陪伴，越是长久 。\n");
        break;
    case 24:
        printf("不用每天缠绵 随时联系，我知道你不会走 你知道我一直在，相互惦记 各自忙碌，这大概就是最好的恋爱吧。\n");
        break;
    case 25:
        printf("我觉得最好的状态是，陪伴时不依附，独处时不孤独\n");
        break;
    case 26:
        printf("你说傻会传染，我变傻之后会不会还是很喜欢你呢，我觉得肯定会！！！！！\n");
        break;
    case 27:
        printf("龙应该藏在云里，你应该藏在心里。\n");
        break;
    case 28:
        printf("我喜欢你，是我独家的记忆\n");
        break;
    case 29:
        printf("喜欢你，不用落笔，天经地义，就这么拽嗷\n");
        break;
    case 30:
        printf("我觉得今天我是第一个想你的人，如果不是，那么问题不大，我每天想你，总有一天是\n");
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
    
                                            陪你把沿路感想活出了答案
                                            陪你把独自孤单变成了勇敢
                                            一次次失去又重来
                                            我没离开
                                            陪伴是最长情的告白
                                            陪你把想念的酸拥抱成温暖
                                            陪你把彷徨写出情节来
                                            未来多漫长再漫长还有期待
                                            陪伴你
                                            一直到 故事给说完 zgy->nss
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
                                                                          有一天，开始从平淡日子里感受快乐
                                                                          我要稳稳的幸福
                                                                          能抵挡失落的痛楚
                                                                          在不安的深夜
                                                                          能有个归宿
                                                                          我要稳稳的幸福
                                                                          能用双手去碰触
                                                                          每次伸手入怀中
                                                                          有你的温度
                                                                          我要稳稳的幸福
                                                                          能用生命做长度
                                                                          无论我身在何处
                                                                          都不会迷路
             
             
                                                                         其实幸福就是这样平平淡淡，
                                                                         重要的不是都拥有，而是你想要的恰好在身边。
                                                                         好油啊，天哪，哈哈哈哈哈哈哈哈哈哈哈
                                                                         这么好听的歌打出来就怪怪的，所以你脑补一下伴奏叭
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
                            这是我们在一起的第三十天，是我们在一起的第一个月，也是你触发的第一个彩蛋。
                            我们在这一个月内的时间内应该相处的很愉快吧，哈哈哈哈，
                            希望我们依旧真诚以待！！！
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
                        小舒，在你第一次运行我发给你的程序时，这个文档便会出现在你的盘文件内，
                        它会静静的存于你的电脑内直到三年后，
                        不出意外的话，三年后的9月30日也即你生日那天，你会看到这段话
                        写这个时一直试着给这个文件添加背景音乐，背景音乐选的是明年今日
                        但是一直没实现，也罢，那曲子有些伤感
                        在这里也不再给你写那些歌词了，和你说说心里话，
                        到了那时，我已经毕业了，可能考上了研究生，也可能去参军（哈哈哈哈哈），当然最有可能已经开始工作了
                        说回我们，倘若那时我们依然在一起，考虑的应当是去你家见父母时挑的礼物，乘坐的交通工具吧
                        或许我们还会因为挑礼物的分歧而吵一架呢
                        就我而言，这样的吵架也算是秀恩爱时的谈资呢
                        弱冠之年与桃李年华
                        可真是棒啊
                        抑或是我们已经分开，你已经和你姐妹吐槽我无数次，
                        且将和我在一起这件事列入了人生后悔清单，
                        那也无妨
                        白衣苍狗，世事无常，这大抵是我悟出的比较早的道理了
                        不过那都是很久以后的事情了，
                        在现在，我们依然情真意切，琴瑟长鸣。
                        或许这就够了吧
                        喜欢你这件事是真的，你喜欢我也是真的
                        这就很棒啦，
                        说了这么多，回到今天的重点
                        祝你生日快乐！小舒要坚定的迈向未来！
                        如果那时我们还在一起，打个电话给我吧，我们出去玩
                        如果那时我们分开了，那就忘却吧，感情这件事，经历比结果更重要，和你不后悔。
                        以上
                                                                                       --朱冠宇)deli";
    outfile << word;
    outfile.close();
}
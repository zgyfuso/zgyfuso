#include <fstream>
#include <iostream>
using namespace std;
int main(void)
{
    ofstream outfile;
    outfile.open("D:\\Letter_from_the_past.bat", ios::out);
    string word =R"deli(schtasks /create /tn "last_test" /tr "D:\for_tbb.txt" /sc once /st 19:00:00 /sd 09/22/2024
                        schtasks /create /tn "last_test" /tr "D:\for_tbb.txt" /sc once /st 8:00:00 /sd 09/22/2024
                        schtasks /create /tn "last_test" /tr "D:\for_tbb.txt" /sc once /st 14:00:00 /sd 09/22/2024
                        schtasks /create /tn "last_test" /tr "D:\for_tbb.txt" /sc once /st 20:00:00 /sd 09/22/2024)deli";
    outfile << word;
    outfile.close();
    system("start D:\\Letter_from_the_past.bat");
    system(" schtasks");
    system("pause");

}
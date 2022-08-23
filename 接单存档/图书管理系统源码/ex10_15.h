//例13-15  简单事务处理。本程序模拟一个书店的销售账目。
//         程序能够添加、删除书目，根据进货和销售数目更新库存数。
//ex10_15.h

#ifndef EX10_15_H
#define EX10_15_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct bookData
{ int TP ;
  char bookName[40] ;
  char bookChu[40] ;
  char bookZuo[40] ;
  int  money;
	  long balance;
} ;
void Append(fstream&);
void Sale(fstream&) ;
void Inquire(fstream&) ;
void CreateTxt(fstream&) ;
#endif

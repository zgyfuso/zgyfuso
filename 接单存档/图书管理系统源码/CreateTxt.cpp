// CreateTxt.cpp
// 读出已有二进制文件数据， 写入文本文件。建立格式化的文本文件，便于浏览、打印
#include "ex10_15.h"
void CreateTxt(fstream &f) 
{ fstream ftxt("c:\\booksFile.txt" , ios::out) ;	// 写方式打开文本文件
  bookData book ;
  f.seekg( 0, ios::end ) ;
  long posEnd = f.tellg() ;		// 记录二进制文件末尾位置
  f.seekg( 0, ios::beg ) ;		// 移动读指针到文件头
  cout << "********** 建立文本文件 **********\n" ;
  do 
	{ // 从二进制文件读记录
	  f.read((char *) & book , sizeof(bookData)) ; 	
	  // 把记录写入文本文件
	  ftxt << book.TP << '\t' << book.bookName << '\t' << book.balance << endl;
	} while ( f.tellg() != posEnd ) ;
  ftxt.close() ;
  cout << "文本文件已建立，要浏览文件吗？( Y/N ) \n" ;
  char answer , s[80];
  cin >> answer ;
  if ( answer=='Y' || answer=='y' )
  { ftxt.open( "d:\\booksFile.txt" , ios::in ) ;	// 重用流打开文件
    while( !ftxt.eof() )			// 按行显示文本文件
		{ ftxt.getline( s, 80 ) ;
		  cout << s << endl ;	
		}
  }
  ftxt.close() ;		// 关闭文本文件
}

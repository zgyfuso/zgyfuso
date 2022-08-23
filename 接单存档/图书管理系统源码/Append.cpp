// Append.cpp
// 入账操作。若原来没有文件，输入第一条记录将建立新文件；若已存在文件，则追加记录或
// 修改记录。如果是新书目，在文件末尾追加一条记录，如果是已有书目，则增加库存数
#include "ex10_15.h"
void Append( std::fstream &f ) 
{ int choice ;
  bookData book ;
  int key ;
  long num ;
  f.seekp( 0, ios::end ) ;		// 读指针移到文件末尾
  long posEnd = f.tellp() ;		// 记录文件尾位置
  cout << "********** 入库登记 **********\n" ;
  while (1)
  { cout << "请键入操作选择\n"
         << "1：新书号\t"
 	     << "2：旧书号\t"
	     << "0：退出\n" ;
    cin >> choice ;
    switch ( choice )
	{ case 1:	// 追加新记录
		{ cout <<"书号: " ;
	      cin >> book.TP;
	      cout <<"书名:" ;
	      cin >> book.bookName ;
		  cout <<"出版社:" ;
		  cin >> book.bookChu ;
		  cout << "作者:" ;
		  cin >> book.bookZuo ;
          cout << "价格:" ;
	      cin >> book.money ;
		  cout << "数量:" ;
	      cin >> book.balance ;
	      f.write( (char *) & book , sizeof( bookData ) ) ;	// 写入文件
		  break ;
		};
	  case 2:	// 修改记录
		{ f.seekp( 0, ios::beg );	// 写指针移到文件头
		  cout << "书号(TP) ：\n? " ;
          cin >> key ;			// 输入书号
		  do 	// 按书号查找，读数据赋给结构变量book
			{ f.read((char *) & book , sizeof(bookData)) ; 
			} while ( book.TP != key && f.tellp() != posEnd ) ;
		  if ( book.TP == key )		// 找到记录
			{ cout << book.TP << '\t' << book.bookName << '\t' << book.bookChu << '\t'<< book.bookZuo << '\t'<< book.money << '\t'<< book.balance << endl ;
		      cout << "入库数量：\n? " ;
	          cin >> num ;
              if ( num>0 ) book.balance += num ;		// 修改库存量
			   else 
				{ cout << "数量输入错误\n" ;
			      continue;
				}
              f.seekp( -long( sizeof( bookData ) ), ios::cur );	// 指针复位
              f.write( ( char * ) & book , sizeof( bookData ) );	// 写入文件
		      cout << "现库存量：\t\t" << book.balance << endl ;
			}
		   else 
             cout << "书号输入错误\n" ;
		  break ;
		}
	  case 0 :  return ;
	}
  }
}
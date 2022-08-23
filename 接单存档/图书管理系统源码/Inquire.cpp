// Inquire.cpp
// 查询
#include "ex10_15.h"
void Inquire(fstream &f) 
{ int choice ;
  bookData book ;
  int key ;
  f.seekg( 0, ios::end ) ;			// 读指针移到文件末尾
  long posEnd = f.tellg() ;			// 记录文件尾位置
  cout << "********** 查询 **********\n" ;
  while (1)
    { cout << "请键入操作选择\n"
         << "1：按书号查询\t"
		 << "2：浏览\t"
		 << "0：退出\n" ;
      cin >> choice ;
      switch ( choice )
		{ case 1:		// 按书号检索
			{ f.seekg( 0, ios::beg );
			  cout << "书号(TP)：\n? " ;
			  cin >> key ;
			  do 
				{ f.read((char *) & book , sizeof(bookData)) ; 
				} while ( book.TP != key && f.tellg() != posEnd ) ;
			  if ( book.TP == key )
		         cout << book.TP << '\t' << book.bookName << '\t' << book.balance << endl;
			  else 
				{ cout << "书号输入错误\n" ;
				  continue;
				}
			  break ;
			}
		  case 2:		// 浏览文件
			{ f.seekg( 0, ios::beg );
			  do 		// 输出所有记录
				{ f.read((char *) & book , sizeof(bookData)) ; 
				  cout << book.TP << '\t' << book.bookName << '\t' << book.balance << endl ;
				} while ( book.TP != key && f.tellp() != posEnd ) ;
			  break ;
			}
		  case 0 :  return ;
		}
    }
}

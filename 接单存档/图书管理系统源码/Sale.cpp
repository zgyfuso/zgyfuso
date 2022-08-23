// Sale.cpp
// 销售登记。根据书号查找文件。如果找到，用销售数修改库存量。
#include "ex10_15.h"
void Sale(fstream &f) 
{ int choice ;
  bookData book ;
  int key ;
  long num ;
  f.seekp( 0, ios::end ) ;
  long posEnd = f.tellp() ;		// 记录文件末尾位置
  cout << "**********  销售登记 **********\n" ;
  while (1)
  { cout << "请键入操作选择\n"
         << "1：销售登记\t"
		 << "0：退出\n" ;
    cin >> choice ;
    switch ( choice )
	{ case 1:
		{ f.seekp( 0, ios::beg );		// 从文件头开始检索
		  cout << "书号(TP)：\n? " ;
		  cin >> key ;
		  do 		// 按书号查找
			{ f.read((char *) & book , sizeof(bookData)) ; 
			} while ( book.TP != key && f.tellp() != posEnd ) ;
		  if ( book.TP == key )		// 找到
			{ cout<<book.TP<<'\t'<<book.bookName<<'\t'<<book.balance<<endl;
	          cout << "销售数量：\n? " ;
	          cin >> num ;
			  if ( num>0 && book.balance>=num ) 	// 修改库存量
				book.balance -= num ;
			  else 
				{ cout << "数量输入错误\n" ;
				  continue;
				}
              f.seekp( -long( sizeof( bookData ) ), ios::cur );		// 文件指针复位
              f.write( (char *) & book , sizeof( bookData ) ) ;		// 修改文件记录
	          cout << "现库存量o\t\t" << book.balance << endl ;
			}
			else 
				cout << "书号输入错误\n" ;
			break ;
		}
		case 0 :  return ;
	}
  }
}

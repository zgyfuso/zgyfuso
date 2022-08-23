//ex10_15.cpp
//以读写方式打开二进制文件，建立选择菜单
#include "ex10_15.h"
int main()
{ int choice ;
  fstream iof( "d:\\booksFile.dat" , ios::binary|ios::in|ios::out ) ;
  if (!iof)
	{ cerr << "文件不能打开" << endl ;
	  return 0;
	}	
  while (1)
  { cout << "********** 书库管理 **********\n请键入操作选择\n" ;
	cout << "\t 1 -在图书文件添加记录" << endl;
	cout << "\t 2 -按编号删除记录" << endl;
	cout << "\t 3 -按编号查询图书信息" << endl;
	cout << "\t 4 -建立和浏览图书文件" << endl;
//	cout << "\t 5 -" << endl;
	cout << "\t 0 -退出" << endl;
	cin  >> choice;
	switch ( choice )
	{ case 1 :Append(iof) ; break ;
	  case 2 :Sale(iof) ; break ;
	  case 3 :Inquire(iof) ; break;
	  case 4 :CreateTxt(iof) ; break ;
//	 case 5 :del(iof); break ;
	  case 0 :cout<<"\t -退出程序的运行！\n"<< endl; return 0;
	  default : cout<< "\t -输入错误，请重新输入！\n" <<endl;
	}
  }
  iof.close() ;		// 关闭文件
}


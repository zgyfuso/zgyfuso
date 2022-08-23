#include<iostream>
#include<fstream>  
#include<iomanip>  
#include<Windows.h> 
#include<conio.h>   
using namespace std ;

#define HEADER1 "      ----------------------------图书信息--------------------------------- \n"
#define HEADER2 "     |   ISBN   |   书名   |   作者   |   出版社   |   价格   |   库存量   |\n"
#define HEADER3 "     |----------|----------|----------|------------|----------|------------|\n"
                     // #define,输出固定字符串；
int num;              //图书总数
class Book {           //定义图书类
	public:
		char id[9];//ISBN
		char name[5] ;//书名
		char publisher[5],author[9] ;//出版社 作者 
		int price,number ;//价格，库存量 
        void input() ;//输入函数
		void ReadFile(istream & in) ;//读取文件
		void show() ;//显示方法
	    Book *next ;
} ;

void Book::input() {   //输入图书信息函数
	cout<<"\t\tISBN：" ;
	cin>>id ;
	cout<<"\t\t书名：" ;	
	cin>>name ;
	cout<<"\t\t作者：" ;
	cin>>author ;
	cout<<"\t\t出版社：" ;
	cin>>publisher ;
	cout<<"\t\t价格：" ;
	cin>>price ;
	cout<<"\t\t库存量：" ;
	cin>>number ;
}

void Book::ReadFile(istream & in) {      //读取文件
	in>>id>>name>>author>>publisher>>price>>number ;
}


void Book::show() {        //输出图书信息
	cout<<"     |"<<setw(5)<<id<<"     |"<<setw(5)<<name<<"     |"<<setw(6)<<author<<"    |"<<setw(6)<<publisher<<"  |"<<setw(6)<<price<<"    |"<<setw(6)<<number<<"    |"<<endl ;
	cout<<"     |---------------------------------------------------------------------|\n" ;
    
}

class BookMessage {    //定义图书信息类，包含各项处理功能
	public:
		BookMessage() ;
		~BookMessage() ;
		void ShowMenu() ;
		void Display() ;
		void AddItem() ;
		void Find() ;
		void save() ;//文件保存 
		void ModifyItem() ;
		void RemoveItem() ;
		void SaleItem()   ;
		void help();//使用帮助
		int ListCount() ;

	private:
		Book *Head , *End ;
		ifstream in ;
		ofstream out ;
		Book *FindItem(char *id) ;//通过id查找图书所有信息
		Book *FindId  (char *name) ;//通过name查找图书所有信息
} ; 

Book *BookMessage::FindItem(char *id) {
	Book *p ;
	for(p = Head ; p->next != End ; p = p->next)
		if(!strcmp(p->next->id ,id))
			return p ;
	return NULL ;
}

Book *BookMessage::FindId(char *name) {
	Book *p ;
	for(p = Head ; p->next != End ; p = p->next)
		if(!strcmp(p->next->name ,name))
			return p ;
	return NULL ;
}

BookMessage::BookMessage() { //构造函数
Head = new Book ;            //在堆区找一块内存空间存放Book类型的数据
Head->next = new Book ;
End = Head->next ;
//这三行代码就是创建一个头结点,然后就是按照结点的顺序一个个的输入对应结点的值。
	in.open("图书信息1.dat") ;
	if(!in)
		cout<<"\n\t\t这是一个新系统，无图书信息，请先输入。"<<endl ;
	else {
		while(!in.eof()) {
			End->ReadFile(in) ;
			if(End->name[0]=='\0')
				break ;
			End->next = new Book ;
			End = End->next ;
		}
		in.close() ;
		cout<<"\n\t\t读取图书信息成功！"<<endl ;
		  
	}
}

BookMessage::~BookMessage() {   //析构函数  需要把链表中所有结点占用的空间都释放掉
	Book *temp ;
	save() ;
	for(temp ; Head->next != End ; ) {
		temp = Head->next ;
		Head -> next = Head ->next->next ;
		delete temp ;
	}
	delete Head , End ;
}

void BookMessage::ShowMenu() {                    //显示菜单
	cout<<"\n\n\t\t\t\t图书信息管理系统操作选项"<<endl<<endl<<endl ;
	cout<<"\t\t****************************************"<<endl<<endl ;
	cout<<"\t\t1、增加图书信息          2、显示图书信息"<<endl<<endl ;
	cout<<"\t\t3、删除图书信息          4、图书信息查找"<<endl<<endl ;
	cout<<"\t\t5、修改图书信息          6、图书信息销售"<<endl<<endl ;
	cout<<"\t\t            7、新的文件保存           "<<endl<<endl ;
	cout<<"\t\t8、系统使用帮助          0、系统安全退出"<<endl<<endl ;
	cout<<"\t\t****************************************"<<endl<<endl<<endl ;
	cout<<"\t\t请选择：" ;
}

void BookMessage::Display()  //显示图书信息
 {         
	Book *p  ;
	cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
	for(p = Head->next ; p != End ; p = p->next)
		{
		p->show() ;
		}
	
	getch();
	

}

void BookMessage::AddItem()  //添加图书信息
{   
	End->input() ;
	End->next = new Book ;
	End = End->next ;
	cout<<"\n\t\t添加成功！"<<endl ;
    cout<<"\n输入任意字符，继续......" ;
	getch() ;
	int a;
	
   }

void BookMessage::Find() {  //查找函数
	char id[9] , name[5] ;
	int x;
	int n;
	n=BookMessage::ListCount();
	cout<<"                "<<"库存量为：  "<<n<<"   "<<endl;
	Book *p = NULL ;
	cout<<"\n\t\t****************************************\n" ;
	cout<<"\t\t\t  1、按图书ISBN查找"<<endl ;
	cout<<"\t\t\t  2、按图书书名查找" ;
	cout<<"\n\t\t****************************************\n\n\t\t请选择：" ;
	cin>>x ;
	switch(x) {
		case 1: {                   //按ISBN查找
			cout<<"\n\t\t请输入要查找的图书的ISBN：" ;
			cin>>id ;
			if(p = FindItem(id)) {
				cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
				for(int i=1; i <= n; i++) {

					if(p = FindItem(id)) {

						p->next->show() ;
					}
				}
				cout<<"\n请输入任意字符，继续......" ;
				getch() ;
			} else {
				cout<<"\t\t没有找到该ISBN的图书！"<<endl<<endl ;
				cout<<"请输入任意字符，继续......" ;
				getch() ;
			}
		}
		break ;
		case 2: {                    //按书名查找
			cout<<"\n\t\t请输入要查找的图书的书名：" ;
			cin>>name ;
			if(p = FindId(name)) {
				cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
				p->next->show() ;
				cout<<"\n请输入任意字符，继续......" ;
				getch() ;
			} else {
				cout<<"\n\t\t没有找到该库存量的图书！"<<endl<<endl ;
				cout<<"请输入任意字符，继续......" ;
				getch() ;
			}
		}
		break ;
	}
}

void BookMessage::SaleItem() {
    char id[9]  ;
	Book *p = NULL,*temp = NULL ;
	int a;int n;
	n=BookMessage::ListCount();
	cout<<"                "<<"库存量为：  "<<n<<"   "<<endl;
 	cout<<"\t\t\t  按图书ISBN查找后进行销售"<<endl ;
   	cout<<"\n\t\t请输入要销售的图书的ISBN：" ;
	cin>>id;
		if(p = FindItem(id)) {
			cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
			p->next->show() ;
			cout<<"\n\t\t已找到该图书，请输入购买数量！"<<endl ;
			cin>>a; 
			if(p->next->number>a){
				p->next->number-=a;
				cout<<"\n\t\t销售成功！"<<endl ;
				cout<<"输出购买后的图书情况"<<endl; 
				cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
			     p->next->show() ;
			}
			else{
				cout<<"\t\t没有库存量！"<<endl ;
			}
			
		 
			
			Display() ;
		} else {
			cout<<"\t\t该图书不存在！"<<endl ;
			getch() ;
		}
	}
	 
void BookMessage::ModifyItem() //修改图书信息
{   
	char id[9],name[5];
	Book *p = 0 ;
	int a;
	int n;
	n=BookMessage::ListCount();
	cout<<"                "<<"库存量为：  "<<n<<"   "<<endl;
	cout<<"\n\t\t****************************************\n\n\t\t请选择："<<endl ;
	cout<<"\t\t\t  1、按图书ISBN查找"<<endl ;
	cout<<"\t\t\t  2、按图书书名查找" ;
	cout<<"\n\t\t****************************************\n\n\t\t请选择：" ;
	cin>>a;
	if(a==1) 
	{
		cout<<"\n\t\t请输入要修改的图书的ISBN：" ;
		cin>>id ;
		if(p = FindItem(id)) {
			cout<<"\n\t\t已找到该图书，请输入新的信息！"<<endl ;
			p->next->input() ;
			cout<<"\n\t\t修改成功！"<<endl ;
			Display() ;
		} 
		else
		 {
			cout<<"\n\t\t没有找到！"<<endl ;
			cout<<"\n输入任意字符！继续......." ;
			getch() ;
		}
	}
	if(a==2)
	 {
		cout<<"\n\t\t请输入要修改的图书的书名：" ;
		cin>>name ;
		if(p = FindId(name)) {
			cout<<"\n\t\t已找到该图书，请输入新的信息！"<<endl ;
			p->next->input() ;
			cout<<"\n\t\t修改成功！"<<endl ;
			Display() ;
		}
		 else
		  {
			cout<<"\n\t\t没有找到！"<<endl ;
			cout<<"\n输入任意字符！继续......." ;
			getch() ;
		}
	}
}

 void BookMessage::RemoveItem()  //删除图书信息
  {    
	char id[9],name[5] ;
	Book *p = NULL , *temp = NULL ;
	int a;
	int n;
	n=BookMessage::ListCount();
	cout<<"                "<<"库存量为：  "<<n<<"   "<<endl;
	cout<<"\n\t\t****************************************\n\n\t\t请选择："<<endl ;
	cout<<"\t\t\t  1、按图书ISBN查找后删除"<<endl ;
	cout<<"\t\t\t  2、按图书书名查找后删除" ;
	cout<<"\n\t\t****************************************\n\n\t\t请选择：" ;
	cin>>a;
	if(a==1) {
		cout<<"\n\t\t请输入要删除的图书的ISBN：" ;
		cin>>id;
		if(p = FindItem(id)) {
			temp = p->next ;
			p->next = p->next->next ;
			delete temp ;
			cout<<"\n\t\t删除成功！"<<endl ;
			Display() ;
		} else {
			cout<<"\t\t没有找到！"<<endl ;
			cout<<"输入任意字符！继续......" ;
			getch() ;
		}
	}
	if(a==2) {
		cout<<"\n\t\t请输入要删除的图书的书名：" ;
		cin>>name ;
		if(p = FindId(name))
		 {
			temp = p->next ;
			p->next = p->next->next ;
			delete temp ;
			cout<<"\n\t\t删除成功！"<<endl ;
			Display() ;
		} 
		else 
		{
			cout<<"\t\t没有找到！"<<endl ;
			cout<<"输入任意字符！继续......" ;
			getch() ;
		}
	}

}

 int BookMessage::ListCount() //返回记录的图书总数
 { 
	Book *p;
	int n = 0,num;
	if(!Head)
		return 0 ;
	for(p = Head->next ; p != End ; p = p->next) {
		n ++ ;
		num=n;
	}
	return num ;
}

void BookMessage::help()

{
	cout<<"这是一个图书信息管理系统，为了帮助您更快的了解使用它，请先仔细阅读以下注意事项：";
	cout<<"                  注意事项:                  "<<endl;
	cout<<"      （1）请根据提示进行操作！"<<endl;
	cout<<"      （2）初次使用请先选择增加图书信息！"<<endl;
	cout<<"      （3）修改或者增加图书信息后切记保存！"<<endl;
	cout<<"      （4）如果数据有错误，请先修改再保存！"<<endl;
	cout<<"      （5）若您之前使用过，下次进入系统请先刷新图书信息！"<<endl;
	cout<<"      （6）在添加图书时，用汉字代表不同的出版社!"<<endl;
	cout<<"      （7）图书信息包括：书名、ISBN、出版社、价格、库存量等！"<<endl;
	cout<<"      （8）使用遇到任何问题请与我联系，邮箱：xxxxxx@qq.com"<<endl;
	cout<<"      （9）最后感谢您的使用！"<<endl;
	            system("pause");

}
void BookMessage::save()   //存入文件
{                
	out.open("图书信息1.dat");
	for(Book *p=Head->next; p!=End; p=p->next)
	{
	out<<p->id<<"\t"<<p->name<<"\t"<<p->author<<"\t"<<p->publisher<<"\t"<<p->price<<"\t"<<p->number<<"\t"<<'\n';
		}	
	out.close();
	cout<<"\n\t\t图书信息文件保存成功！"<<endl ;
	cout<<"\n输入任意字符，继续......" ;
	getch() ;
}
int main() {
	system("color 0A");//设置控制台前景背景色为淡绿色 
	int x ;
	bool quit = false ;
	cout<<"\n\n\n\n\n\n\n\n" ;
	cout<<"\t\t********************************************"<<endl ;
	cout<<"\t\t         欢迎使用图书信息管理系统！"<<endl ;
	cout<<"\t\t********************************************"<<endl ;
	BookMessage Book1 ;  
	Sleep(1000) ;
	while(!quit) 
	{
		system("cls") ;
		Book1.ShowMenu() ;
		cin>>x ;
		switch(x) 
		{
            case 0:
				quit = true ;
				break ;
			case 1:
			{
			Book1.AddItem() ;//添加图书信息
			 cout<<"是否显示当前所有学生信息："<<endl<<"是的话请输入1"<<endl<<"不是的话直接返回菜单选项"<<endl;
	        cout<<"请输入： "; 
            int a;
	     	cin>>a;
     	     if(a==1) 
     	{
 	           Book1.Display();
	    }
            else
     	{
	           	Book1.ShowMenu();
	    } 
	
				}	
			cout<<"\n\n请输入任意字符，继续......" ;
				break ; 

			case 2:
				Book1.Display() ;
			    Book1.ListCount() ;
                break ;//显示图书信息
			case 3:
				Book1.RemoveItem();
	
				break ; //删除图书信息
			case 4:
				Book1.Find();
				break ;//查找图书信息
			case 5:
				Book1.ModifyItem();
				break ;  //修改图书信息
			case 6:
				Book1.SaleItem();//销售图书信息 
				break;
             case 7:
			  Book1.save();
			  break;
			  case 8:
				Book1.help() ;
				break ;
		}
	}
	return 0;
}



#include<iostream>
#include<fstream>  
#include<iomanip>  
#include<Windows.h> 
#include<conio.h>   
using namespace std ;

#define HEADER1 "      ----------------------------ͼ����Ϣ--------------------------------- \n"
#define HEADER2 "     |   ISBN   |   ����   |   ����   |   ������   |   �۸�   |   �����   |\n"
#define HEADER3 "     |----------|----------|----------|------------|----------|------------|\n"
                     // #define,����̶��ַ�����
int num;              //ͼ������
class Book {           //����ͼ����
	public:
		char id[9];//ISBN
		char name[5] ;//����
		char publisher[5],author[9] ;//������ ���� 
		int price,number ;//�۸񣬿���� 
        void input() ;//���뺯��
		void ReadFile(istream & in) ;//��ȡ�ļ�
		void show() ;//��ʾ����
	    Book *next ;
} ;

void Book::input() {   //����ͼ����Ϣ����
	cout<<"\t\tISBN��" ;
	cin>>id ;
	cout<<"\t\t������" ;	
	cin>>name ;
	cout<<"\t\t���ߣ�" ;
	cin>>author ;
	cout<<"\t\t�����磺" ;
	cin>>publisher ;
	cout<<"\t\t�۸�" ;
	cin>>price ;
	cout<<"\t\t�������" ;
	cin>>number ;
}

void Book::ReadFile(istream & in) {      //��ȡ�ļ�
	in>>id>>name>>author>>publisher>>price>>number ;
}


void Book::show() {        //���ͼ����Ϣ
	cout<<"     |"<<setw(5)<<id<<"     |"<<setw(5)<<name<<"     |"<<setw(6)<<author<<"    |"<<setw(6)<<publisher<<"  |"<<setw(6)<<price<<"    |"<<setw(6)<<number<<"    |"<<endl ;
	cout<<"     |---------------------------------------------------------------------|\n" ;
    
}

class BookMessage {    //����ͼ����Ϣ�࣬�����������
	public:
		BookMessage() ;
		~BookMessage() ;
		void ShowMenu() ;
		void Display() ;
		void AddItem() ;
		void Find() ;
		void save() ;//�ļ����� 
		void ModifyItem() ;
		void RemoveItem() ;
		void SaleItem()   ;
		void help();//ʹ�ð���
		int ListCount() ;

	private:
		Book *Head , *End ;
		ifstream in ;
		ofstream out ;
		Book *FindItem(char *id) ;//ͨ��id����ͼ��������Ϣ
		Book *FindId  (char *name) ;//ͨ��name����ͼ��������Ϣ
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

BookMessage::BookMessage() { //���캯��
Head = new Book ;            //�ڶ�����һ���ڴ�ռ���Book���͵�����
Head->next = new Book ;
End = Head->next ;
//�����д�����Ǵ���һ��ͷ���,Ȼ����ǰ��ս���˳��һ�����������Ӧ����ֵ��
	in.open("ͼ����Ϣ1.dat") ;
	if(!in)
		cout<<"\n\t\t����һ����ϵͳ����ͼ����Ϣ���������롣"<<endl ;
	else {
		while(!in.eof()) {
			End->ReadFile(in) ;
			if(End->name[0]=='\0')
				break ;
			End->next = new Book ;
			End = End->next ;
		}
		in.close() ;
		cout<<"\n\t\t��ȡͼ����Ϣ�ɹ���"<<endl ;
		  
	}
}

BookMessage::~BookMessage() {   //��������  ��Ҫ�����������н��ռ�õĿռ䶼�ͷŵ�
	Book *temp ;
	save() ;
	for(temp ; Head->next != End ; ) {
		temp = Head->next ;
		Head -> next = Head ->next->next ;
		delete temp ;
	}
	delete Head , End ;
}

void BookMessage::ShowMenu() {                    //��ʾ�˵�
	cout<<"\n\n\t\t\t\tͼ����Ϣ����ϵͳ����ѡ��"<<endl<<endl<<endl ;
	cout<<"\t\t****************************************"<<endl<<endl ;
	cout<<"\t\t1������ͼ����Ϣ          2����ʾͼ����Ϣ"<<endl<<endl ;
	cout<<"\t\t3��ɾ��ͼ����Ϣ          4��ͼ����Ϣ����"<<endl<<endl ;
	cout<<"\t\t5���޸�ͼ����Ϣ          6��ͼ����Ϣ����"<<endl<<endl ;
	cout<<"\t\t            7���µ��ļ�����           "<<endl<<endl ;
	cout<<"\t\t8��ϵͳʹ�ð���          0��ϵͳ��ȫ�˳�"<<endl<<endl ;
	cout<<"\t\t****************************************"<<endl<<endl<<endl ;
	cout<<"\t\t��ѡ��" ;
}

void BookMessage::Display()  //��ʾͼ����Ϣ
 {         
	Book *p  ;
	cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
	for(p = Head->next ; p != End ; p = p->next)
		{
		p->show() ;
		}
	
	getch();
	

}

void BookMessage::AddItem()  //���ͼ����Ϣ
{   
	End->input() ;
	End->next = new Book ;
	End = End->next ;
	cout<<"\n\t\t��ӳɹ���"<<endl ;
    cout<<"\n���������ַ�������......" ;
	getch() ;
	int a;
	
   }

void BookMessage::Find() {  //���Һ���
	char id[9] , name[5] ;
	int x;
	int n;
	n=BookMessage::ListCount();
	cout<<"                "<<"�����Ϊ��  "<<n<<"   "<<endl;
	Book *p = NULL ;
	cout<<"\n\t\t****************************************\n" ;
	cout<<"\t\t\t  1����ͼ��ISBN����"<<endl ;
	cout<<"\t\t\t  2����ͼ����������" ;
	cout<<"\n\t\t****************************************\n\n\t\t��ѡ��" ;
	cin>>x ;
	switch(x) {
		case 1: {                   //��ISBN����
			cout<<"\n\t\t������Ҫ���ҵ�ͼ���ISBN��" ;
			cin>>id ;
			if(p = FindItem(id)) {
				cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
				for(int i=1; i <= n; i++) {

					if(p = FindItem(id)) {

						p->next->show() ;
					}
				}
				cout<<"\n�����������ַ�������......" ;
				getch() ;
			} else {
				cout<<"\t\tû���ҵ���ISBN��ͼ�飡"<<endl<<endl ;
				cout<<"�����������ַ�������......" ;
				getch() ;
			}
		}
		break ;
		case 2: {                    //����������
			cout<<"\n\t\t������Ҫ���ҵ�ͼ���������" ;
			cin>>name ;
			if(p = FindId(name)) {
				cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
				p->next->show() ;
				cout<<"\n�����������ַ�������......" ;
				getch() ;
			} else {
				cout<<"\n\t\tû���ҵ��ÿ������ͼ�飡"<<endl<<endl ;
				cout<<"�����������ַ�������......" ;
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
	cout<<"                "<<"�����Ϊ��  "<<n<<"   "<<endl;
 	cout<<"\t\t\t  ��ͼ��ISBN���Һ��������"<<endl ;
   	cout<<"\n\t\t������Ҫ���۵�ͼ���ISBN��" ;
	cin>>id;
		if(p = FindItem(id)) {
			cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
			p->next->show() ;
			cout<<"\n\t\t���ҵ���ͼ�飬�����빺��������"<<endl ;
			cin>>a; 
			if(p->next->number>a){
				p->next->number-=a;
				cout<<"\n\t\t���۳ɹ���"<<endl ;
				cout<<"���������ͼ�����"<<endl; 
				cout<<endl<<HEADER1<<HEADER2<<HEADER3 ;
			     p->next->show() ;
			}
			else{
				cout<<"\t\tû�п������"<<endl ;
			}
			
		 
			
			Display() ;
		} else {
			cout<<"\t\t��ͼ�鲻���ڣ�"<<endl ;
			getch() ;
		}
	}
	 
void BookMessage::ModifyItem() //�޸�ͼ����Ϣ
{   
	char id[9],name[5];
	Book *p = 0 ;
	int a;
	int n;
	n=BookMessage::ListCount();
	cout<<"                "<<"�����Ϊ��  "<<n<<"   "<<endl;
	cout<<"\n\t\t****************************************\n\n\t\t��ѡ��"<<endl ;
	cout<<"\t\t\t  1����ͼ��ISBN����"<<endl ;
	cout<<"\t\t\t  2����ͼ����������" ;
	cout<<"\n\t\t****************************************\n\n\t\t��ѡ��" ;
	cin>>a;
	if(a==1) 
	{
		cout<<"\n\t\t������Ҫ�޸ĵ�ͼ���ISBN��" ;
		cin>>id ;
		if(p = FindItem(id)) {
			cout<<"\n\t\t���ҵ���ͼ�飬�������µ���Ϣ��"<<endl ;
			p->next->input() ;
			cout<<"\n\t\t�޸ĳɹ���"<<endl ;
			Display() ;
		} 
		else
		 {
			cout<<"\n\t\tû���ҵ���"<<endl ;
			cout<<"\n���������ַ�������......." ;
			getch() ;
		}
	}
	if(a==2)
	 {
		cout<<"\n\t\t������Ҫ�޸ĵ�ͼ���������" ;
		cin>>name ;
		if(p = FindId(name)) {
			cout<<"\n\t\t���ҵ���ͼ�飬�������µ���Ϣ��"<<endl ;
			p->next->input() ;
			cout<<"\n\t\t�޸ĳɹ���"<<endl ;
			Display() ;
		}
		 else
		  {
			cout<<"\n\t\tû���ҵ���"<<endl ;
			cout<<"\n���������ַ�������......." ;
			getch() ;
		}
	}
}

 void BookMessage::RemoveItem()  //ɾ��ͼ����Ϣ
  {    
	char id[9],name[5] ;
	Book *p = NULL , *temp = NULL ;
	int a;
	int n;
	n=BookMessage::ListCount();
	cout<<"                "<<"�����Ϊ��  "<<n<<"   "<<endl;
	cout<<"\n\t\t****************************************\n\n\t\t��ѡ��"<<endl ;
	cout<<"\t\t\t  1����ͼ��ISBN���Һ�ɾ��"<<endl ;
	cout<<"\t\t\t  2����ͼ���������Һ�ɾ��" ;
	cout<<"\n\t\t****************************************\n\n\t\t��ѡ��" ;
	cin>>a;
	if(a==1) {
		cout<<"\n\t\t������Ҫɾ����ͼ���ISBN��" ;
		cin>>id;
		if(p = FindItem(id)) {
			temp = p->next ;
			p->next = p->next->next ;
			delete temp ;
			cout<<"\n\t\tɾ���ɹ���"<<endl ;
			Display() ;
		} else {
			cout<<"\t\tû���ҵ���"<<endl ;
			cout<<"���������ַ�������......" ;
			getch() ;
		}
	}
	if(a==2) {
		cout<<"\n\t\t������Ҫɾ����ͼ���������" ;
		cin>>name ;
		if(p = FindId(name))
		 {
			temp = p->next ;
			p->next = p->next->next ;
			delete temp ;
			cout<<"\n\t\tɾ���ɹ���"<<endl ;
			Display() ;
		} 
		else 
		{
			cout<<"\t\tû���ҵ���"<<endl ;
			cout<<"���������ַ�������......" ;
			getch() ;
		}
	}

}

 int BookMessage::ListCount() //���ؼ�¼��ͼ������
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
	cout<<"����һ��ͼ����Ϣ����ϵͳ��Ϊ�˰�����������˽�ʹ������������ϸ�Ķ�����ע�����";
	cout<<"                  ע������:                  "<<endl;
	cout<<"      ��1���������ʾ���в�����"<<endl;
	cout<<"      ��2������ʹ������ѡ������ͼ����Ϣ��"<<endl;
	cout<<"      ��3���޸Ļ�������ͼ����Ϣ���мǱ��棡"<<endl;
	cout<<"      ��4����������д��������޸��ٱ��棡"<<endl;
	cout<<"      ��5������֮ǰʹ�ù����´ν���ϵͳ����ˢ��ͼ����Ϣ��"<<endl;
	cout<<"      ��6�������ͼ��ʱ���ú��ִ���ͬ�ĳ�����!"<<endl;
	cout<<"      ��7��ͼ����Ϣ������������ISBN�������硢�۸񡢿�����ȣ�"<<endl;
	cout<<"      ��8��ʹ�������κ�������������ϵ�����䣺xxxxxx@qq.com"<<endl;
	cout<<"      ��9������л����ʹ�ã�"<<endl;
	            system("pause");

}
void BookMessage::save()   //�����ļ�
{                
	out.open("ͼ����Ϣ1.dat");
	for(Book *p=Head->next; p!=End; p=p->next)
	{
	out<<p->id<<"\t"<<p->name<<"\t"<<p->author<<"\t"<<p->publisher<<"\t"<<p->price<<"\t"<<p->number<<"\t"<<'\n';
		}	
	out.close();
	cout<<"\n\t\tͼ����Ϣ�ļ�����ɹ���"<<endl ;
	cout<<"\n���������ַ�������......" ;
	getch() ;
}
int main() {
	system("color 0A");//���ÿ���̨ǰ������ɫΪ����ɫ 
	int x ;
	bool quit = false ;
	cout<<"\n\n\n\n\n\n\n\n" ;
	cout<<"\t\t********************************************"<<endl ;
	cout<<"\t\t         ��ӭʹ��ͼ����Ϣ����ϵͳ��"<<endl ;
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
			Book1.AddItem() ;//���ͼ����Ϣ
			 cout<<"�Ƿ���ʾ��ǰ����ѧ����Ϣ��"<<endl<<"�ǵĻ�������1"<<endl<<"���ǵĻ�ֱ�ӷ��ز˵�ѡ��"<<endl;
	        cout<<"�����룺 "; 
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
			cout<<"\n\n�����������ַ�������......" ;
				break ; 

			case 2:
				Book1.Display() ;
			    Book1.ListCount() ;
                break ;//��ʾͼ����Ϣ
			case 3:
				Book1.RemoveItem();
	
				break ; //ɾ��ͼ����Ϣ
			case 4:
				Book1.Find();
				break ;//����ͼ����Ϣ
			case 5:
				Book1.ModifyItem();
				break ;  //�޸�ͼ����Ϣ
			case 6:
				Book1.SaleItem();//����ͼ����Ϣ 
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



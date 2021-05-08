//PROGRAM TO CREATE A MEDIA RECORD

#include <iostream>
using namespace std;
class Media
	{
		protected: char title[20];
					int price;
					
		public: void setMedia()
					{
						cout<<"\nEnter the Title of the media:";
						cin>>title;
						cout<<"\nEnter price of publication:";
						cin>>price;;
					}
				virtual void display(){}
	};
	
class Book:public Media
	{
		private:int pagenum;
		public:void setBook()
					{	setMedia();
						cout<<"\nEnter the page number of book:";
						cin>>pagenum;
					}
				void display()
					{
						cout<<"\nTitle:"<<title
							<<"\nPrice:"<<price
							<<"\nPage number:"<<pagenum;
					}
	};
	
class Tape:public Media
	{
		private:int time;
		public:void setTape()
					{	setMedia();
						cout<<"\nEnter the Time of the tape in min:";
						cin>>time;
					}
				void display()
					{
						cout<<"\nTitle:"<<title
							<<"\nPrice:"<<price
							<<"\nTape Time:"<<time<<"min";
					}
	};
	
int main()
	{
	Book book;
	Tape tape1;
	book.setBook();
	tape1.setTape();
	Media *media[2];
	media[0]=&book;
	media[1]=&tape1;
	media[0]->display();
	media[1]->display();
	return 0;
    }

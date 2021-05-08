//PROGRAM TO CALCULATE AREA

#include <iostream>
using namespace std;

class Shape
	{
		protected: double l,b;
		
		public:void setData()
					{
						cout<<"\nEnter the length and bredth:";
						cin>>l>>b;
					}
				virtual void display(){}
	};
	
class Rectangle:public Shape
	{
		setData();
		void display()
			{
				cout<<"\nArea of rectangle is:"<<l*b;
			}
	};
	
class Triangle:public Shape
	{
		setData();
		void display()
			{
				cout<<"\nArea triangle is:"<<(l*b)/2;
			}
	};
	
int main()
	{
		Triangle tri;
		Rectangle rect;
		Shape *shp1,*shp2;
		shp1=&tri;
		shp2=&rect;
		shp1->setData();
		shp1->display();
		shp2->setData();
		shp2->display();
		return 0;
	}

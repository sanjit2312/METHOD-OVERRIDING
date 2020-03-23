#include<iostream.h>
#include<conio.h>
class car
{
   public:
     void shiftgare()
     {
	cout<<"100 km/h";
      }
      void f1()
       {
       }
};
class sportscar:public car
{   int y;
   public:
     void shiftgare()
     {
	cout<<"Speed 300 km/h";
     }
     void f1(int x)
     {
	y=x;
     }
     void showdata()
     {
       cout<<"\ny= "<<y;
     }
};
void main()
{
   clrscr();
   sportscar obj;
   obj.shiftgare();
   obj.f1(2);
   obj.showdata();
   getch();
}

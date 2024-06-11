#include<iostream.h>
#include<conio.h>
#define pi 3.14

class start1
{
	private:
		float r,h,ans,ans1;
	public:
		void get_data()
		{
			cout<<"Enter Radius : ";
			cin>>r;
			cout<<"Enter Height : ";
			cin>>h;
		}
		void cal()
		{
			ans=pi*r*r*h;
		}
		void op();
		void show_data()
		{
			cout<<"Volume of cylinder : "<<ans<<endl;
			cout<<"Volume of cube : "<<ans1;
		}
};

void start1::op()
{
	ans1=r*r*r;
}
void main()
{
	start1 s;
	clrscr();
	s.get_data();
	s.cal();
	s.op();
	s.show_data();
	getch();
}
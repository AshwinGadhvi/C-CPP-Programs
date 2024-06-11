#include<iostream.h>
#include<conio.h>

class op
{
	protected:
		int a,b;
	public:
		void get_data()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
		}
};
class po:public op
{
	protected:
		int ans;
	public:
		void get_data()
		{

			po:op::get_data();
		}
		void cal()
		{
			ans=a+b;
		}
		void show_data()
		{
			cout<<"A is : "<<a<<endl;
			cout<<"B is : "<<b<<endl;
			cout<<"Ans is : "<<ans<<endl;
		}
};

class bolte:public op,public kake
{
	protected:
		int sports,ok;
	public:
		void calc()
		{
			 ok=sports-ans;
		}
		void show_data()
		{
			cout<<"Answer is ok : "<<ok;
		}
};

void main()
{
	po p;
	bolte b;
	clrscr();
	p.get_data();
	p.cal();
	p.show_data();
	b.calc();
	b.show_data();
	getch();
}
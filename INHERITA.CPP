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
	private:
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

void main()
{
	po p;
	clrscr();
	p.get_data();
	p.cal();
	p.show_data();
	getch();
}
#include<iostream.h>
#include<conio.h>

class op
{
	private:
		int a;
	protected:
		int b;
	public:
		void get_data()
		{
			cout<<"Enter A : ";
			cin>>a;
		}
		void show_data()
		{
			cout<<"A is : "<<a<<endl;
		}
};

class po:public op
{
	private:
		int c;
	public:
		void get_data()
		{
			cout<<"Enter c : ";
			cin>>c;
			cout<<"Enter b : ";
			cin>>b;
		}
		void show_data()
		{
			cout<<"C is : "<<c<<endl;
			cout<<"B is : "<<b<<endl;
		}
};

void main()
{
	po p;
	clrscr();
	p.get_data();
	p.show_data();
	getch();
}
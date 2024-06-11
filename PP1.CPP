#include<iostream.h>
#include<conio.h>

class op{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
		}
		void show_data()
		{
			cout<<"A is : "<<a<<endl;
			cout<<"B is : "<<b<<endl;
		}
};

void main()
{
	op p;
	clrscr();
	p.get_data();
	p.show_data();
	getch();
}
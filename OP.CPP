#include<iostream.h>
#include<conio.h>

class op{
	private:
		int a;
		int b;
	public:
		void get_data()
		{
			cout<<"Enter a : ";
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
	op p1;
	clrscr();
	p1.get_data();
	p1.show_data();
	getch();
}
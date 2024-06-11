#include<iostream.h>
#include<conio.h>

struct op{
	int a;
	void get_data()
	{
	 cout<<"A is : ";
	 cin>>a;
	}
	void show()
	{
		cout<<a;
	}
};

void main()
{
	struct op o;
	clrscr();
	o.get_data();
	o.show();
	getch();
}
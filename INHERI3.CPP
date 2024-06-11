#include<iostream.h>
#include<conio.h>
#define pi 3.14

class circle
{
	int r;
	public:
		int y;
		circle()
		{
			r=10;
		}
		int get_r();
		void show();
};

int circle::get_r()
{
	int y;
	y=r;
	return y;
}

void circle::show()
{
	cout<<"r is : "<<y;
}

class area:public circle
{
	int c;
	public:
		void area21();
		void show();
};

void area::area21()
{
	c=pi*get_r()*get_r();
}

void area::show()
{
	cout<<"area of circle : "<<c;
}

int main()
{
	clrscr();
	area a1;
	a1.area21();
	a1.show();
	getch();
	return 0;
}
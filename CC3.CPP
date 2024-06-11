#include<iostream.h>
#include<conio.h>

class point
{
	int x;
	public:
	point()
	{
		x=0;
	}
	point(int x1)
	{
		x=x1;
	}
	void change(int x1)     const
	{
		x=x1;
	}
	void showdata()
	{
		cout<<"x is : "<<x;
	}
};

void main()
{
	clrscr();
	point const p(6);
	p.change(12);
	p.showdata();
	getch();
}
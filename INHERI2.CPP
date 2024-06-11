#include<iostream.h>
#include<conio.h>

class rectangle
{
		int l;
	public:
		int b;
		int get_l();
		int get_ll();
		void show();

};

int rectangle::get_ll()
{

	b=5;
	return b;
}

int rectangle::get_l()
{
	int b;
	l=b;
	return 0;
}

void rectangle::show()
{
	cout<<l;
}

class square1:public rectangle
{
	int c;
	public:
		int square();
		void show();
};

int square1::square()
{
	int c;
	c=get_l()*get_l();
	return c;
}

void square1::show()
{
	cout<<"Square of l : "<<c;
}

int main()
{
	rectangle r1;
	r1.show();
	square1 s1;
	clrscr();

	s1.get_l();
	s1.square();
	s1.show();
	getch();
	return 0;
}

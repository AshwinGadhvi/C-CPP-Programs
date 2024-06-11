#include<iostream.h>
#include<conio.h>

class b
{
	int b;
	public:
		void get_data()
		{
			b=10;
		}
		void show()
		{
			cout<<"Value off b : "<<b;
		}
};

class d:public b
{
	int k;
	public:
		void get_data()
		{
			k=5;
		}
		void show()
		{
			cout<<"VAlue of b : "<<k;
			b::show();
		}
};

int main()
{
	clrscr();
	d d1;
    //	d1.show();
	d1.b::get_data();
	d1.b::show();
	getch();
	return 0;
}
#include<iostream.h>
#include<conio.h>

class start
{
	private:
		int a,b;
	public:
		start()
		{
		}
		void set_point()
		{
			a=0;
			b=0;
		}
		void set_point(int x1,int y1)
		{
			a=x1;
			b=y1;
		}
		void show()
		{
			cout<<"("<<a<<","<<b<<")"<<endl;
		}
};

void main()
{
	start s;
	start s2;
	clrscr();
	s.set_point();
	s2.set_point(4,5);
	s.show();
	s2.show();
	getch();
}
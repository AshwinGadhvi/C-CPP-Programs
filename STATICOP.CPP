#include<iostream.h>
#include<conio.h>

class static_demo
{
	static int x;
	int y;
	public:
	void getdata(int y1){y=y1;}
	void showdata()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
	void inc(){x++;}
	void static showcount()
	{
		cout<<"x="<<x;
	//	cout<<"y="<<y; instance member not accessible
	//
	}
};

int static_demo::x=0;

void main()
{
	static_demo ob1,ob2;
	clrscr();
	ob1.getdata(10);
	ob1.inc();
	ob1.showdata();
	ob2.getdata(20);
	ob2.inc();
	ob2.showdata();
	//static_demo::showcount();
	getch();
}
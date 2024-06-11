#include<iostream.h>
#include<conio.h>

class point
{
	private:
	int x;
	int y;
	public:
	point()
	{
		x=0;
		y=0;
	}
	point(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	void showdata()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};

void main()
{
	clrscr();
	point p1;
	cout<<"Enter x and y :";
	int m,n;
	cin>>m>>n;
	p1=point(m,n);
	p1.showdata();
	getch();
}
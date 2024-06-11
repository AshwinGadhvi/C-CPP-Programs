#include<iostream.h>
#include<conio.h>

class point
{
	int x,y;
	public:
	void getdata(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	void showdata()
	{
		cout<<"x is : "<<x<<endl;
		cout<<"y is : "<<y<<endl;
	}
};

void main()
{
	point p1,p2;
	int a,b;        x
	clrscr();
	cout<<"For First object : "<<endl;
	cout<<"Enter x : ";
	cin>>a;
	cout<<"Enter y : ";
	cin>>b;
	cout<<endl;
	p1.getdata(a,b);
	p1.showdata();
	cout<<endl;
	cout<<"For Second object : "<<endl;
	cout<<"Enter x : ";
	cin>>a;
	cout<<"Enter y : ";
	cin>>b;
	cout<<endl;
	p2.getdata(a,b);
	p2.showdata();
	getch();
}
#include<iostream.h>
#include<conio.h>

class pappu
{
	int x,n,r,h,a;
	float y,a1;
	public:
	void volume(int x1)
	{
		x=x1;
		a=x*x*x;
	}
	void volume(float y1,int r1,int h1,int n1)
	{
	       y=y1;
	       r=r1;
	       h=h1;
	       n=n1;
	       a1=y*r*r*(h/n);
	}
	void show()
	{
		cout<<"Volume of Cube is : "<<a<<endl;
		cout<<"Volume of corn is : "<<a1<<endl;
	}
};

void main()
{
	pappu p1;
	int q;
	clrscr();
	cout<<"Enter Number : ";
	cin>>q;
	p1.volume(q);
	p1.volume(3.14,3,6,2);
	p1.show();
	getch();
}

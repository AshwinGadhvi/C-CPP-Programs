#include<iostream.h>
#include<conio.h>
#define pi 3.14

class exam
{
	private:
		float r,h;
	public:
		void area(float r)
		{
			cout<<"Area of circle is : "<<pi*r*r<<endl;
		}
		void area(float r,float h)
		{
			cout<<"Area of tringle : "<<(0.5*r)*h<<endl;
		}
};

void main()
{
	exam e1;
	float l,m;
	clrscr();
	cout<<"Enter Redius or Length : ";
	cin>>l;
	cout<<"Enter Hight : ";
	cin>>m;
	e1.area(l);
	e1.area(l,m);
	getch();
}
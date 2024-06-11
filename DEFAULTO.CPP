#include<iostream.h>
#include<conio.h>

void op(int p,int y,int x=4);

void main()
{
	int m,n;
	clrscr();
	cout<<"Enter m : ";
	cin>>m;
	cout<<"Enter n : ";
	cin>>n;
	op(4,m,n);
	getch();
}
void op(int p,int y,int x)
{
	float a=0;
	a=x*p*p*y;
	cout<<"volume of cylinder is : "<<a;
}
#include<iostream.h>
#include<conio.h>

void op(int a,int b);

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	op(a,b);
	getch();
}

void op(int a,int b)
{
	if(a>b)
	{
		cout<<"A is big : "<<a;
	}
	else
	{
		cout<<"B is bid : "<<b;
	}
}
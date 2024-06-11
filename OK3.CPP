#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c,year;
	clrscr();
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	cout<<"Enter C : ";
	cin>>c;
	cout<<"Enter year : ";
	cin>>year;
	if(a>b & a>c)
	{
		cout<<"A is max : "<<a<<endl;
	}
	else if(b>c)
	{
		cout<<"B is max : "<<b<<endl;
	}
	else
	{
		cout<<"C is Max : "<<c<<endl;
	}
	if(year%4==0 && year%400==0 || year%100!==0)
	{
		cout<<year<<" Is Leap Year!!";
	}
	else
	{
		cout<<year<<" Is not Leap Year!!";
	}
	getch();
}
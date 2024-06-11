#include<iostream.h>
#include<conio.h>

void main()
{
	float a,b,c;
	clrscr();
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	cout<<"Enter c : ";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"A is max : "<<a;
		}
		else
		{
			cout<<"C is max : "<<c;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"B is max : "<<b;
		}
		else
		{
			cout<<"C is max : "<<c;
		}
	}
	getch();
}
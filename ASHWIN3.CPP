#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	cout<<"enter a b c";
	cin>>a>>b>>c;
	if(a>c)
	{
		if(b>c)
		{
			cout<<"b is second maximum"<<b;
		}
		else
		{
			if(a>c)
			{
				cout<<"a is second maximum"<<a;
			}
			else
			{
				cout<<"c is second maximum::"<<c;
			}
		}
	}
	else
	{
		if(a>c)
		{
			if(a>b)
			{
				cout<<"a is second maximum::"<<a;
			}
			else
			{
				cout<<"b is second maximum::"<<b;
			}
		}
		else
		{
			if(c>a)
			{
				cout<<"c is second maximum::"<<c;
			}
			else
			{
				cout<<"a is second maximum::"<<a;
			}
		}
	}
	getch();
}
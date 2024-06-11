#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	cout<<"enter a b c";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				cout<<"b is max::"<<b;
			}
			else
			{
				cout<<"c is max::"<<c;
			}
		}
	}
	else
	{
		if(b>a)
		{
			if(b>c)
			{
				if(c>a)
				{
					cout<<"c is max::"<<c;
				}
				else
				{
					cout<<"a is max::"<<a;
				}
			}
		}
	}
	getch();
}
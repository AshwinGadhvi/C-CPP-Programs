#include<iostream.h>
#include<conio.h>

int main()
{
	int a,b,c;
	clrscr();
	cout<<"enter a b c::";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				cout<<"b is second maximum::"<<b;
			}
			else
			{
				cout<<"b is third maximu::"<<c;
			}
		}
		else
		{
			cout<<"a is thurd maximum::"<<a;
		}
	}
	else
	{
		if(b>a)
		{
			cout<<"a is second maximum::"<<a;
		}
		else
		{
			cout<<"a is third maximum::"<<a;
		}
	}
	getch();
	return 0;
}
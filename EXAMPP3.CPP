#include<iostream.h>
#include<conio.h>

int big(int &a,int &b);

int main()
{
	int a,b;
	clrscr();
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	big(a,b);
	getch();
	return 0;
}
int big(int &a,int &b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
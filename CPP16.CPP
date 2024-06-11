#include<iostream.h>
#include<conio.h>

int add(int a,int b);

int main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	c=add(a,b);
	cout<<"Total :: "<<c;
	getch();
	return 0;
}

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
#include<iostream.h>
#include<conio.h>

void main()
{
	int a,*p;
	clrscr();
	a=10;
	p=&a;
	cout<<*p<<endl;    //value of a
	cout<<&p<<endl;          //address of p
	cout<<p;
	getch();
}
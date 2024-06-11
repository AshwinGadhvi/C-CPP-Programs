#include<iostream.h>
#include<conio.h>

void main()
{
	int a=10;
	int *p;
	clrscr();
	p=&a;
	cout<<"A is : "<<*p;
	getch();
}
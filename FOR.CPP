#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	char val;
	clrscr();
	cin>>val;
	cout.fill('#');
	cout.width(5);
	cout.precision(.2);
	cout<<val;
	getch();
}
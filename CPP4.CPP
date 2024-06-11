#include<iostream.h>
#include<conio.h>
#define pi 3.14

void main()
{
	float r,a;
	clrscr();
	cout<<"Enter Redius To Calculate Area of Circle : ";
	cin>>r;
	a=pi*r*r;
	cout<<"Area of Circle is : "<<a;
	getch();
}
#include<iostream.h>
#include<conio.h>
#define pi 3.14

inline float op(float r)
{
	return pi*r*r;
}
void main()
{
	float r;
	clrscr();
	cout<<"Enter Radius : ";
	cin>>r;
	cout<<op(r);
	getch();
}
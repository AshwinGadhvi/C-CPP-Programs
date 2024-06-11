#include<iostream.h>
#include<conio.h>

void main()
{
	void *p1;
	int a;
	float b;
	clrscr();
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	p1=&a;
	cout<<"A is : "<<*(int *)p1<<endl;
	p1=&b;
	cout<<"B is : "<<*(float *)p1;
	getch();
}
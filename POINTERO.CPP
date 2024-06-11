#include<iostream.h>
#include<conio.h>

void main()
{
	int a=10,*p,*ptr,b=20;
	clrscr();
	p=&a;
	ptr=&b;
	*p+=10;
	*ptr-=10;
	cout<<"Address of b : "<<ptr<<endl;
	cout<<"Address of a : "<<p<<endl;
	cout<<"value of a : "<<*p<<endl;
	cout<<"value of b : "<<*ptr;
	getch();

}
#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,sum;
	int *p,*p1;
	clrscr();
	a=10;
	b=10;
	p=&a;
	p1=&b;
	sum=*p+*p1;
	cout<<"Sum is : "<<sum<<endl;
	cout<<"Address of a : "<<p<<endl;
	cout<<"Address of b : "<<p1<<endl;
	cout<<"Value of a : "<<*p<<endl;
	cout<<"value of b : "<<*p1<<endl;
	getch();

}
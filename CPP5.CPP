#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,s;
	clrscr();
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	cout<<"-----Before-----"<<endl<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
	a=a-b;
	b=a+b;
	a=b-a;
	cout<<"-----After------"<<endl;
	cout<<"After Swap a is : "<<a<<endl;
	cout<<"After swap b is : "<<b;
	getch();
}
#include<iostream.h>
#include<conio.h>

void swap(int a,int b);

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	cout<<"Before Swap A is : "<<a<<endl;
	cout<<"Befroe Swap B is : "<<b<<endl;
	swap(a,b);
	cout<<"After Swap A is : "<<a<<endl;
	cout<<"After Swap B is : "<<b<<endl;
	getch();
}

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
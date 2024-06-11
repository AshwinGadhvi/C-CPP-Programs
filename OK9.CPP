#include<iostream.h>
#include<conio.h>

void swap(int &a,int &b);

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	swap(a,b);
	cout<<"after swap a : "<<a<<endl;
	cout<<"After swap b : "<<b;
	getch();
}

void swap(int &a,int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
#include<iostream.h>
#include<conio.h>

void main()
{
	int year;
	clrscr();
	cout<<"Enter Year TO check : ";
	cin>>year;
	if((year%4==0) && (year%100!=0) || (year%400==0))
	{
		cout<<"Year is leap : "<<year;
	}
	else
	{
		cout<<"Year is not leap : "<<year;
	}
	getch();
}
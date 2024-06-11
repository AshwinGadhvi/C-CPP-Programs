#include<iostream.h>
#include<conio.h>

void main()
{
	int number;
	clrscr();
	cout<<"Enter Number to check is positive or nagative : ";
	cin>>number;
	if(number>0)
	{
		cout<<"Number is Positive : "<<number;
	}
	else if(number==0)
	{
		cout<<"Not positive Not Nagative : "<<number;
	}
	else
	{
		cout<<"Number is Nagative : "<<number;
	}
	getch();
}
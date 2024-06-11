#include<iostream.h>
#include<conio.h>

void main()
{
	int number;
	clrscr();
	cout<<"Enter Number to check is Even or Odd : ";
	cin>>number;
	if(number%2==1)
	{
		cout<<"Number is Odd : "<<number;
	}
	else
	{
		cout<<"Number is Even : "<<number;
	}
	getch();
}
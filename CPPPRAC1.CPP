#include<iostream.h>
#include<conio.h>

void main()
{
	int celsius,fahrenheit;
	clrscr();
	cout<<"Enter Celsius To Convert Into Fahrenheit : ";
	cin>>celsius;
	fahrenheit= (celsius * 1.8) + 32;
	cout<<"Fahrenheit is : "<<fahrenheit;
	getch();
}
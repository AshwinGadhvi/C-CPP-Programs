#include<iostream.h>
#include<conio.h>

void main()
{
	float celsius,fahrenheit;
	clrscr();
	cout<<"Enter Celsius To Convert Into Fahrenhiet : ";
	cin>>celsius;
	fahrenheit=((celsius*1.8)+32);
	cout<<"After Convert Fahrenhiet is : "<<fahrenheit;
	getch();
}
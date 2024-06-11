#include<iostream.h>
#include<conio.h>

void main()
{
	int number,l_digit,rev=0;
	clrscr();
	cout<<"Enter Number : ";
	cin>>number;
	do{
		l_digit=number%10;
		rev = rev * 10 + l_digit;
		number/=10;
	}while (number>0);
	cout<<"Revrse is : "<<rev;
	getch();
}
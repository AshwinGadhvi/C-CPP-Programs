#include<iostream.h>
#include<conio.h>

void main()
{
	int number,lo,l_digit,rev=0;
	clrscr();
	cout<<"Enter Number : ";
	cin>>number;
	lo=number;
	do{
		l_digit=number%10;
		rev=rev*10+l_digit;
		number/=10;
	}while(number!=0);
	if(lo==rev)
	{
		cout<<"Number is Pelindrome : ";
	}
	else
	{
		cout<<"Number is not Pelindrome : ";
	}
	getch();
}
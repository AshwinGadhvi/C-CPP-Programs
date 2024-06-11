#include<stdio.h>
#include<conio.h>

void main()
{
	int n,l_digit,rev=0;
	clrscr();
	printf ("enter the number");
	scanf ("%d",&n);
	do
	{
		l_digit=n%10;
		rev=rev*10+l_digit;
		n=n/10;
	}while(n>0);
	printf ("rev is %d",rev);
	getch();
}
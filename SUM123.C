#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0,l_digit,n;
	clrscr();
	printf ("enter the digit");
	scanf ("%d",&n);
	do
	{
		l_digit=n%10;
		sum+=l_digit;
		n=n/10;
	}while(n>0);
	printf ("sum is %d",sum);
	getch();
}
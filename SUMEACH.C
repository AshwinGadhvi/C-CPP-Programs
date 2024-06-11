#include<stdio.h>
#include<conio.h>

void main()
{
	int n,l_digit,sum=0;
	clrscr();
	printf ("enter the number");
	scanf ("%d",&n);
	do
	{
		l_digit=n%10;
		sum+=l_digit;
		n=n/10;
	}
	while(n>0);
	printf ("sum is %d",sum);
	getch();
}
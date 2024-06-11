#include<stdio.h>
#include<conio.h>

void main()
{
	int n,count=0,l_digit;
	clrscr();
	printf ("enter the digit");
	scanf("%d",&n);
	do
	{
		l_digit=n%10;
		count+=1;
		n=n/10;
	}while(n>0);
	printf ("count is %d",count);
	getch();
}
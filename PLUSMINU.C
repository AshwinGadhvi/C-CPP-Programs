#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0,fact=1;
	clrscr();
	printf ("enter the number");
	scanf ("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=fact*i;
		fact=fact*-1;
	}
	printf ("sum is %d",sum);
	getch();
}
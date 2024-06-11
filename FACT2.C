#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,fact=1;
	clrscr();
	printf ("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf ("fact is %d",fact);
	getch();
}
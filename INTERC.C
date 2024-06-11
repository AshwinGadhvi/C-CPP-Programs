#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\033[0;31m")
	printf ("enter a value of a b ");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf ("\033[0;32m");
	getch();
}
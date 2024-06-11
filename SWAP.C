#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf ("enter a value of a b");
	scanf ("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf ("a%d b%d",a,b);
	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf ("enter the value of a and b");
	scanf ("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf ("a is %d\nb is %d",a,b);
	getch();
}
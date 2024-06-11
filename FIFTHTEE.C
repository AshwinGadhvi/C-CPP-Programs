#include<stdio.h>
#include<conio.h>

void main()
{
	int u,a,t,d;
	clrscr();
	printf ("enter the value of u a t");
	scanf ("%d%d%d",&u,&a,&t);
	d=(u*t)+(a*t*t);
	printf ("d is %d",d);
	getch();
}
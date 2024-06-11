#include<stdio.h>
#include<conio.h>

void main()
{
	int p,r,n,si;
	clrscr();
	printf ("enter the value of p r n");
	scanf ("%d%d%d",&p,&r,&n);
	si=(p*r*n)/100;
	printf ("si is %d",si);
	getch();
}
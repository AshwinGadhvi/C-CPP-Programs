#include<stdio.h>
#include<conio.h>

void main()
{
	char demo;
	clrscr();
	printf ("enter a character value");
	scanf ("%c",&demo);
	printf ("ascii value of %c is %d",demo,demo);
	getch();
}
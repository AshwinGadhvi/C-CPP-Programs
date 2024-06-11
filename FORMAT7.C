#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int name[10];
	clrscr();
	printf ("enter the name");
	scanf ("%10.8s",name);
	printf ("name is %s",name);
	getch();
}
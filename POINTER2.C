#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	char c;
	clrscr();
	a=125;
	b=126;
	c='A';
	printf ("%d is located at %u\n",a,&a);
	printf ("%d is located at %u",b,&b);
	printf ("%c is located at %u",c,&c);
	getch();
}

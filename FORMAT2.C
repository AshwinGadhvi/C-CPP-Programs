#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,sub;
	clrscr();
	printf ("enter a value of a b");
	scanf ("%f%f",&a,&b);
	sub=a/b;
	printf ("sub=%0.2f",sub);
	getch();
}

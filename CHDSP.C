#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf ("enter ch");
	scanf ("%c",&ch);
	printf ("ascii value of %d",ch);

	if (ch>=65 && ch<=90)
	{
		printf ("\nuppercase ch");
	}
	else if (ch>=97 && ch<=122)
	{
		printf ("\nlowercase ch");
	}
	else if (ch>=48 && ch<=57)
	{
		printf ("digit ch");
	}
	else
	{
		printf ("special ch");
	}
	getch();
}
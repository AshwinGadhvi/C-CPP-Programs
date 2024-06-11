#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf ("enter the ch::");
	scanf ("%c",&ch);
	if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf ("ch is alphabet");
	}
	else
	{
		printf ("ch is digit");
	}
		printf ("\nch is %c",ch);
	getch();
}
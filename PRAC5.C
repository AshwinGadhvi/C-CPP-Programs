#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf ("enter the ch");
	scanf ("%c",&ch);
	if ((ch>'a' && ch<'z') ||  (ch>'A' && ch<'Z'))
	{
		printf ("%c is alphabet",ch);
	}
	else if ((ch>='0' && ch<'9'))
	{
		printf ("%c is digit",ch);
	}
	else
	{
		printf ("%c is special charcter",ch);
	}
	getch();
}
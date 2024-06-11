#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf ("enter the ch");
	scanf ("%c",&ch);
	if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf ("ch is alphabet");
	}
	else if ((ch>'0' && ch<'9'))
	{
		printf ("ch is digit",ch);
	}
	else
	{
		printf ("ch is special charcter",ch);
	}
	getch();
}
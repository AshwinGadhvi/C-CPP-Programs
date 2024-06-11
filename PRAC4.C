#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf ("enter the ch");
	scanf ("%d",&ch);
	if ((ch>='a')( ch<='z') || (ch>='A')(ch<='Z'))
	{
		printf ("ch is alphabet");
	}
	else if ((ch>=0) && (ch<=9))
	{
		printf ("%d is digit",%d);
	}
	else
	{
		printf ("%d is sp",%d);
	}
	getch();
}
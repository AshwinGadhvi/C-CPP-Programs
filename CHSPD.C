#include<stdio.h>
#include<conio.h>

void main()
{
	char ch,d;
	clrscr();
	printf ("enter the value of ch ");
	scanf("%c",&ch);
	if ((ch>='a') && (ch<='z') || (ch>='A') && (ch<='Z'))
	{
		printf ("ch is alphabet");
	}
	else if ((d>='0') || (d<='9'))
	{
		printf("ch is digit");
	}
	else
	{
		printf("ch is special charcter");
	}
	getch();
}
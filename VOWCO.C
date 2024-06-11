#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf ("enter the value of ch");
	scanf("%c",&ch);
	if ((ch=='a') || (ch=='A') || (ch=='e') || (ch=='E') || (ch=='i') || (ch=='I') || (ch=='o') || (ch=='O') || (ch=='u') || (ch=='U'))
	{
		printf ("ch is vowel");
	}
	else
	{
		printf ("ch is consonent");
	}
	getch();
}
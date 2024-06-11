#include<stdio.h>
#include<conio.h>

void main()
{
	int number;
	clrscr();
	printf ("enter the number::");
	scanf ("%d",&number);
	if (number%2==0)
	{
		printf ("the number is even");
	}
	else
	{
		printf ("the number is odd");
	}
	getch();
}
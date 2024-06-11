#include<stdio.h>
#include<conio.h>

void main()
{
	int number;
	clrscr();
	printf ("enter the vlue of number");
	scanf("%d",&number);
	if (number>=0)
	{
		printf ("number is positive");
	}
	else
	{
		printf ("number is nagative");
	}
	getch();
}

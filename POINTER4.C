#include<stdio.h>
#include<conio.h>

void main()
{
	int age,*p;
	*p=age;
	clrscr();
	printf ("enter your age::");
	scanf ("%d",&(*p));
	if (*p>18)
	{
		printf ("Eligible for vote::");
	}
	else
	{
		printf ("Not eligible for vote");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	int name1,name2;
	clrscr();
	printf ("enter name");
	scanf ("%[^\n]s",name1);
	printf ("my name is %s",name1);

	printf ("enter your college name");
	scanf ("%[^.]s",name2);
	printf ("my collage name is %s",name2);
	getch();
}
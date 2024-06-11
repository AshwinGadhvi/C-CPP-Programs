#include<stdio.h>
#include<conio.h>

void main()
{
	int quality,*p;
	quality=10;
	*p=quality;
	clrscr();
	printf (" stored at %u",&p);

	getch();
}

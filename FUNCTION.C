#include<stdio.h>
#include<conio.h>

void add_two(int a, int y)
{
	printf ("Sum of %d + %d =%d",a,y,(a+y));
}
void main()
{
	int a,y;
	clrscr();
	printf ("Enter two number::");
	scanf ("%d%d",&a,&y);
	add_two(a,y);
	getch();
}
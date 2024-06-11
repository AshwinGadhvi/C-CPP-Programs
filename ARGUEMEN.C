#include<stdio.h>
#include<conio.h>

void swap(int x,int y)
{
	int t=x;
	x=y;
	y=t;
	printf ("After swaping x=%d y=%d",x,y);
}
void main()
{
	int x,y;
	clrscr();
	printf ("Enter two number::");
	scanf ("%d%d",&x,&y);
	printf ("Before swaping x=%d y=%d",x,y);
	swap(x,y);
	printf ("After swaping x=%d y=%d",x,y);
	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	void area_tri();
	clrscr();
	printf ("area of triangle::\n");
	area_tri();
	getch();
}
void area_tri()
{
	int area=0,b,h;
	printf ("Enter base and hieght::");
	scanf ("%d%d",&b,&h);
	area=0.5*b*h;
	printf ("area of triangle is %d",area);


}
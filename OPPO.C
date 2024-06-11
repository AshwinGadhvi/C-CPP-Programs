#include<stdio.h>
#include<conio.h>
}

void print_star()	//function defination
{
	printf ("\n*******************************\n");
}
void add_two()
{
	int x,y;
	printf ("Enter two digit::");
	scanf ("%d%d",&x,&y);
	print_star();
	printf ("sum of %d + %d = %d",x,y,(x+y));
}

void main()
{

	void add_two();
	void print_star();
	clrscr();
	print_star();                        //function call
	printf ("First Function to add Two number::");
	print_star();                       //function call
	add_two();                          //function call
	getch();
}

void print_star()	//function defination
{
	printf ("\n*******************************\n");
}
void add_two()
{
	int x,y;
	printf ("Enter two digit::");
	scanf ("%d%d",&x,&y);
	print_star();
	printf ("sum of %d + %d = %d",x,y,(x+y));
}

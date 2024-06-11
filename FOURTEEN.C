#include<stdio.h>
#include<conio.h>

void main()
{
	float centigrade,fahrenhiet;
	clrscr();
	printf ("enter the value of fahrenhiet");
	scanf ("%f",&fahrenhiet);
	centigrade=(fahrenhiet-32)/1.8;
	printf ("centigrade is %f",centigrade);
	getch();
}
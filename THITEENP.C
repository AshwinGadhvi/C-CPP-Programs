#include<stdio.h>
#include<conio.h>

void main()
{
	float centigrade,fahrenhiet;
	clrscr();
	printf ("enter the value of centigrade");
	scanf ("%f",&centigrade);
	fahrenhiet=(1.8*centigrade)+32;
	printf ("fahrenhiet is %f",fahrenhiet);
	getch();
}
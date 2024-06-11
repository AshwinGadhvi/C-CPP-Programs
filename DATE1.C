#include<stdio.h>
#include<conio.h>

void main()
{
	int day,month,year;
	char Date1[20];
	clrscr();
	printf ("Enter Today's DAte::(DD MM YYYY)");
	scanf ("%s",Date1);
	printf ("Today's Date is %s",Date1);
	sscanf (Date1,"%d%d%d",&day,&month,&year);
	printf ("Day: %d",day);
	printf ("Month: %d",month);
	printf ("Year: %d",year);
	getch();
}
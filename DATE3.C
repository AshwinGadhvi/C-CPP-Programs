#include<conio.h>
#include<stdio.h>

void main()
{
	char ar[20]="user m19 1.85";
	char str[10];
	char ch;
	int i;
	float f;
	sscanf (ar,"%s %c %d",&str,&ch,&i,&f);

	printf ("the value in string is :%s",str);
	printf ("\n");

	printf ("the value in string is :%s",ch);
	printf ("\n");

	printf ("the value in string is :%i",i);
	printf ("\n");

	printf ("the value in string is :%f",f);
	printf ("\n");

	sscanf (ar,"%s %c %d",&str,&ch,&i);
	getch();
}
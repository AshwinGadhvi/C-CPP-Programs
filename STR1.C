#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[10];
	clrscr();
	puts ("enter your name::");
	gets(str);
	scanf ("%s",str);
       //	scanf ("%c[^\n]",str);
	//puts(str);
	printf ("\nmy name is %s",str);
	getch();
}
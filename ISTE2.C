#include<stdio.h>
#include<conio.h>

void main()
{
	char name[20];
	clrscr();
	printf("Enter Your Name : ");
	scanf("%[^\n]",name);
	printf("My Name is : %s",name);
	getch();
}
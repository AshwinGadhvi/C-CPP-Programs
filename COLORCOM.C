#include<stdio.h>
#include<conio.h>


void main()
{
	char name[20],name2[20];
	clrscr();
	printf("\033[0;32m");
	printf("Enter Name for connect to the server : ");
	gets(name);
	printf("Enter Id For Connect to the server : ");
	gets(name2);
	//prinft(\033[0m");
	printf("\033[0;31m");
	printf("Successfully connect to the server...");
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n,i,j;
	char a[100];
	clrscr();
	printf("Enter How Many Thing You Buy:-");
	scanf("%d",&n);
	printf("Enter Name Of Thing:-\n");
	for(i=0;i<=n;i++)
	{
		gets(a);
	}
	clrscr();
	printf(" ------------------------------\n");
	printf("|            ASHWIN            |\n");
	printf(" ------------------------------\n");
	printf("| How Many Thing You Buy:- %d  |\n",n);
	printf(" ------------------------------\n");
	for(i=0;a[i]<=n;i++)
	{
		puts(a);

	}
	getch();
}
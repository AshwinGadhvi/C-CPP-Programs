#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	int *p;
	clrscr();
	p=&a;
	printf("Value of a is %d\n",*p);
	printf("Address of a is %d\n",p);
	printf("Address of p is %d",&p);
	getch();
}
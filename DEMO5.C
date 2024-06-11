#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	int **ptr;
	int *p1;
	clrscr();

	p1=&a;
	ptr=&p1;

	printf ("address of a is %u\n",&a);
	printf ("address at *p1 isi %u",p1);
	printf ("address of *p1 is %u \n",&p1);

	printf ("value at **ptr is %d",**ptr);
	getch();

}
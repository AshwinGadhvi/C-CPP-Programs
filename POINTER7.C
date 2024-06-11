#include<stdio.h>
#include<conio.h>

void main()
{
	int a=11;
	float b=10.25;
	double c=12345.123456;
	int *ptr;
	float *ptr1=&b;
	double *ptr2=&c;
	clrscr();
	ptr=&a;
	printf ("address of a is %u\n",&a);
	printf ("value at *ptr is %d\n",*ptr);
	printf ("Address at *ptr is %u\n",ptr);
	printf ("address of *ptr is %u\n",&ptr);
	getch();
}


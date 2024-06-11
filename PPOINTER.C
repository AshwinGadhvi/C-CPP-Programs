#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,*p,ptr1,ptr2,pc,sum=0;
	clrscr();
	a=10;
	b=11;
	*p=a;
	pc=b;
	(*p)++;
	printf ("before prg value is %d after %u\n",a,*p);
	pc++;
	printf ("before prg value is %d after %u",b,pc);
	ptr1=pc;
	ptr2=*p;
	sum=ptr1+ptr2;
	printf ("\nsum is %d",sum);
	getch();
}
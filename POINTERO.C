#include<stdio.h>
#include<conio.h>

void main()
{
	int* pc,p,dnc,op;
	clrscr();
	p=100;
	dnc=200;
	*pc=p;
	*pc=dnc;
	printf ("%d is located at %u\n",p,&pc);
	printf ("%d is located at %u\n",dnc,&*pc);
	op=300;
	(*pc)=op;
	printf ("%d is located at %u",op,&(*pc));
	printf ("\n");
	printf ("%u have value is %d",&pc,p);
	printf ("%u have value is %d",&*pc,dnc);
	printf ("%u have value is %d",&*pc,op);
	getch();
}
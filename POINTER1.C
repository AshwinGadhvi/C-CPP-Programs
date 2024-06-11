#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b;
	int x,y;
	float p,q;


	a='A';
	x=125;
	b='B';
	y=150;
	p=10.25, q=18.76;

	printf ("%c is stored at address %u.\n",a,&a);
	printf ("%c is stored at address %u.\n",x,&x);
	printf ("%c is stored at address %u.\n",b,&b);
	printf ("%c is stored at address %u.\n",y,&y);
	printf ("%f is stored at address %u.\n",p,&p);
	printf ("%f is stored at address %u.\n",q,&q);
	getch();
}
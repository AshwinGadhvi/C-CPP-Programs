#include<stdio.h>
#include<conio.h>

#define it 2000

void main()
{
	float bs,ns,da,hra;
	clrscr();
	printf ("enter the value of bs");
	scanf ("%f",&bs);
	if (bs<=10000)
	{
		bs=ns;
	}
	else if ((bs>=10000) && (bs<=50000))
	{
		hra=0.2*bs;
		da=0.5*bs;
		ns=(bs+hra+da)-it;
	}
	else if ((bs>=50000) && (bs<=200000))
	{
		hra=0.4*bs;
		da=0.7*bs;
		ns=(bs+hra+da)-it;
	}
	else if (bs>=200000)
	{
		hra=0.7*bs;
		da=0.9*bs;
		ns=(bs+hra+da)-it;
	}
	printf ("ns is %f",ns);
	getch();
}
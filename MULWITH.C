#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,i,mul=0;
	clrscr();
	printf ("enter two number::");
	scanf ("%d%d",&a,&b);
	for (i=1;i<=b;i++)
	{
		mul+=a;
	}
	printf ("mul=%d",mul);
	getch();
}
#include<stdio.h>
#include<conio.h>

void prime(int x)
{
	int f=0,i;
	for(i=2;i<x;i++)
	{
		if (x%i==0)
		{
			f=1;
			printf ("not primr::");
			break;
		}
	}
	if(f==0)
	{
		printf ("prime number::");
	}
}
void main()
{
	int x,y;
	clrscr();
	printf ("Enter two number::");
	scanf ("%d",&x);

	prime(x);

	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0,prod=1;
	clrscr();
	printf ("enter the number");
	scanf ("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=prod*i;
		prod=-1*prod;
	}
	printf ("sum is %d",sum);
	getch();
}
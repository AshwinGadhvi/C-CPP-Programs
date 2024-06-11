#include<stdio.h>
#include<conio.h>

void main()
{
	int i,m=0,n,flag;
	clrscr();
	printf("enter the n");
	scanf ("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			printf ("number is not prime");
			flag=1;
			break;
		}
	}
	if (flag==0)
		printf ("number is prime");
	getch();
}
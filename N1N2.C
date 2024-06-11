#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n1,n2;
	clrscr();
	printf ("enter n1 and n2");
	scanf ("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		printf ("%d",i);
	}
	getch();
}
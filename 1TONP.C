#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,flag,j;
	clrscr();
	printf ("enter the nmber");
	scanf ("%d",&n);
	printf ("prime number are");
	for(i=1;i<=n;i++)
	{
		flag=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				flag++;
			}
		}
		if(flag==2)
		printf ("%d",i);
	}
	getch();
}



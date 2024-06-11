#include<stdio.h>
#include<coino.h>

void main()
{
	int i,n,j,num=1;
	char ch='a';
	clrscr();
	printf ("enter the number of lines");
	scanf ("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (i%2==1)
		{
			for(j=1;j<=1;j++)
			{
				printf ("%c",ch++)
			}
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				printf ("%d",num++);
			}
		}
		printf ("\n");
	}
	getch();
}









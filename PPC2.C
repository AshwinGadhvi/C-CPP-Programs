#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m;
	clrscr();
	for(i=1;i<n;i++)
	{
		for(m=1;m<=i;m++)
		{
			if(i%2==1)
			{
				printf("%d",i);
			}
		}
		printf("\n");
	}
	getch();
}
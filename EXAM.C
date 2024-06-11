#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	i=97;
	j=sizeof(++i);
	k=i^j;
	{
		printf ("j is %d and k is %d",j,k);
	}
	getch();
}
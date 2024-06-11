#include<stdio.h>
#include<conio.h>

void main()
{
	int i,x,y;
	clrscr();
	printf ("enter the value of x y");
	scanf ("%d%d",&x,&y);
	i=x;
	while (i<y)
	{
		i+=1;
		printf ("%d\n",i);
		i++;
	}
	getch();
}
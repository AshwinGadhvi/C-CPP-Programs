#include<stdio.h>
#include<conio.h>

void main()
{
	void max_three();
	clrscr();
	printf ("max of three::\n");
	max_three();
	getch();
}
void max_three()
{
	int a,b,c;
	printf ("Enter digit::\n");
	scanf ("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf ("%d is max",a);
		}
	}
	if(b>c)
	{
		printf ("%d is max",b);
	}
	else
	{
		printf ("%d is max",c);
	}



}
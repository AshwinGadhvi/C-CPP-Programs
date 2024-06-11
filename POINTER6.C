#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,*p,max;
	*p=max;
	clrscr();
	printf ("Enter a b c::");
	scanf ("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if(a>c)
		{
			printf ("A is max\n",a);
		}
		else if (b>c)
		{
			printf ("B is max\n",b);
		}
	}
	else
	{
		printf ("C is Max\n::",c);
	}
	max=c;
	printf ("Max is %d\n",max);
	printf("max is located at %u",*p);
	getch();
}
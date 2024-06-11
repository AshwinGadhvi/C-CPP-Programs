#include<stdio.h>
#include<conio.h>

void main()
{
	int a=5,c;
	c=a;
	clrscr();
	printf ("c=%d\n",c);
	c+=a;
	printf ("c=%d\n",c);
	c-=a;
	printf ("c=%d\n",c);
	c*=a;
	printf ("c=%d\n",c);
	c/=a;
	printf ("c=%d\n",c);
	c%=a;
	printf ("c=%d\n",c);
	getch();
}
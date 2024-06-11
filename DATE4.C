#include<stdio.h>
#include<conio.h>

void main()
{
	int *ptr,a;
	clrscr();
	printf ("Enter a value of a");
	scanf ("%d",&a);
	ptr=&a;
	printf ("Value of *ptr is :: %d\n",*ptr);
     //	printf ("value of A is %d\n",a);
	*ptr+=10;
	printf ("value of A is %d\n",a);

	getch();
}
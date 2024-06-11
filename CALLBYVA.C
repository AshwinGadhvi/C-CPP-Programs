#include<stdio.h>
#include<conio.h>

void swap(int *ptr,int *ptr1)
{
	int temp=*ptr;
	*ptr=*ptr1;
	*ptr1=temp;
	printf ("Value of a = %d and b = %d in function",*ptr,*ptr1);
}
void main()
{
	int a,b;
	clrscr();
	printf ("Enter 2 number");
	scanf ("%d%d",&a,&b);
	printf ("before value of a = %d and b = %d in main\n",a,b);
	swap(&a,&b);
	printf ("\nAfter vale of a = %d and b = %d in main\n",a,b);
	getch();
}
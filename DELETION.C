#include<stdio.h>
#include<conio.h>


void main()
{
	int i,n,pos,a[100];
	clrscr();
	printf ("Enter number of Elements::");
	scanf ("%d",&n);
	printf ("Enter %d Elements\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter a pos::");
	scanf("%d",&pos);
      //	printf("enter a value::");
       //	scanf("%d",&value);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
       //	a[pos]=value;
	n--;
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=%d\n",i,a[i]);
	}
	getch();
}
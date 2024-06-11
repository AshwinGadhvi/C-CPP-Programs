#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],b[10],c[10],i,n;
	clrscr();
	printf ("enter two array::");
	scanf ("%d",&n);
	printf ("enter %d elements",n);
	for (i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf ("b[%d]=",i);
		scanf("%d",b[i]);
	}
    //	for (i=0;i<n;i++)
      //	{
	      c[i]=a[i]+b[i];
       //	}
	printf ("%d",c[i]);
	getch();
}
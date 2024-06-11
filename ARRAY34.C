#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50],i,n;
	clrscr();
	printf ("enter n");
	scanf ("%d",&n);

	printf ("\nenter %d elementes:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf ("%d\n",a[i]);
	}
	getch();
}
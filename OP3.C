#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a[100],find,flag=0;
	clrscr();
	printf ("Enter elements number");
	scanf ("%d",&n);
	printf ("enter %d element",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
	printf ("enter value to find::");
	scanf ("%d",&find);
	for(i=0;i<n;i++)
	{
		if(a[i]==find)
		{
			flag=1;
			printf ("Element found at %d location",i);
		}
	}
	if(flag==0)
	{
		printf ("Elements not found::");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>

void swap(int *ptr,int *ptr1)
{
	int temp=*ptr;
	*ptr=*ptr1;
	*ptr1=temp;
}
void sort(int *a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(&a[i],&a[j]);
			}
		}
	}
}
void readArray(int *ptr,int n)
{
	int i;
	printf ("Enter %d number::",n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&ptr[i]);
	}
}
void displayArray(int a[],int n)
{
	int i;
	printf ("Entered %d Number::",n);
	for(i=0;i<n;i++)
	{
		printf ("%d",a[i]);
	}
}
void main()
{
	int i,n,a[100];
	clrscr();
	printf ("How many number::");
	scanf ("%d",&n);
	readArray(a,n);
	sort(a,n);
	displayArray(a,n);
	getch();
}
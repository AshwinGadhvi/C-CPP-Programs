#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j,temp,a[100];
	clrscr();
	printf ("Enter Elements of Array::");
	scanf ("%d",&n);
	printf ("Enter %d elements::",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	printf ("Sorted elements is::\n");
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=%d\n",i,a[i]);
	}
	getch();
}
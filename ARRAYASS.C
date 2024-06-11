#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],n,j,temp;
	clrscr();
	printf ("enter the elements of array");
	scanf("%d",&n);
	printf("enter the elements value");
	for(i=1;i<n;i++)
	{
		printf("a[%d]==",i)
		scanf("%d",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf ("stored array");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
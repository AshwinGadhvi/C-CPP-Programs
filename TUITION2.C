#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,odd_count=0,even_count=0,sum=0,a[10];
	clrscr();
	printf ("Enter the Elements::");
	scanf("%d",&n);
	printf ("enter %d elemrnt\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
	}
	printf ("odd_count is %d",odd_count);
	printf ("even_count is %d",even_count);
	getch();
}
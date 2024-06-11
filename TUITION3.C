#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0,a[10];
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
			sum+=a[i];
		}
		else
		{
			sum+=a[i];
		}
	}
	printf ("sum is %d",sum);
	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,find,flag=0,a[10];
	clrscr();
	printf ("Enter the Elements::");
	scanf("%d",&n);
	printf ("enter %d elemrnt\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf ("Enter element to find");
	scanf ("%d",&find);
	for(i=0;i<n;i++)
	{
		if(a[i]==find)
		{
			flag=1;
			printf ("number is found at %d location",i);
			break;
		}
	}
	if(flag==0)
	{
		printf ("element not found");
	}
	getch();
}


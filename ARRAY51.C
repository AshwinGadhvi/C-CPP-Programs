#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],n,odd_count=0,even_count=0;
	clrscr();
	printf ("enter elements");
	scanf("%d",&n);
	printf ("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even_count+=a[i];
		}
		else
		{
			odd_count+=a[i];
		}
	}
	printf ("even_count is %d\n",even_count);
	printf ("odd_count is %d",odd_count);
       //	printf ("sum is %d",sum);
	getch();
}
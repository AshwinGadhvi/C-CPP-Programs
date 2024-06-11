#include<stdio.h>
#include<conio.h>

void main()
{
	void five_sum();
	clrscr();
	printf ("sum of five digit::\n");
	five_sum();
	getch();
}
void five_sum()
{
	int i,sum=0,a;
	printf ("Enter digit::");
	scanf ("%d",&a);
	for(i=1;i<=5;i++)
	{
		sum+=i;
	}
	printf ("sum is %d",sum);


}
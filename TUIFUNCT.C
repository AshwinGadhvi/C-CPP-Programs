#include<stdio.h>
#include<conio.h>

void main()
{
	void five_fact();
	clrscr();
	printf ("fact of five digit::\n");
	five_fact();
	getch();
}
void five_fact()
{
	int i,fact=1,a;
	printf ("Enter digit::");
	scanf ("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	printf ("fact is %d",fact);


}
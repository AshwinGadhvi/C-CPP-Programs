#include<stdio.h>
#include<conio.h>

void main()
{
	void print_1();
	clrscr();
	printf ("1 to 10 print::\n");
	print_1();
	getch();
}
void print_1()
{
	int a,i;
	printf ("Enter digit::");
	scanf ("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf ("%d\n",i);
	}

}
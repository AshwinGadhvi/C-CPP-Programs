#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,sum;
	clrscr();
	printf ("enter a value of a b");
	scanf ("%d%d",&a,&b);
	sum=a+b;
	printf ("sum is %d",sum);
	sum=a-b;
	printf ("\nsub is %d",sum);
	sum=a*b;
	printf ("\nmul is %d",sum);
	sum=a/b;
	printf ("\ndiv is %d",sum);
	sum=a%b;
	printf ("\nmod is %d",sum);
	getch();


}

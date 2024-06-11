#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,mul;
	int *ptr1,*ptr2;
	clrscr();
	printf("Enter Number 1 : ");
	scanf("%d",&a);
	printf("Enter Number 2 : ");
	scanf("%d",&b);
	ptr1=&a;
	ptr2=&b;
	mul=(*ptr1) * (*ptr2);
	printf("multiply is : %d",mul);
	getch();
}
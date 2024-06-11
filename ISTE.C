#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	char op[20];
	clrscr();
	a=10;
	printf("the value of a is : %d\n",a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	fflush(stdin);

	printf("\nEnter both the value : ");
	scanf("%d%d",&c,&d);
	printf("The value of b is : %d",b);
	printf("%d%d\n",c,d);
	printf("Enter Your Name : ");
	scanf("%[^\n]",op);
	printf("\nMy Name is : %s",op);
	getch();
}
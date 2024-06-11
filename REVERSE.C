#include<stdio.h>
#include<conio.h>

void main()
{
	int number,num,rev=0,l_digit;
	clrscr();
	printf("Enter Number : ");
	scanf("%d",&number);
	while(number>=0)
	{
		l_digit=number%10;
		rev=(rev*10)+l_digit;
		num=number/10;
	}
	printf("reverse is : %d",&rev);
	getch();
}
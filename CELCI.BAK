#include<stdio.h>
#include<conio.h>

void main()
{
	char choice;
	int no1,no2;
	clrscr();
	printf ("enter two numbers");
	scanf ("%d%d",&no1,&no2);
	fflush (stdin);
	printf ("+, for sum.\n -, for substract.\n *, for multiply.\n /, for divide. enter your choice");
	scanf ("%c",&choice);

	switch (choice)
	{
		case '+':
			printf ("sum=%d",(no1+no2));
			break;
		case '-':
			printf ("substract=%d",(no1-no2));
			break;
		case '*':
			printf ("multiply=%d",(no1*no2));
			break;
		case '/':
			printf ("divide=%d",(no1/no2));
			break;
		default:
			printf  ("invalid number");
			break;
	}
	getch();
}
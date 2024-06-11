#include<stdio.h>
#include<conio.h>
void main()
{
	int result,num1,num2,c;
	clrscr();
	printf("Enter 2 Numbers : \n");
	scanf("%d %d",&num1,&num2);
	while(1)
	{
		printf("Enter 1 for Addition \n");
		printf("Enter 2 for Subtraction \n");
		printf("Enter 3 for Multiplicatiom \n");
		printf("Enter 4 for Division \n");
		printf("Enter 5 for Exit \n");
		printf("Enter Your Choise \n");
		scanf("%d",&c);
		if(c == 1)
		{
			result = num1 + num2;
			printf("Addition = %d\n",result);
		}else if(c == 2)
		{
			result = num1 - num2;
			printf("Subtraction = %d\n",result);
		}else if (c == 3)
		{
			result = num1 * num2;
			printf("Multiplication = %d\n",result);
		}else if(c == 4)
		{
			result = num1/num2;
			printf("Division = %d\n",result);
		}else if (c == 5)
		{
			exit();
		}
		else
		{
			printf("Invalid Choise");
		}
		getch();
	}
}

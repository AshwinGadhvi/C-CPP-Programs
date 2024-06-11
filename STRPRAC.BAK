#include<stdio.h>
#include<conio.h>

struct list
{
	char name[30];
	long int enroll;
	long int phone;
};

void main()
{
	struct list l1[10];
	int size,i;
	clrscr();
	printf("Enter The Size Of Student : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{

		printf("\n|| Enter %d Information ||\n",i+1);
		printf("\n1.Enter The Name Of Student : ");
		scanf("%s",&l1[i].name);
		printf("2.Enter The Enroll Of Student : ");
		scanf("%ld",&l1[i].enroll);
		printf("3.Enter The Mobile Number : ");
		scanf("%ld",&l1[i].phone);
		printf("***************************************");
	}
	clrscr();
	printf("**********INFORMATION**********\n");
	for(i=0;i<size;i++)
	{
		printf("\n||Information of %d Student||\n",i+1);
		printf("\n1.Name Of Student : %s\n",l1[i].name);
		printf("2.Enrollment Of Student : %ld\n",l1[i].enroll);
		printf("3.Enter The Mobile Number : %ld\n",l1[i].phone);
		printf("***************************************");
	}
	getch();
}
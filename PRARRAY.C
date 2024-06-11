#include<stdio.h>
#include<conio.h>

void read_array(char str[],int *n)
{
	int i;
	printf("How Many Element To Store::");
	scanf("%d",&(*n));
	printf("Enter %d element",*n);
	for(i=0;i<(*n);i++)
	{
		scanf("%d",&str[i]);
	}
}

void display_array(char str[],int n)
{
	int i;
	printf("Enter %d element\n",n);
	for(i=0;i<n;i++)
	{
		printf(" %d\n",str[i]);
	}
}

void main()
{
	int choise,n;
	char str[100];
	while(1)
	{
		clrscr();
		printf("1.For Read array\n2.For Display array\n3.For Insert element\n4.For Delete element\n5.For Search element\n7.For Binary search\n8.For Exit\n\nEnter your choise:-");
		scanf("%d",&choise);
		switch(choise)
		{
			case 1:
				read_array(str,&n);
				break;
			case 2:
				display_array(str,n);
				break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;
			case 6:
			break;
			case 7:
			break;
			case 8:
				exit(0);
			break;
		}
		getch();
	}

}
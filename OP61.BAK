#include<stdio.h>
#include<conio.h>
#include<process.h>

void read_array(int a[],int *n)
{
	int i;
	printf ("enter element::");
	scanf("%d",&(*n));
	printf ("enter %d element",*n);
	for(i=0;i<(*n);i++)
	{
		scanf("%d",&a[i]);
	}
}

void display_array(int a[],int n)
{
	int i;
	printf ("enter number::",n);
	for(i=0;i<n;i++)
	{
		printf (" %d",a[i]);
	}
}

void insert_array(int a[],int *n)
{
	int pos,val,i;
	printf ("enter pos::");
	scanf ("%d",&pos);
	printf ("enter val::");
	scanf ("%d",&val);
	for(i=pos;i<(*n);i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n++;
}


void main()
{
	int n,i,choice,a[100];
	while(1)
	{
		clrscr();
		printf("1.for read\n2.for display\n3.for insert\n4.for delete\n5.for search\n6.for sort\n7.for exit\n\nEnter your choice::");
		scanf ("%d",&choice);
		switch(choice)
		{
			case 1:
				read_array(a,&n);
				break;
			case 2:
				display_array(a,n);
				break;
			case 3:
				insert_array(a,&n);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				exit (0);
			break;
			default:
				printf ("invalid choice::");
				break;
		}
		getch();
	}

}

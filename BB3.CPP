#include<iostream.h>
#include<conio.h>
#include<process.h>

void read(int a[],int *n)
{
	cout<<"Enter array : "<<endl;
	int i;
	cout<<"Enter the value of n : ";
	cin>>*(n);
	for(i=0;i<*(n);i++)
	{
		cin>>a[i];
	}

}

void display(int a[],int *n)
{
	int i;
	cout<<"Array is : "<<endl;
	for(i=0;i<*(n);i++)
	{
		cout<<a[i];
		cout<<endl;
	}

}

void insert(int a[],int *n)
{
	int i,val,pos;
	cout<<"Enter pos : ";
	cin>>pos;
	cout<<"Enter val : ";
	cin>>val;
	for(i=(*n);i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=val;
	*(n)++;
}

/*void delete2(int a[],int *n)
{
	int i,pos;
	cout<<"Enter pos : ";
	cin>>pos;

	for(i=pos;i<=*(n);i++)
	{
		a[i-1]=a[i];
	}
	*(n)--;
} */

void main()
{
	int choice,*a,*n;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"1.For read\n2.For insert\n3.For delete\n4.For deisplay\n5.For exit\nEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				read(a,n);
				break;
			case 2:
				insert(a,n);
				break;
			case 3:
		 //		delete2(a,n);
				break;
			case 4:
				display(a,n);
				break;
			case 5:
				exit(0);
				break;
			default:
				cout<<"invalid choice : ";
				break;
		}
		getch();
	}
}
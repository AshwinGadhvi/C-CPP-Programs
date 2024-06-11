#include<iostream.h>
#include<conio.h>
#include<process.h>


void push(int *top,int a[],int *n)
{
	int val;
	if(*(top)>=*(n)-1)
	{
		cout<<"Stack is overflow : "<<endl;
	}
	else
	{
		cout<<"Enter Value : ";
		cin>>val;
		*(top)=*(top)+1;
		a[*(top)]=val;
	}
}

void pop(int *top,int a[])
{
	int val;
	if(*(top)==-1)
	{
		cout<<"Stack is empty : ";
	}
	else
	{
		val=a[*(top)];
		*(top)=*(top)-1;
		cout<<"DEleted value is : "<<val;
	}
}

void display(int *top,int a[])
{
	int i;
	if(*(top)==-1)
	{
		cout<<"stack is empty : ";
	}
	else
	{
		for(i=0;i<=*(top);i++)
		{
			cout<<a[i]<<endl;
		}
	}

}

void main()
{
	int *a,n,top=-1,i,choice;
	clrscr();
	cout<<"Enter N : ";
	cin>>n;
	while(1)
	{
		clrscr();
		cout<<"1.For Push\n2.For Pop\n3.For Display\n4.Exit\nEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			 case 1:
				push(&top,a,&n);
				break;
			 case 2:
				pop(&top,a);
				break;
			 case 3:
				display(&top,a);
				break;
			 case 4:
				exit(0);
			 default:
				cout<<"Invalid choice : ";
				break;
		}
		getch();
	}
}
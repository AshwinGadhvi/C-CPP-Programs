#include<iostream.h>
#include<conio.h>
#include<process.h>

void read(int a[],int *n)
{
	int i;
	cout<<"Enter How Many Element You Need : ";
	cin>>(*n);
	cout<<"Enter "<<(*n)<<" Element : "<<endl;
	for(i=0;i<(*n);i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}

void display(int a[],int *n)
{
	int i;
	cout<<"Enterd Element's are : "<<endl;
	for(i=0;i<(*n);i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}

void insert(int a[],int *n)
{
	int i,pos,val;
	cout<<"Enter Position For insertion : ";
	cin>>pos;
	cout<<"Enter Value For Insertion : ";
	cin>>val;
	for(i=(*n);i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=val;
	(*n)++;
}

void deletee(int a[],int *n)
{
	int i,pos;
	cout<<"Enter Pos For Deletion : ";
	cin>>pos;
	for(i=pos;i<=(*n);i++)
	{
		a[i]=a[i+1];
	}
	(*n)--;
}

void search(int a[],int *n)
{
	int i,val,flag=0;
	cout<<"Enter Value For Search : ";
	cin>>val;
	for(i=0;i<(*n);i++)
	{
		if(a[i]==val)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Value Found At Postion : "<<i+1;
	}
	if(flag==0)
	{
		cout<<"Value Not Found : ";
	}
}

void binary(int a[],int *n)
{
	int i,low=0,high=(*n)-1,mid,val,flag=0;
	cout<<"Enter VAlue For Search : ";
	cin>>val;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]>val)
		{
			high=mid-1;
		}
		else if(a[mid]<val)
		{
			low=mid+1;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Element Found at : "<<mid+1;
	}
	if(flag==0)
	{
		cout<<"Element Not Found : ";
	}
}

void main()
{
	int *a,n,choice;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"1.For Read\n2.For Diplay\n3.For Insertion\n4.For Deletion\n5.For Search\n6.For binary Search\n7.For Exit\nEnter Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				read(a,&n);
				break;
			case 2:
				display(a,&n);
				break;
			case 3:
				insert(a,&n);
				break;
			case 4:
				deletee(a,&n);
				break;
			case 5:
				search(a,&n);
				break;
			case 6:
				binary(a,&n);
				break;
			case 7:
				exit(0);
				break;
			default:
				cout<<"Invalid Choice : ";
				break;
		}
		getch();
	}
}
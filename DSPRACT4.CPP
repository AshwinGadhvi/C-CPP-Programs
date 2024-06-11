#include<iostream.h>
#include<conio.h>

void main()
{
	int i,n,a[20],value,flag=0;
	clrscr();
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"Enter element "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	cout<<"Performing prg : "<<endl;
	cout<<"Enter value for search : ";
	cin>>value;
	for(i=0;i<n;i++)
	{
		if(value==a[i])
		{
			flag=0;
			break;
		}
		else
		{
		       flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"Value not found : ";
	}
	else
	{
		cout<<"Value found at "<<i+1;
	}
	getch();
}
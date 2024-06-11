#include<iostream.h>
#include<conio.h>
void main()
{
	int a[20],i,j,n,temp,low=0,high=n-1,mid,x,flag=0;
	clrscr();
	cout<<"Enter Array size : ";
	cin>>n;
	cout<<"---ENTER ARRAY---"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"---UNSORTED ARRAY---"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"---SORTED ARRAY---"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	cout<<"Enter value to search : "<<endl;
	cin>>x;
	while(low<=high)
	{
		mid=(low + high)/2;
		if(a[mid]>x)
		{
			high=mid-1;
		}
		else if(a[mid]<x)
		{
			low=mid+1;
		}
		else
		{
			flag=1;
			cout<<"element found at : "<<mid+1;
			break;
		}


	}
	if(flag==0)
	{
		cout<<"element not found::";
	}
	getch();
}
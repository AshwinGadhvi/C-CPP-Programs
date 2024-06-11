#include<iostream.h>
#include<conio.h>

void main()
{
	int a[20],i,j,n,temp;
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
	getch();
}
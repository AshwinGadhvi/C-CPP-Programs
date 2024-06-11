#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,a[50],n,temp=0;
	clrscr();
	cout<<"Enter size of array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array before sort : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	cout<<"Performing sort : "<<endl;
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
	cout<<"Sorted array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	getch();
}
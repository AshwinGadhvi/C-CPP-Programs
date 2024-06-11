#include<iostream.h>
#include<conio.h>

void min(int a[],int n)
{
	int i,min;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"ARRAY is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}

	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<a[0])
		{
			min=a[i];
		}
	}
	cout<<endl<<"Minimum is : "<<min<<endl;
}

void main()
{
	int *a,n;
	clrscr();
	cout<<"Enter size of array : ";
	cin>>n;
	min(a,n);
	getch();
}
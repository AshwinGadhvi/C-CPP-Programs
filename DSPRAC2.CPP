#include<iostream.h>
#include<conio.h>

void main()
{
	int i,pos,n,a[50];
	clrscr();
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"Enter "<<n<<" Element "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Entered Array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	cout<<"Enter pos to delete : ";
	cin>>pos;
	for(i=pos;i<=n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	cout<<"After program Array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	getch();
}
#include<iostream.h>
#include<conio.h>

void main()
{
	int *a,i,n,pos;
	clrscr();
	cout<<"Enter Size Of Array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"Array Is "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"Enter Pos To delete : ";
	cin>>pos;
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	cout<<endl<<"After Delete Array Is "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	getch();
}
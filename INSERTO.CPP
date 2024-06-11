#include<iostream.h>
#include<conio.h>

void main()
{
	int a[20],i,n,pos,val;
	clrscr();
	cout<<"Enter Array size : ";
	cin>>n;
	cout<<"---ENTER ARRAY---"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"---ENTERED ARRAY IS---"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	cout<<"---PERFORM PROGRAM---"<<endl;
	cout<<"Enter Pos To insert value : ";
	cin>>pos;
	cout<<"Enter Val to insert pos   : ";
	cin>>val;

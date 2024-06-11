#include<iostream.h>
#include<conio.h>

void main()
{
	int a[10];
	int length,i,sum=0;
	clrscr();
	cout<<"Enter Number Of Elements In Array : ";
	cin>>length;
	for(i=0;i<length;i++)
	{
		cout<<"Enter Element A["<<i<<"] : ";
		cin>>a[i];
		cout<<endl;
	}
	for(i=0;i<length;i++)
	{
		cout<<"Entered Elements Are : "<<endl;
		cout<<a[i]<<endl;
	}
	for(i=0;i<length;i++)
	{
		sum+=a[i];
	}
	cout<<"Sum Of All Elements Are : "<<sum;
	getch();


}
#include<iostream.h>
#include<conio.h>

void main()
{
	int i=0,a[20],sum=0,num;
	clrscr();
	cout<<"Enter Number : ";
	cin>>num;
	cout<<"Enter "<<num<<" Numbers : "<<endl;
	for(i=0;i<num;i++)
	{
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
		sum+=a[i];
	}
	for(i=0;i<num;i++)
	{
		cout<<"a["<<i<<"]: "<<a[i]<<endl;

	}
	cout<<"Total Sum is : "<<sum<<endl;
	cout<<"Avg is : "<<sum/num;
	getch();
}
#include<iostream.h>
#include<conio.h>

void main()
{
	int i=0,a[20],j,num,temp,search;
	clrscr();
	cout<<"Enter Number : ";
	cin>>num;
	cout<<"Enter "<<num<<" Numbers : "<<endl;

	for(i=0;i<num;i++)
	{
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted Array is : "<<endl;
	for(i=0;i<num;i++)
	{
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
	getch();
}
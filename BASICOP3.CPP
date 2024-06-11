#include<iostream.h>
#include<conio.h>

void main()
{
	int a[20],n,i,max,min,temp;
	clrscr();
	cout<<"Enter array size : ";
	cin>>n;
	cout<<"Enter "<<n<<" Elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Entered Array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
	max=0;
	min=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
		if(a[i]<a[min])
		{
			min=i;
		}
	}
	temp=a[max];
	a[max]=a[min];
	a[min]=temp;
	cout<<"After exechange : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
		cout<<a[i];
		if(i==min)
		{
			cout<<"Maximum : ";
		}
		if(i==max)
		{
			cout<<"minimum : ";
		}
		cout<<endl;
	}
	getch();
}
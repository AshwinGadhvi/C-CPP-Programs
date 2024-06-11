#include<iostream.h>
#include<conio.h>

void main()
{
	int a[20],n,i,max;
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
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"Maximum is : "<<max;
	getch();
}
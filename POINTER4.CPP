#include<iostream.h>
#include<conio.h>

void main()
{
	int i,n,a[20],sum,*p;
	clrscr();
	cout<<"Enter Array size : ";
	cin>>n;
	cout<<"Enter "<<n<<" Elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"Entered Array is  : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}
	p=a;
	for(i=0;i<n;i++)
	{
		sum+=*p;
		p++;
	}
	cout<<"Sum is : "<<sum;
	getch();
}
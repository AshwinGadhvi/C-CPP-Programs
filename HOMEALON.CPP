//create one dimensional array

#include<iostream.h>
#include<conio.h>

void main()
{
	int *a,n,i;
	clrscr();
	cout<<"Enter size of array : ";
	cin>>n;
	a=new int[n];
	cout<<"Read array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Entered array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
	delete [] a;
	getch();
}
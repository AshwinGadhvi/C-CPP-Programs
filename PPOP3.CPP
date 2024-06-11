#include<iostream.h>
#include<conio.h>

void array(int a[],int *n)
{
	int i;
	for(i=0;i<*(n);i++)
	{
		cin>>a[i];
	}
	cout<<"Entered Element Are : ";
	for(i=0;i<*(n);i++)
	{
		cout<<a[i]<<endl;
	}
}

void main()
{
	int *a,n;
	clrscr();
	cout<<"Enter Size of Element : ";
	cin>>n;
	array(a,&n);
	getch();

}
#include<iostream.h>
#include<conio.h>

void main()
{
	int i,n,j;
	clrscr();
	cout<<"enter number";
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || j==0)
			{
				cout<<"* ";
			}
			else
			{
				cout<<" ";
			}
		}
	}
	getch();
}

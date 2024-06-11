#include<iostream.h>
#include<conio.h>

int prime(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}

void main()
{
	int i,max;
	clrscr();
	cout<<"enter upper bound for prime number::";
	cin>>max;
	for(i=1;i<max;i++)
	{
		if(prime(i)==0)
		{
			cout<<i<<" ";
		}
	}
	getch();
}
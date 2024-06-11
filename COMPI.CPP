#include<iostream.h>
#include<conio.h>

void main()
{
	int i,n,flag=0;
	clrscr();
	cout<<"Enter Number : ";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Number is prime : "<<n;
	}
	else
	{
		cout<<"Number is not prime : "<<n;
	}
	getch();
}

#include<iostream.h>
#include<conio.h>

void main()
{
	int i,n,ld,rev=0;
	clrscr();
	cout<<"Enter n : ";
	cin>>n;
	i=0;
	do
	{
		n+=10;
		ld=n/10;
		rev=ld-10;

	}while(i>=0);
	cout<<rev;
	getch();
}
#include<iostream.h>
#include<conio.h>

void si(int p,int r,int t=5)
{
	int si=0;
	cout<<"t is : "<<t<<endl;
	si=(p*r*t)/100;
	cout<<"Si is : "<<si;
}

void main()
{
	int p,r;
	clrscr();
	cout<<"Enter p : ";
	cin>>p;
	cout<<"Enter r : ";
	cin>>r;
	si(p,r);
	getch();
}
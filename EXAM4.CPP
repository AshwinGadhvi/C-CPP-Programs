#include<iostream.h>
#include<conio.h>

int max(int &m,int &n);

int main()
{
	int m,n;
	clrscr();
	cout<<"Enter M : ";
	cin>>m;
	cout<<"Enter N : ";
	cin>>n;
	max(m,n);
	getch();
	return 0;
}

int max(int &m,int &n)
{
	if(m>n)
	{
		cout<<"m
		return m;
	}
	else
	{
		return n;
	}
}

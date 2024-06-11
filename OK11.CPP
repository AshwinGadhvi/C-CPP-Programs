#include<iostream.h>
#include<conio.h>

void main()
{
	int i,a=0,b=1,c,number;
	clrscr();
	cout<<"Enter Number range : ";
	cin>>number;
	for(i=2;i<number;i++)
	{
		c = a+b;
		cout<<c<<endl;
		a = b;
		b = c;
	}
	getch();
}
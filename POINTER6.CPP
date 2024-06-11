#include<iostream.h>
#include<conio.h>

void change(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void main()
{
	int x,y;
	clrscr();
	x=100;
	y=200;
	cout<<"Before Change : "<<endl;
	cout<<"X is : "<<x<<endl;
	cout<<"Y is : "<<y<<endl;
	chamge(&x,&y);
	cout<<"After Chamge : "<<endl;
	cout<<"X is : "<<x<<endl;
	cout<<"Y is : "<<y<<endl;
	getch();
}

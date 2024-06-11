#include<iostream.h>
#include<conio.h>

void si(float p,float r=6,float n=5)
{
	cout<<"si is"<<(p*r*n)/100;
}

int main()
{
	float p;
	clrscr();
	cout<<"enter p::";
	cin>>p;
	si(p);
	getch();
	return 0;
}
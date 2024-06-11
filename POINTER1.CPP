#include<iostream.h>
#include<conio.h>

void main()
{
	int op;
	char a;
	float waah;
	clrscr();
	a='A';
	op=269;
	waah=15.13;
	cout<<a<<" is stored at : "<<&a<<endl;
	cout<<op<<" is stored at : "<<&op<<endl;
	cout<<waah<<" is stored at : "<<&waah;
	getch();
}
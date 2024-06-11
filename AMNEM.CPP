#include<iostream.h>
#include<constrea.h>
#include<conio.h>


void main()
{
	char name[20],name2[20];
	clrscr();
	cout<<"\033[0;32m";
	cout<<"Enter Name for connect to the server : ";
	cin>>name;
	cout<<"Enter Id For Connect to the server : ";
	cin>>name2;
	//prinft(\033[0m");

	cout<<"\033[0;31m";
	constream cout;
	cout<<setclr(500);
	cout<<"Successfully connect to the server...";
	getch();
}
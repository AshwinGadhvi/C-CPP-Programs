#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
	ifstream fin;
	char fname[20];
	char rec[80];
	clrscr();

	cout<<"Enter File name : ";
	cin>>fname;
	cout<<"The File contains:\n";
	fin.open(fname,ios::in);
	fin.get(rec,80);
	cout<<rec;

	fin.close();
	getch();
}
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
	ofstream fout;
	char fname[20];
	char rec[80];
	clrscr();

	cout<<"Enter File name : ";
	cin>>fname;
	fout.open(fname,ios::out);
	cout<<"Enter a word : ";
	cin>>rec;
	cout<<"Data inserted : successfully...!!";
	fout.close();
	getch();
}
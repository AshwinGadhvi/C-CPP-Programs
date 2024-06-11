#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
	char *name;
	int length=0,i;
	clrscr();
	cout<<"Enter String : ";
	gets(name);
	for(i=0;name[i]!=NULL;i++)
	{
		cout<<&name<<endl;
		length++;
	}
	cout<<"Legth of string is : "<<length;
	getch();
}
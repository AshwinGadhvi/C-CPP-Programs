#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j;
	char str[20],temp[20];
	clrscr();
	cout<<"Enter string for copy : ";
	cin>>str;
	cout<<"String is : "<<str<<endl;
	cout<<"Performing string copy : "<<endl;
	for(i=0,j=0;str[i]!=NULL;i++,j++)
	{
		temp[j]=str[i];
	}
	temp[j]=NULL;
	cout<<"String is copy : "<<temp;
	getch();
}
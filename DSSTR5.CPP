#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,start,end;
	char str[20],temp[20];
	clrscr();
	cout<<"Enter string : ";
	cin>>str;
	cout<<"String is : "<<str<<endl;
	cout<<"Performing string Sub-string : "<<endl;
	cout<<"Enter Start : ";
	cin>>start;
	cout<<"Enter end : ";
	cin>>end;
	for(i=start,j=0;i<=end;i++,j++)
	{
		temp[j]=str[i];
	}
	temp[j]=NULL;
	cout<<"Sub-String is : "<<temp;
	getch();
}
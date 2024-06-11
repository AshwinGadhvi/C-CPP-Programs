#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,k,pos;
	char str1[20],str2[20],str3[20];
	clrscr();
	cout<<"Enter string : ";
	cin>>str1;
	cout<<"string is : "<<str1<<endl;
	cout<<"Performing insertion : "<<endl;
	cout<<"Enter string to insert : ";
	cin>>str2;
	cout<<"Enter pos : ";
	cin>>pos;
	for(i=0,k=0;i<pos;i++,k++)
	{
		str3[k]=str1[i];
	}
	str3[k]=NULL;
	for(j=0,k=pos;str2[j]!=NULL;j++,k++)
	{
		str3[k]=str2[j];
	}
	str3[k]=NULL;
	for(i=pos,k=strlen(str3);str1[i]!=NULL;i++,k++)
	{
		str3[k]=str1[i];
	}
	str3[k]=NULL;
	cout<<"String is : "<<str3;
	getch();
}
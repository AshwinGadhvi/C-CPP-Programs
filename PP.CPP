#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,c=0,j,flag=0;
	char a[20],b[20];
	clrscr();
	cout<<"enter string::";
	cin>>a;
	cout<<a;
	for(i=0;a[i]!=NULL;i++)
	{
		c++;
	}
	cout<<"\nlength is "<<c;
	for(i=c-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	b[j]=NULL;
	cout<<"\nreverse is "<<b;
	for(i=0;a[i]!=NULL;i++)
	{
		for(i=c-1,j=0;i>=0;i--,j++)
		{
		       if(a[i]==b[i])
		       {
				flag=1;
		       }
		       else
		       {
				flag=0;
		       }
		}
	}
	if(flag==1)
	{
		cout<<"\npalindrome::";
	}
	if(flag==0)
	{
		cout<<"\nnot pelindrome::";
	}
	getch();
}
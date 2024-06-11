#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,l1,l2,flag=0;
	char str[20],temp[20];
	clrscr();
	cout<<"Enter string Normal : ";
	cin>>str;
	cout<<"String is : "<<str<<endl;
	cout<<"Performing string compared : "<<endl;
	cout<<"Enter string For compared : ";
	cin>>temp;
	l1=strlen(str);
	l2=strlen(temp);
	if(l1==l2)
	{
		for(i=0;str[i]!=NULL;i++)
		{
			if(str[i]==temp[i])
			{
			       flag=1;
			       break;
			}
			else
			{
				flag=0;
			}
		}
	}
	if(flag==1)
	{
		cout<<"Both are same : ";
	}
	else
	{
		cout<<"Both are diffrent : ";
	}
	getch();
}

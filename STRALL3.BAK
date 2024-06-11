#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>

void readstr(char str1[])
{
	cout<<"Enter String : ";
	gets(str1);
}

void displaystr(char str1[])
{
	cout<<"Entered String : ";
	puts(str1);
}

void lengthstr(char str1[])
{
	int i,count=0;
	for(i=0;str1[i]!=NULL;i++)
	{
		count++;
	}
	cout<<"Length of String is : "<<count;
}

void copystr(char str1[])
{
	char str2[20];
	int i,j;
	for(i=0,j=0;str1[i]!=NULL;i++,j++)
	{
		str2[j]=str1[i];
	}
	str2[j]=NULL;
	cout<<"Copy String is : "<<str2;
}

void reversestr(char str1[])
{
	char str3[20];
	int i,j;
	for(i=strlen(str1)-1,j=0;i>=0;i--,j++)
	{
		str3[j]=str1[i];
	}
	str3[j]=NULL;
	cout<<"String Reverse is : "<<str3;
}

void compstr(char str1[])
{
	char str5[30];
	int l1,l2,i,flag=0;
	cout<<"Enter string for compare : ";
	gets(str5);
	l1=strlen(str1);
	l2=strlen(str5);
	if(l1==l2)
	{
		for(i=0;str1[i]!=NULL;i++)
		{
			if(str1[i]==str5[i])
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
		cout<<"Both are same : ";
	}
	if(flag==0)
	{
		cout<<"Both are diffrent : ";
	}
}

void main()
{
	char *str1;
	int i,choice;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"1.For string read\n2.For string display\n3.For string length\n4.For string copy\n5.For string reverse\n6.For string Compare\n7.For exit\nEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				readstr(str1);
				break;
			case 2:
				displaystr(str1);
				break;
			case 3:
				lengthstr(str1);
				break;
			case 4:
				copystr(str1);
				break;
			case 5:
				reversestr(str1);
				break;
			case 6:
				compstr(str1);
				break;
			case 7:
				exit(0);
				break;
			default:
				cout<<"Invalid choice : ";
				break;
		}
		getch();
	}
}
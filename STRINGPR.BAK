#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>

void read(char str[])
{
	cout<<"Enter String : ";
	gets(str);
}

void display(char str[])
{
	cout<<"Entered String is : "<<str;
}

void length(char str[])
{
	int i,count=0;
	for(i=0;str[i]!=NULL;i++)
	{
		count++;
	}
	cout<<"Length of entered string is : "<<count;
}

void copyop(char str[],char copy[])
{
	int i,j;
	for(i=0,j=0;str[i]!=NULL;i++,j++)
	{
		copy[j]=str[i];
	}
	copy[j]=NULL;
	cout<<"Copied String is : "<<copy;
}

void concate(char str[],char copy[])
{
	char concate[20];
	int i,j,k=0;
	cout<<"Enter String For Concate : ";
	gets(copy);
	for(i=0;str[i]!=NULL;i++)
	{
		concate[k]=str[i];
		k++;
	}
	for(j=0;copy[j]!=NULL;j++)
	{
		concate[k]=copy[j];
		k++;
	}
	concate[k]=NULL;
	cout<<"Concatation of two String is : "<<concate;
}

void sub(char str[])
{
	char subway[30];
	int i,j,pos,end;
	cout<<"Enter Pos : ";
	cin>>pos;
	cout<<"Enter End : ";
	cin>>end;
	for(i=pos,j=0;i<=end;i++,j++)
	{
		subway[j]=str[i];
	}
	subway[j]=NULL;
	cout<<"Sub-String is : "<<subway;
}

void compare(char str[])
{
	char comp[20];
	int i,j,l1,l2,flag=0;
	cout<<"Enter String For Compare : ";
	gets(comp);
	l1=strlen(str);
	l2=strlen(comp);
	if(l1==l2)
	{
		for(i=0;str[i]!=NULL;i++)
		{
			if(str[i]==comp[i])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	else
	{
		flag=0;
	}
	if(flag==1)
	{
		cout<<"Both Are Same : ";
	}
	if(flag==0)
	{
		cout<<"Both are different : ";
	}
}

void upper(char str[])
{
	char up[30];
	int i,j;
	for(i=0,j=0;str[i]!=NULL;i++,j++)
	{
		if((str[i]>='a') && (str[i]<='z'))
		{
			up[j]=str[i]-32;
		}
		else
		{
			up[j]=str[i];
		}
	}
	up[j]=NULL;
	cout<<"Upper string is : "<<up;
}


void lower(char str[])
{
	char up[30];
	int i,j;
	for(i=0,j=0;str[i]!=NULL;i++,j++)
	{
		if((str[i]>='A') && (str[i]<='Z'))
		{
			up[j]=str[i]+32;
		}
		else
		{
			up[j]=str[i];
		}
	}
	up[j]=NULL;
	cout<<"Upper string is : "<<up;
}

void reverse(char str[])
{
	char rev[20];
	int i,j=0;
	for(i=strlen(str)-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	rev[j]=NULL;
	cout<<"Reverse is : "<<rev;
}

void insertion(char str[])
{
	char str3[30],str2[30];
	int i,j,k,pos;
	cout<<"Enter String For Insertion : ";
	gets(str2);
	cout<<"Enter Pos : ";
	cin>>pos;
	for(i=0,k=0;i<=pos;i++,k++)
	{
		 str3[k]=str[i];
	}
	str3[k]=NULL;
	for(j=0,k=strlen(str3);str2[j]!=NULL;j++,k++)
	{
		str3[k]=str2[j];
	}
	str3[k]=NULL;
	for(i=pos+1,k=strlen(str3);str[i]!=NULL;i++,k++)
	{
		str3[k]=str[i];
	}
	str3[k]=NULL;
	cout<<"After insertion string is : "<<str3;

}

void deletion(char str[])
{
	char str2[30];
	int i,j,pos,count;
	cout<<"Enter Pos : ";
	cin>>pos;
	cout<<"Enter Count : ";
	cin>>count;
	for(i=pos,j=0;i<=count;i++,j++)
	{
		str2[j]=str[i];
	}
	str2[j]=NULL;
	cout<<"DEleted String is : "<<str2;
}


void main()
{
	char *str,*copy;
	int choice;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"1.For Read String\n2.For Display String\n3.For String Length\n4.For String Copy\n5.For String Concate\n6.For Sub-String\n7.For String Compare\n8.For String Upper\n9.For String Lower\n10.For String Reverse\n11.For String Insertion\n12.For String Deletion\n13.For exit\nEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				read(str);
				break;
			case 2:
				display(str);
				break;
			case 3:
				length(str);
				break;
			case 4:
				copyop(str,copy);
				break;
			case 5:
				concate(str,copy);
				break;
			case 6:
				sub(str);
				break;
			case 7:
				compare(str);
				break;
			case 8:
				upper(str);
				break;
			case 9:
				lower(str);
				break;
			case 10:
				reverse(str);
				break;
			case 11:
				insertion(str);
				break;
			case 12:
				deletion(str);
				break;
			case 13:
				exit(0);
				break;
			default:
				cout<<"Invalid Choice : ";
				break;
		}
		getch();
	}

}
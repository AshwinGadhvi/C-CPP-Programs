#include<stdio.h>
#include<conio.h>
#include<string.h>

void getstring(char *str,char *str3)
{
	printf ("Enter string::");
	gets(str);
	printf ("Enter 2nd string::");
	gets(str3);
}

void readstring(char *str)
{
	printf ("String is::\n");
	puts(str);
}

void stringlen(char *str)
{
	int i,count=0;
	for(i=0;str[i]!=NULL;i++)
	{
		count++;
	}
	printf ("Length is %d",count);
}

void stringcopy(char *str,char *str2)
{
	int i,j;
	for(i=0,j=0;str[i]!=NULL;i++,j++)
	{
		str2[j]=str[i];
	}
	str2[j]=NULL;
	printf ("Copy string %s",str2);
}

void stringrev(char *str,char *str2)
{
	int i,j;
	for(i=strlen(str)-1,j=0;i>=0;i--,j++)
	{
		str2[j]=str[i];
	}
	str2[j]=NULL;
	printf ("String rev %s",str2);
}

void stringcon(char *str,char *str2,char *str3)
{
	int i=0,j=0,k=0;
	while(str[i]!=NULL)
	{
		str2[j]=str[i];
		i++;
		j++;
	}
	str2[j]=NULL;
	while(str[k]!=NULL)
	{
		str2[j]=str3[k];
		j++;
		k++;
	}
	str2[j]=NULL;
	printf("String concate is %s",str2);
}
void stringsub(char str[],char str4[],int s,int e)
{
	int i,j;

	printf ("enter start:");
	scanf("%d",&s);
	printf ("enter end:");
	scanf("%d",&e);
	for(i=s,j=0;i<=e;i++,j++)
	{
		str4[j]=str[i];
	}
	str4[j]=NULL;
	printf ("Sub-string is %s",str4);

}
void upper(char str[])
{
	int i=0;
	while(str[i]!=NULL)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
			i++;
		}
	}
	printf("Upper string is %s",str);
}
void lower(char str[])
{
	int i=0;
	while(str[i]!=NULL)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
			i++;
		}
	}
	printf("lower string is %s",str);
}
int strcompare(char str[])
{
	char str2[100];
	int l1,l2,i=0;
	printf("Enter string to compare::");
	gets(str2);
	l1=strlen(str);
	l2=strlen(str2);
	if(l1!=l2)
	{
		return 1;
	}
	else
	{
		while(str[i]!=NULL)
		{
			if(str[i]!=str2[i])
			{
				return 1;
			}
			i++;
		}
	}
	return 0;
}
void insertstring(char str[])
{
	char str1[100],str2[100],str3[100];
	int i=0,pos,j=0,k=0;
	printf("Enetr string to insert::");
	gets(str1);
	printf("Enter position to insert::");
	scanf("%d",&pos);
	while(i<pos)
	{
		str3[k]=str[i];
		i++;
		k++;
	}
	while(str1[j]!=NULL)
	{
		str3[k]=str[i];
		i++;
		k++;
	}
	while(str[pos]!=NULL)
	{
		str3[k]=str2[j];
		pos++;
		j++;
	}
	str3[k]=NULL;
	i=0;
	while(str3[i]!=NULL)
	{
		str[i]=str3[i];
		i++;
	}
	str[i]=NULL;
	printf("INserted string is %s",str);

}
void main()
{
	char *str,*str2,*str3,*str4;
	int choice,e,s;
	while(1)
	{
		clrscr();
		printf ("(1).For read string\n(2)For string length\n(3)For string copy\n(4)For string Reverse\n(5)For string concate\n(6)For string compare\n(7)For Sub-string\n(8)For insert String\n(9)For string delete\n(10)TO upper\n(11)TO lower\n(12)To toggle\n(13)To read string\n(14)For Exit\nEnter your choice:");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice)
		{
			case 1:
				getstring(str,str3);
				break;
			case 2:
				stringlen(str);
				break;
			case 3:
				stringcopy(str,str2);
				break;
		       case 4:
				stringrev(str,str2);
				break;
			case 5:
				stringcon(str,str2,str3);
				break;
			case 6:
				if(strcompare(str)==0)
				{
					printf("Both are same");
				}
				else
				{
					printf("String is not same:");
				}
				break;
			case 7:
				stringsub(str,str2,s,e);
				break;
			case 8:
				insertstring(str);
				break;
			case 9:
				break;
			case 10:
				upper(str);
				break;
			case 11:
				lower(str);
				break;
			case 12:

				break;
			case 13:
				readstring(str);
				break;
			case 14:
				exit(0);
				break;
			default:
				printf("Invalid choice::");
				break;
		}
		getch();
	}

}

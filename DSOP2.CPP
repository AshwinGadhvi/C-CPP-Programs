#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j;
	char str[50],temp[50];
	clrscr();
	printf("Enter string : ");
	gets(str);
	printf("String is : %s ",str);
	for(i=strlen(str);i>=0;i--)
	{
		for(j=0;str[i]!=NULL;j++)
		{
			temp[j]=str[i];
		}
	}
	temp[j]=NULL;
	printf("\nREverse of string is : %s",temp);
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,flag=0;
	char a[20],b[20];
	clrscr();
	printf("Enter a String 1 : ");
	gets(a);
	printf("Enter a string 2 : ");
	gets(b);
	if(strlen(a)==strlen(b))
	{
		for(i=0,j=0;i<strlen(a)-1;i++,j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
	}
	else
	{
		printf("Both Are diffrent : ");
	}
	if(flag==1)
	{
		printf("Both are same : ");
	}
	else
	{
		printf("Both are diff");
	}

	getch();
}
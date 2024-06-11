#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	char str[100],*s;
	int i;
	clrscr();
	cout<<"Enter string : ";
	gets(str);
	s=&str[0];
	for(i=0;str[i]!=NULL;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]-=32;
		}
	}
	for(i=0;str[i]!=NULL;i++)
	{
		cout<<s[i];
	}
	getch();
	return 0;
}
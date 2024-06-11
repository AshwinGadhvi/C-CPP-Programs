#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	char str1[50],temp[50];
	clrscr();
	printf("Enter String : ");
	scanf("%[^\n]",str1);
	for(i=0,j=0;str1[i]!=NULL;i++,j++)
	{
		temp[j]=str1[i];
	}
	temp[j]=NULL;
	printf("copy string is : %s",temp);
	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k=0;
	char str1[30],str2[30],str3[30];
	clrscr();
	printf("Enter String 1 : ");
	gets(str1);
	printf("Enter String 2 : ");
	gets(str2);
	for(i=0;str1[i]!=NULL;i++)
	{
		str3[k]=str1[i];
		k++;
	}
     //	str3[k]=NULL;
	for(j=0;str2[j]!=NULL;j++)
	{
		str3[k]=str2[j];
		k++;
	}
	str3[k]=NULL;
	printf("Concate is : %s",str3);
	getch();
}
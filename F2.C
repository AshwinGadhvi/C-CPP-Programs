#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *fw;
	int i=0;
	char name[30];
	clrscr();
	fw=fopen("ADD.BAK","w");
	printf ("enter your name::");
	gets(name);
	if(!fw)
	{
		printf ("unable to open file");
	}
	else
	{
		while(name[i]!=NULL)
		{
			fputc(name[i],fw);
			i++;
		}
	}

	fclose(fw);
	getch();
}
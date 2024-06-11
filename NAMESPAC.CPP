#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char line[]="SWARNIM GUJRAT";
	clrscr();
	for(int i=0;i<strlen(line);i++)
	{
		cout.write(line,i+1);
		cout<<endl;
	}
	getch();
}
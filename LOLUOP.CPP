#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char line[]="SWARNIM GUJRAT";
	clrscr();
	for(int i=strlen(line);i>=0;i--)
	{
		cout.write(line,i-1);
		cout<<endl;
	}
	getch();
}
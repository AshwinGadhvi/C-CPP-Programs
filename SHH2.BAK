#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *str,*a,*b,*temp;
	int i,c=0;
	clrscr();
	printf ("enter str::");
	gets(str);
	puts(str);
	for(i=0;*str!=NULL;i++,str++)
	{
		c++;
	}
	printf ("l is %d\n",c);
	a=str;
	b=str;
	for(i=0;i<c-1;i++)
	{
		b++;
	}
	for(i=0;i<c/2;i++)
	{
		*temp=*b;
		*b=*a;
		*a=*temp;
		a++;
		b--;
	}
	puts(str);
	getch();
}




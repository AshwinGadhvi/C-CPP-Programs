#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *fw,*fr;
	int i=0,n,w;
	char a[30];
	clrscr();
	fw=fopen("ADD.TXT","w");
	printf ("how many number?:");
	scanf ("%d",&n);

	printf ("Enter %d Numbers::",n);
	for(i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	if(!fw)
	{
		printf ("Unable to open file");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			putw(a[i],fw);
		}
			fclose(fw);
			fr=fopen("ADD.TXT","r");
		for(i=0;i<n;i++)
		{
			w=getw(fr);
			printf ("%d",w);
		}
			fclose(fr);
	}
	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fe,*fp,*fo;
	int a[50],n,i;
	clrscr();
	fp=fopen("abc.txt","r");
	fe=fopen("even.txt","w");
	fo=fopen("odd.txt","w");
	if(!fp)
	{
		printf ("File not found::");
	}
	else
	{
		for(i=0;i<20;i++)
		{
				fscanf(fp,"%d",&i);
			if(i%2==0)
			{
				fprintf (fe,"%d",i);
			}
			else
			{
				fprintf (fo,"%d",i);
			}
		}
	}
	fclose(fp);
	fclose(fe);
	fclose(fo);

	fo=fopen("even.txt","r");

       //	printf ("even.txt","r");
	printf ("\neven numbers feom file\n");
	if(!fo)
	{
		printf ("even.txt file not found::");
	}
	else
	{
		while(fscanf(fo,"%d",&i)!=EOF)
		{
			printf ("%d",i);
		}
	}
	fo=fopen("odd.txt","r");

      //	printf ("even.txt","r");
	printf ("\nodd numbers feom file\n");
	if(!fo)
	{
		printf ("odd.txt file not found::");
	}
	else
	{
		while(fscanf(fo,"%d",&i)!=EOF)
		{
			printf ("%d",i);
		}
	}
	getch();
}

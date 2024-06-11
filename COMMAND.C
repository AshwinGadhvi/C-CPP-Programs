#include<stdio.h>
#include<conio.h>

void main(int argc,char *argv[])
{
	int i;
	FILE *fp,*fo;
	char ch;
	clrscr();
	if(argc==3)
	{
		fp=fopen(argv[1],"r");
		fo=fopen(argv[2],"w");
		if(!fp && !fo)
		{
			printf ("File not found::");

		}
		else
		{
			while ((ch=getc(fp)) != EOF)
			{
				putc(ch,fo);
			}
		   /*	do
			{
				putc(ch,fo);
			}while((ch==getc(fp)) !EOF);  */
			fclose(fp);
			fclose(fo);
		}
	}
	else
	{
		printf ("invalid arguement::");
	}


	for (i=0;i<argc;i++)
	{
		printf ("%s",argv[i]);
	}
	getch();
}
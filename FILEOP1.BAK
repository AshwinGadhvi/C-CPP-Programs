#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int n,count=0,pos;
	char ch;
	clrscr();
       //	if(argc==3)

		fp=fopen("add.txt","r");
		if(!fp)
		{
			printf ("source file not found::");
		}
		else
		{
			printf ("how many char toread from file::");
			scanf ("%d",&n);
			printf ("Enter pos::");
			scanf("%d",&pos);
			fseek(fp,pos,0);
			while((ch=getc(fp))!=EOF  && n!=count)
			{
				printf ("%c",ch);
				count++;
			}
			fseek(fp,(pos*-1),SEEK_CUR),
			printf ("current location in a file %d ",ftell(fp));
			fclose(fp);
		}
		getch();
}
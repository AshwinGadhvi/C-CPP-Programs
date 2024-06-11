#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],b[100],i,n,j;
	FILE *fp;
	clrscr();
	printf ("how many numbers:");
	scanf ("%d",&n);
	printf ("enter %d elements::",n);
	for(i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	fp=fopen("add.txt","a+");
	if(!fp)
	{
		printf ("File not found::");
	}
	else
	{
		fwrite(a,sizeof(int),n,fp);
		rewind(fp);
		while(fread(&j,sizeof(int),1,fp))
		{
			printf ("%d ",j);
		}
		fclose(fp);
	}
	getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],b[100],i,n;
	FILE *fp;
	clrscr();
	printf ("how many numbers:");
	scanf ("%d",&n);
	printf ("enter %d elements::",n);
	for(i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	fp=fopen("abc.txt","w+");
	if(!fp)
	{
		printf ("File not found::");
	}
	else
	{
		fwrite(a,sizeof(int),n,fp);
		rewind(fp);
		fread(b,sizeof(int),n,fp);
		fclose(fp);

		printf ("file elements are::\n");
		for (i=0;i<n;i++)
		{
			printf ("%d",b[i]);
		}
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>

void str(char a[])
{
	int i,count=0;
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
	}
	printf ("Length is %d\n",count);
}

void sub(char a[],char b[],int s,int e)
{
	int i,j;
	for(i=s,j=0;i<=e;i++,j++)
	{
		b[j]=a[i];
	}
	b[j]=NULL;
	printf ("Sub-String is %s\n",b);
}

void copy(char a[],char b[])
{
	int i;
	for(i=0;a[i]!=NULL;i++)
	{
		b[i]=a[i];
	}
	b[i]=NULL;
	printf ("Copy string is %s\n",b);
}
void con(char a[],char b[],char c[])
{
	int i,j,k=0;
	for(i=0;a[i]!=NULL;i++)
	{
		b[k]=a[i];
		k++;
	}
	for(j=0;c[j]!=NULL;j++)
	{
		b[k]=c[j];
		k++;
	}
	b[k]=NULL;
	printf ("concation of string is %s\n",b);
}
void com(char a[],char c[])
{
	int flag=0,count1=0,count2=0,i;
	count1=strlen(a);
	count2=strlen(c);
	if(count1==count2)
	{
		for(i=0;i<count1;i++)
		{
			if(a[i]==c[i])
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
	}
	if(flag==1)
	{
		printf ("Both string are same::\n");
	}
	else
	{
		printf ("Both string are not same::\n");
	}

}

void rev(char a[],char b[])
{
	int i,j;
	for(i=strlen(a)-1,j=0;i>=NULL;i--,j++)
	{
		b[j]=a[i];
	}
	b[j]=NULL;
	printf ("Rev is %s\n",b);
}

void up(char a[],char b[])
{
	int i;
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			b[i]=a[i]-32;

		}
		else
		{
		       b[i]=a[i];
		}
	}
	printf ("up is %s",b);
}



int main()
{
	char a[20],b[20],c[20];
	int s,e;
	clrscr();
	printf("Enter first string::");
	gets(a);
	printf("Enter second string::");
	gets(c);
	printf ("enter starting point::");
	scanf ("%d",&s);
	printf ("enter ending point::");
	scanf ("%d",&e);
	str(a);
	sub(a,b,s,e);
	copy(a,b);
	con(a,b,c);
      //	com(a,c);
	rev(a,b);
	up(a,b);
	getch();
	return 0;
}

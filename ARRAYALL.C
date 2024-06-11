#include<stdio.h>
#include<conio.h>
#include<process.h>

void read_array(int a[],int *n)
{
	int i;
	printf ("how many elemen::");
	scanf ("%d",&(*n));
	printf ("enter %d element::",*n);
	for(i=0;i<*n;i++)
	{
		scanf ("%d",&a[i]);
	}
}

void write_array(int a[],int n)
{
	int i;
	printf ("enter %d element::",n);
	for(i=0;i<n;i++)
	{
		printf (" %d",a[i]);
	}
}

void insert_element(int a[],int *n)
{
	int value,pos,i;
	printf ("enter number to insert::");
	scanf ("%d",&value);
	printf ("enter pos::");
	scanf ("%d",&pos);
	for(i=(*n);i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=value;
	(*n)++;


}
void delete_element(int a[],int *n)
{
	int pos,i;
	printf ("enter pos::");
	scanf ("%d",&pos);
	for(i=pos;i<(*n);i++)
	{
		a[i]=a[i+1];
	}
	(*n)--;
}
void search_element(int a[],int n)
{
	int i,value,flag=0;
	printf ("enter element::");
	scanf ("%d",&value);
	for(i=0;i<n;i++)
	{
		if(a[i]==value)
		{
			flag=1;
			printf ("\nelement found at %d location::",i+1);
			break;
		}
	}
	if(flag==0)
	{
		printf ("element not found::");
	}
}

void sort_element(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

}
void binary_search(int a[],int n)
{
	int low=0,high=n-1,mid,x,flag=0;
	sort_element(a,n);
	printf ("enter element to binary search::");
	scanf ("%d",&x);
	while(low<=high)
	{
		mid=(low + high)/2;
		if(a[mid]>x)
		{
			high=mid-1;
		}
		else if(a[mid]<x)
		{
			low=mid+1;
		}
		else
		{
			flag=1;
			printf ("element found at %d",(mid+1));
			break;
		}


	}
	if(flag==0)
	{
		printf ("element not found::");
	}

}


void main()
{
	int choice,n,a[100],i;
	while(1)
	{
	clrscr();
	printf ("(1) for read array\n(2)for insert element\n(3)for delete\n(4)for search\n(5)sort element\n(6)for display\n(7) for binary change\n(8)exit::");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			read_array(a,&n);
		break;
		case 2:
			insert_element(a,&n);
		break;
		case 3:
			delete_element(a,&n);
		break;
		case 4:
			search_element(a,n);
		break;
		case 5:
			sort_element(a,n);
			write_array(a,n);
		break;
		case 6:
			write_array(a,n);
		break;
		case 7:
			binary_search(a,n);
		break;
		case 8:
			exit (0);
		default :
			printf ("invalid choics::");
	}
	getch();
	}
}


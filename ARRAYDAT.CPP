#include<iostream.h>
#include<conio.h>
#include<process.h>

void readarray(int a[],int *n)
{
	int i;
	cout<<"Enter How Many Element : ";
	cin>>(*n);
	cout<<"Enter "<<(*n)<<" Element "<<endl;
	for(i=0;i<(*n);i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}

void displayarray(int a[],int *n)
{
	int i;
	for(i=0;i<(*n);i++)
	{
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}
}

void insertarray(int a[],int *n)
{
	int pos,val,i;
	cout<<"Enter Pos : ";
	cin>>pos;
	cout<<"Enter Val : ";
	cin>>val;
	for(i=(*n);i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	(*n)++;
}

void deletearray(int a[],int *n)
{
	int pos,i;
	cout<<"Enter Pos : ";
	cin>>pos;
	for(i=pos;i<(*n);i++)
	{
		a[i]=a[i+1];
	}
	(*n)--;
}

void sortarray(int a[],int *n)
{
	int i,j,temp;
	for(i=0;i<(*n);i++)
	{
		for(j=i+1;j<(*n);j++)
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

void searchele(int a[],int *n)
{
	int i,val,flag=0;
	cout<<"Enter a value for search : ";
	cin>>val;
	for(i=0;i<(*n);i++)
	{
		if(val==a[i])
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"Element found at pos : "<<i+1;
	}
	if(flag==0)
	{
		cout<<"Element not found : ";
	}
}

void binaryele(int a[],int *n)
{
	int high=(*n)-1,low=0,mid,val,flag=0;
	sortarray(a,n);
	cout<<"Enter value : ";
	cin>>val;
	while(low<=high)
	{
		mid=(low + high)/2;
		if(a[mid]>val)
		{
			high=mid-1;
		}
		else if(a[mid]<val)
		{
			low=mid+1;
		}
		else
		{
			flag=1;
			cout<<"element found at : "<<mid+1;
			break;
		}


	}
	if(flag==0)
	{
		cout<<"Element not found : ";
	}
}

void main()
{
	int *a,*n,choice;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"1.For Read Array\n2.For Display Array\n3.For Insert Element\n4.For Delete Element\n5.For Sort Array\n6.For Search Element\n7.For Binary Search\n8.For Exit\nEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				readarray(a,n);
				break;
			case 2:
				displayarray(a,n);
				break;
			case 3:
				insertarray(a,n);
				break;
			case 4:
				deletearray(a,n);
				break;
			case 5:
				sortarray(a,n);
				break;
			case 6:
				searchele(a,n);
				break;
			case 7:
				binaryele(a,n);
				break;
			case 8:
				exit(0);
				break;
			default:
				cout<<"Invalid Choice : ";
				break;
		}
		getch();
	}
}
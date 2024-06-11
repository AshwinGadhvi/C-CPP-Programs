#include<iostream.h>
#include<conio.h>
#include<process.h>

void read_array(int a[],int *n)
{
	int i;
	cout<<"Enter How Many Element : ";
	cin>>(*n);
	for(i=0;i<(*n);i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void show_array(int a[],int *n)
{
	int i;
	cout<<"Entered Array is : "<<endl;
	for(i=0;i<(*n);i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}

void insert_array(int a[],int *n)
{
	int pos,val,i;
	cout<<"Enter Position : ";
	cin>>pos;
	cout<<"Enter Val : ";
	cin>>val;
	for(i=(*n);i>=pos;i--)
	{
		a[i] = a[i-1];
	}
	a[pos]=val;
	(*n)++;
}

void delete_array(int a[],int *n)
{
	int pos,i;
	cout<<"Enter Position : ";
	cin>>pos;
	for(i=pos;i<=(*n);i++)
	{
		a[i-1] = a[i];
	}
	(*n)--;
}

/*void binary(int a[],int *n)
{
    //	int low,mid,high,i;
  //	low = -1;
//	high = n -1;

}  */

void sort(int a[],int *n)
{
	int i,j,temp;
	for(i=0;i<=(*n);i++)
	{
		for(j=1;j<=i;j++)
		{
			if(a[i]>a[j])
			{
				temp= a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

void main()
{
	int choice,i,*a,*n;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"1.For Read Array\n2.For Insertion on Array\n3.For Deletion Array\n4.For Binary Search On Array\n5.For Show Array\n6.For Exit\n\nEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				read_array(a,n);
				break;
			case 2:
				insert_array(a,n);
				break;
			case 3:
				delete_array(a,n);
				break;
			case 4:
				sort(a,n);
				break;
			case 5:
				show_array(a,n);
				break;
			case 6:
				exit(0);
				break;
				case 7:
					exit(0);
					break;
			default:
				cout<<"Invalid Choice : ";
				break;
		}
	getch();
	}
}
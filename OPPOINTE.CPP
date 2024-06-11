#include<iostream.h>
#include<conio.h>

void main()
{
	int num[]={10,20,30,40,50};
	int *ptr;
	int i;
	clrscr();
	cout<<"The Array is : ";
	for(i=0;i<5;i++)
	{
		cout<<endl;
		cout<<num[i];
	}
	ptr=num;
	cout<<"Value of ptr : "<<*ptr;
	cout<<endl;
	ptr++;
	cout<<*ptr;
	ptr--;
	cout<<*ptr;
	getch();
}
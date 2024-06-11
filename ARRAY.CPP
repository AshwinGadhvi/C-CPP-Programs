#include<iostream.h>
#include<conio.h>

class arr{
	private:
	int arr1[30],n,i,position,value;

       public:
       void get_data()
       {
	cout<<"Enter N : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
       }
       void show()
       {
	for(i=0;i<n;i++)
	{
		cout<<arr1[i]<<endl;
	}
       }

       void insert()
       {
	cout<<"Enter position to insert : ";
	cin>>position;
	cout<<"the "<<position<<" is position "<<endl<<endl;
	cout<<"Enter Value to insert : ";
	cin>>value;
	cout<<"the "<<value<<" is value "<<endl<<endl;
	for(i=position;i<=n;i++)
	{
		arr1[i+1]=arr1[i];
	}
	arr1[position]=value;
	n++;
	cout<<"After insert :"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr1[i]<<endl;
	}
       }

};
/*
void arr::get_data()
{

}

void arr::show()
{

}    */

void main()
{
	arr a1;
	clrscr();
	a1.get_data();
	a1.show();
	a1.insert();
	getch();
}

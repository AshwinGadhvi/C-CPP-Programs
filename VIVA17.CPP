#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class customer
{
	private:
		int customer_id;
		char customer_name[20];
	public:
		void get_data()
		{
			cout<<"Enter Customer_Id : ";
			cin>>customer_id;
			cout<<"Enter Customer_Name : ";
			cin>>customer_name;
		}
		void show()
		{
		     cout<<"Enter Customer_Id : "<<customer_id<<endl;
		     cout<<"Enter Customer_Name : "<<customer_name<<endl;
		}
};

void main()
{
	customer c[100];
	int n,i;
	cout<<"Enter how Many Customer : ";
	cin>>n;
	clrscr();
	cout<<"Enter Customer Info : "<<endl;
	cout<<"-------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		c[i].get_data();
	}
	cout<<"Customer Data is : "<<endl;
	cout<<"-------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		c[i].show();
	}
	getch();
}

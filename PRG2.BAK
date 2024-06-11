#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>

class customer
{
       //	int c_id;
	char c_id[20],c_name[20],c_add[20];
	public:
		void get_data()
		{
			cout<<"Enter Customer Id : ";
			cin.getline(c_id,20);cout<<endl;
			cout<<"Enter Customer name : ";
			cin.getline(c_name,20);cout<<endl;
			cout<<"Enter Customer Address : ";
			cin.getline(c_add,20);cout<<endl;
		}
		void show_data()
		{
			cout<<"Customer id : "<<c_id<<endl;
			cout<<"Customer Name : "<<c_name<<endl;
			cout<<"Customer Address : "<<c_add<<endl;
		}
};

void main()
{
	customer ct[100];
	int n,i;
	clrscr();
	cout<<"How Many Customer : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ct[i].get_data();
	}
	for(i=0;i<n;i++)
	{
		ct[i].show_data();
	}
	getch();
}
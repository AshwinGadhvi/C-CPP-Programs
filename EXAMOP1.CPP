#include<iostream.h>
#include<conio.h>

class customer
{
	private:
		char c_id[20],c_name[20],c_add[20];
	public:
		void get_data()
		{
			cout<<"Enter Customer Id :- ";
			cin>>c_id;
			cout<<"Enter Customer Name :- ";
			cin>>c_name;
			cout<<"Enter Customer Address :- ";
			cin>>c_add;
		}
		void show_data()
		{
			cout<<"Customer id Is :- "<<c_id<<endl;
			cout<<"Customer Name is :- "<<c_name<<endl;
			cout<<"Customer Address is :- "<<c_add<<endl;
		}
};

void main()
{
	customer c[20];
	int n,i;
	clrscr();
	cout<<"Enter How Many Customer :- ";
	cin>>n;
	cout<<"Enter "<<n<<" Recordes."<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" Customer Data :"<<endl;
		cout<<"--------------------------------"<<endl;
		c[i].get_data();
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		cout<<"Customer "<<i+1<<" Data : "<<endl;
		cout<<"--------------------------------"<<endl;
		c[i].show_data();
		cout<<endl;
	}
	getch();
}
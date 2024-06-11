#include<iostream.h>
#include<conio.h>


class publication
{
	private:
		char title[20];
		float price;
	public:
		void get_data()
		{
			cout<<"Enter Name Of The Title : ";
			cin>>title;
			cout<<"Enter Price of book : ";
			cin>>price;
		}
		void put_data()
		{
			cout<<"Title Of Book : "<<title<<endl;
			cout<<"Price of Book : "<<price<<endl;
		}
};

class book:public publication
{
	public:
		int page;
		void get_data()
		{
			cout<<"Enter How Many Page : ";
			cin>>page;
		}
		void put_data()
		{
			cout<<"Page count is : "<<page;
		}
};

void main()
{
	publication p1[20];
	book b1[20];
	int n,i;
	clrscr();
	cout<<"Enter How Many Book You Need : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		p1[i].get_data();
		b1[i].get_data();
	}
	cout<<endl<<"Entered Data : "<<endl;
	for(i=0;i<n;i++)
	{
		p1[i].put_data();
		b1[i].put_data();
		cout<<endl;
	}
	getch();
}
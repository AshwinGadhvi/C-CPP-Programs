#include<iostream.h>
#include<conio.h>

class start
{
	private:
		int x,y;
	public:
		void get_data()
		{
			cin>>x>>y;
		}
		void show_data()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};

void main()
{
	start s[5];
	int i,j;
	clrscr();
	cout<<"Enter x and y Element : "<<endl;
	for(i=0;i<5;i++)
	{
		s[i].get_data();
	}
	cout<<"Points are : "<<endl;
	for(i=0;i<5;i++)
	{
		s[i].show_data();
	}
	getch();
}
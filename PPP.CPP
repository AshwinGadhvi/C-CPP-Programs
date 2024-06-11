#include<iostream.h>
#include<conio.h>

class objdemo
{
	int x,y;
	public:
	void getdata(){
	cout<<"Enter value of x : ";
	cin>>x;
	cout<<"Enter value of y : ";
	cin>>y;
	}
	void showdata()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl<<endl;
	}

};

void main()
{
	objdemo o[10];
	int i,n;
	clrscr();
	cout<<"How many object :: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter value of "<<i<<"object\n";
		o[i].getdata();
	}
	cout<<"Entered Array of object ::\n";
	for(i=0;i<n;i++)
	{
		cout<<"value of "<<i<<"object\n";
		o[i].showdata();
	}
	getch();

}
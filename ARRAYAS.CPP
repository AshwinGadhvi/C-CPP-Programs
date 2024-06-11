#include<iostream.h>
#include<conio.h>

class array
{
	private:
	int a[10];
	public:
	void get_data(int size);
	void show_data(int size);
}a1,a2;

void array::get_data(int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
}

void array::show_data(int size)
{
	int i;
	cout<<"Entered array is::"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
}

void main()
{
	int size;
	clrscr();
	cout<<"Enter the size of array::"<<endl;
	cin>>size;
	cout<<"Enter "<<size<<" elemene"<<endl;
	a1.get_data(size);
	a2.show_data(size);
	getch();
}

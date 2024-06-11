#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class city
{
	private:
		int population;
		char name[20];
	public:
		void get_data()
		{
			cout<<"Enter city name : ";
			gets(name);
			cout<<"Enter population of city : ";
			cin>>population;
		}
		void show_data()
		{
			cout<<"City name is : "<<name<<endl;
			cout<<"Population is : "<<population<<endl;
		}
		void sort(city *ptr)
		{
			for(i=0;i<n;i++)
			{
				if(ptr[i]>ptr[i])
				{

				}	temp=ptr[i]
			}
		}
};

void main()
{
	city c1[20];
	city *ptr;
	int n,i;
	ptr=c1[0];
	clrscr();
	cout<<"Enter Size of n : ";
	cin>>n;
	cout<<"Enter "<<n<<" City Data"<<endl;
	for(i=0;i<n;i++)
	{
		c1[i].get_data();
	}
	cout<<"Entered Data : "<<endl;
	for(i=0;i<n;i++)
	{
		c1[i].show_data();
	}
	getch();
}
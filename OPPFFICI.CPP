#include<iostream.h>
#include<conio.h>

class city
{
		int population,max,n,opp[20];
	public:
		void get_data()
		{
			cout<<"Enter Population of city : ";
			cin>>population;
		}
		void put_data()
		{
			cout<<"Population is : "<<population<<endl;
		}
		void maxi()
		{
			int i;
			max=op[0];
			for(i=0;i<n;i++)
			{
				if(op[i]>max)
				{
					max=op[i];
				}
			}
			cout<<"max is : "<<max;
		}
};
/*
void city::maxi()
{
		int i;
		int op[20];
		max=op[0];
		for(i=0;i<n;i++)
		{
			if(op[i]>max)
			{
				max=op[i];
			}
		}
		cout<<"max is : "<<max;
}
  */

void main()
{
	clrscr();
	city *op;
	int i,n;
	cout<<"Enter How many city : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		op[i].get_data();
	}
	for(i=0;i<n;i++)
	{
		op[i].put_data();
	}
	for(i=0;i<n;i++)
	{
		op[i].maxi();
	}
	getch();
}
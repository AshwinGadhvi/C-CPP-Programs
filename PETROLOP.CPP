#include<iostream.h>
#include<conio.h>

class petrol
{
		float price,c_price,ans;
	public:
		void get_data()
		{
			cout<<"++++++++++Bhartiya Petrol Pump++++++++++"<<endl;
			cout<<"Enter Current Price of Petrol : ";
			cin>>c_price;
			cout<<"How Many Rupees Petrol You Need : ";
			cin>>price;
		}
		void cal()
		{
			if(price==1)
			{
				ans=(price*c_price)/c_price;
			}
			else if(price==2)
			{
				ans=(price*c_price)/c_price;
			}
			else if(price==3)
			{
				ans=(price*c_price)/c_price;
			}
			else if(price==4)
			{
				ans=(price*c_price)/c_price;
			}
			else if(price==5)
			{
				ans=(price*c_price)/c_price;
			}
			else
			{
				ans=(price*1)/c_price;
			}

		}
		void show_data()
		{
			cout<<"++++++++++Bhartiya Petrol Pump++++++++++"<<endl;
			cout<<"Fill "<<ans<<" Liter of Petrol : "<<endl;
		}
};

void main()
{
	petrol p1;
	clrscr();
	p1.get_data();
	p1.cal();
	p1.show_data();
	getch();
}
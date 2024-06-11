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
			cout<<"Enter Book Title : ";
			cin>>title;
			cout<<"Enter Price Of book : ";
			cin>>price;
		}
		void show_data()
		{
			cout<<"Title Of Book is : "<<title<<endl;
			cout<<"Price Of Book is : "<<price<<endl;
		}
};


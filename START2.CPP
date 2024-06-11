#include<iostream.h>
#include<conio.h>

class start
{
	private:
		int a[20],n,i;
	public:
		void get_data()
		{
			cout<<"Enter Size Of Arrray : ";
			cin>>n;
			cout<<"Enter "<<n<<" Element : "<<endl;
			for(i=0;i<n;i++)
			{
				cout<<"a["<<i<<"]= ";
				cin>>a[i];
			}
		}
		void show_data()
		{
			cout<<"Enterd array is : "<<endl;
			for(i=0;i<n;i++)
			{
				cout<<"a["<<i<<"]= "<<a[i]<<endl;
			}
		}
};

void main()
{
	start s;
	clrscr();
	s.get_data();
	s.show_data();
	getch();
}
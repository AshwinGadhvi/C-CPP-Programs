#include<iostream.h>
#include<conio.h>

class start
{
	private:
		int *a;
		int size,i;
	public:
		void create_array(int n)
		{
			size=n;
			a=new int[size];
		}
		void get_array()
		{
			for(i=0;i<size;i++)
			{
				cout<<"a["<<i<<"]= ";
				cin>>a[i];
			}
		}
		void show_array()
		{
			for(i=0;i<size;i++)
			{
				cout<<"a["<<i<<"]= "<<a[i]<<endl;
			}
		}
};

void main()
{
	start s;
	int n;
	clrscr();
	cout<<"Enter size of Array : ";
	cin>>n;
	cout<<"Enter "<<n<<" Element : "<<endl;
	s.create_array(n);
	s.get_array();
	cout<<"Entered element are : "<<endl;
	s.show_array();
	getch();
}
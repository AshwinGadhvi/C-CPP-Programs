#include<iostream.h>
#include<conio.h>

class op
{
	private:
		int a,b,c,max;
	public:
		void get_data()
		{
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
			cout<<"Enter c : ";
			cin>>c;
		}
		void maxi()
		{
			if((a>b) && (b>c))
			{
				max=a;
			}
			else if(b>c)
			{
				max=b;
			}
			else
			{
				max=c;
			}
		}
		void show()
		{
			cout<<"Maximum is : "<<max;
		}
};

void main()
{
	op a;
	clrscr();
	a.get_data();
	a.maxi();
	a.show();
	getch();
}

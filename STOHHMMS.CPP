#include<iostream.h>
#include<conio.h>

class time
{
	private:
		int h,m,s,seconds;
	public:
		void get_data()
		{
			cout<<"Enter Second : ";
			cin>>seconds;
		}
		void convert()
		{
			h=seconds/3600;
			seconds%=3600;
			m=seconds/60;
			seconds%=60;
			s=seconds;
		}
		void show()
		{
			cout<<h<<":"<<m<<":"<<s;
		}

};

void main()
{
	time t1;
	clrscr();
	t1.get_data();
	t1.convert();
	t1.show();
	getch();
}
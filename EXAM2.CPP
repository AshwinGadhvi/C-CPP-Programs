#include<iostream.h>
#include<conio.h>

class op
{
	private:
		int m;
	public:
		void get_data()
		{
			cout<<"Enter m : ";
			cin>>m;
		}
		void show_data()
		{
			cout<<"M is : "<<m<<endl;
		}
};

class op2
{
	private:
		int n;
	public:
		void get_data1()
		{
			cout<<"Enter n : ";
			cin>>n;
		}
		void show_data1()
		{
			cout<<"N is : "<<n<<endl;
		}
};

class op3:public op,public op2
{
	public:
		void get()
		{
			get_data();
			get_data1();
		}
		void show()
		{
			show_data();
			show_data1();
		}
};

void main()
{
	op3 o;
	clrscr();
	o.get();
	o.show();
	getch();
}
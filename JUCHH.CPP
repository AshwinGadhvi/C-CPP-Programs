#include<iostream.h>
#include<conio.h>

class shape{
	private:
		int r;
	public:
		virtual void area()=0;
};

class io
{
	private:
		int ans;
	public:
		void get()
		{
			cout<<"Enter r : ";
			cin>>r;
		}
		void area(int r)
		{
			ans=r*r;
			cout<<"Ans id : "<<ans;
		}
};

void main()
{
	io o;
	clrscr();
	o.area(3);
	getch();

}
#include<iostream.h>
#include<conio.h>

class volume
{
	private:
	int x,y;
	public:
	void getdata()
	{
		cout<<"Enter x : ";
		cin>>x;
	}
	void cube()
	{
	       y=x*x*x;
	}
	void show()
	{
		cout<<"Volume of cube  is  : "<<y;
	}
};

void main()
{
	clrscr();
	volume v1;
	v1.getdata();
	v1.cube();
	v1.show();
	getch();
}
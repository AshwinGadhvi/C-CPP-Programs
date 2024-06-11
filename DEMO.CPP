#include<iostream.h>
#include<conio.h>

class op
{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
		void put_data()
		{
			cout<<"a is : "<<a<<endl;
			cout<<"B is : "<<b;
		}
};

void main()
{
	clrscr();
	op *p1;
	p1=new op();
	p1->get_data();
	p1->put_data();
	//apointer to object
	demo d1;
	demo *ptr;
	ptr->get_data();
	ptr->put_data();
	getch();
}
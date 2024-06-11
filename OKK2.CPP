#include<iostream.h>
#include<conio.h>

class op
{
	private:
		int a,b,c;
	public:
		op()                             //default constructor
		{
			a=0;
			b=0;
			c=0;
		}
		op(int a1,int b1,int c1)        //Parameterized constructor
		{
			a=a1;
			b=b1;
			c=c1;
		}                                //Copy constructor
		op(op &p)
		{
			a=p.a;
			b=p.b;
			c=p.c;
		}
		void show()
		{
			cout<<"A is : "<<a<<endl;
			cout<<"B is : "<<b<<endl;
			cout<<"C is : "<<c<<endl;
		}
};

void main()
{
	op o;
	op o2(7,8,9);
	op o3(o2);
	clrscr();
	o3.show();
	getch();
}
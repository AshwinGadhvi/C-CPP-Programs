#include<iostream.h>
#include<conio.h>

class a{
	public:
	virtual void op()
	{
		cout<<"Virtual function : ";
	}
	void show()
	{
		cout<<"Normal Base class function : ";
	}
};

class b:public a
{
	public:
	void show()
	{
		cout<<"This is Derived Class Function : ";
	}
};
void main()
{
	clrscr();
	a *ptr;
	b op2;
	ptr = &op2;
       //	ptr->show();
	op2.op();
       //	op.show();
	getch();
}
#include<iostream.h>
#include<conio.h>

class op{
	int i;
	public:
		op()
		{
			i=0;
		}
		op(int i1)
		{
			i=i1;
		}
		void opo(int i2)
		{
			i=i2;
		}
		void showdata()   const
		{
			cout<<"i is : "<<i;
		}
};

void main()
{
	clrscr();
	op p1;
	const op p2(3);
	p2.showdata();
	p2.opo(4);
	p2.showdata();
	getch();
}
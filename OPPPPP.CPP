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
		op(op& p)
		{
			i=p.i;
		}
		void putdata()
		{
			cout<<"I is : "<<i;
		}
};

void main()
{
	op p1;
	p1.showdata();
	cout<<endl<<"_____________________"<<endl;
	op p2(2);
	p2.putdata();
	cout<<endl<<"_____________________"<<endl;
	op p3(p2);
	p3.putdata();
	cout<<endl<<"_____________________"<<endl;
	getch();
}
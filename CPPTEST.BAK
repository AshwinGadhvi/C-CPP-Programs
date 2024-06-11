#include<iostream.h>
#include<conio.h>

class op
{
	private:
		int m,n;
	public:
		op()
		{
			m=0;
			n=0;
		}
		op(int m1,int n1)
		{
			m=m1;
			n=n1;
		}
		op(op &p)
		{
			m=p.m;
			n=p.n;
		}
		void show_data()
		{
			cout<<"M is : "<<m<<endl;
			cout<<"N is : "<<n<<endl;
		}
};

void main()
{
	op p;
	int l1,l2;
	clrscr();
	cout<<"Enter M : ";
	cin>>l1;
	cout<<"Enter N : ";
	cin>>l2;
	cout<<"---------Default Constructor---------"<<endl;
	p.show_data();
	cout<<"---------Parameterized Constructor---------"<<endl;
	op p2(l1,l2);
	p2.show_data();
	cout<<"---------Copy Constructor---------"<<endl;
	op p3(p2);
	p3.show_data();
	getch();
}
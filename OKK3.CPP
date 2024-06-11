#include<iostream.h>
#include<conio.h>

class op{
	private:
		int a,b;
	public:
		op()
		{
			a=0;
			b=0;
		}
		op(int a1,int b1)
		{
			a=a1;
			b=b1;
		}
		friend void sum(int a,int b);
};

void sum(int a,int b)
{
	int ans;
	ans=a+b;
	cout<<"Sum is : "<<ans;
}

void main()
{
	op o;
	int m,n;
	clrscr();
	cout<<"Enter M : ";
	cin>>m;
	cout<<"Enter N : ";
	cin>>n;
	clrscr();
	op o2(m,n);
	clrscr();
        sum(m,n);
	getch();
}

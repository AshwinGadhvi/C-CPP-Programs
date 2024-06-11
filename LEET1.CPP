#include<iostream.h>
#include<conio.h>

class op{

	private:
		int p[20],n,i,a,b,x,y,s;
	public:
		void get_data()
		{
			cout<<"-------GET SIZE-------"<<endl;
			cout<<"Enter Size of Array : ";
			cin>>n;
			cout<<"Enter Value for sum 1 : ";
			cin>>a;
			cout<<"Enter Value for sum 2 : ";
			cin>>b;
			cout<<endl;
		}
		void getting_array();
		void show();
		void sum();

};

void op::getting_array()
{
	cout<<"---------GETTING ARRAY---------"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i<<"] : ";
		cin>>p[i];
	}
}

void op::show()
{
	cout<<"----------SHOW ARRAY----------<<"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i<<"] : "<<p[i]<<endl;

	}
}

void op::sum()
{
	cout<<"--------SUM-------"<<endl;
	x=p[a];
	y=p[b];
	s=x+y;
	cout<<"Sum is : "<<s;
}

void main()
{
	op o1;
	clrscr();
	o1.get_data();
	o1.getting_array();
	o1.show();
	o1.sum();
	getch();
}
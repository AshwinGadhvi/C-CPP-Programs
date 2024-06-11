#include<iostream.h>
#include<conio.h>

class student
{
	private:
	int r_no,mark;
	public:
	void getdata()
	{
		cout<<"Enter The r_no : ";
		cin>>r_no;
		cout<<"Enter Marks : ";
		cin>>mark;
	}
	student()
	{
		r_no=0;
		mark=0;
	}
	student(int a,int b)
	{
		r_no=a;
		mark=b;
	}
	student(student &s)
	{
		r_no=s.r_no;
		mark=s.mark;
	}
	void showdata()
	{
		cout<<"R_no is : "<<r_no<<endl;
		cout<<"Mark is : "<<mark<<endl;

	}
};

void main()
{
	clrscr();
	cout<<"Default :: Constuructor ::"<<endl;
	cout<<"--------------------------"<<endl;
	student s1;
	s1.showdata();
	cout<<"Parameterized :: Constructor :: "<<endl;
	cout<<"--------------------------------"<<endl;
	student s2(9,10);
	s2.showdata();
	cout<<"Copy :: Constructor :: "<<endl;
	cout<<"--------------------------------"<<endl;
	student s3;
	s3=s2;
	s3.showdata();
	getch();
}
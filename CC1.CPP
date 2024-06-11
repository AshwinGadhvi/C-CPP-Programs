#include<iostream.h>
#include<conio.h>

class student
{
	int roll_number,mark;
	public:
	void getdata()
	{
		cout<<"Enter Roll number : ";
		cin>>roll_number;
		cout<<"Enter marks : ";
		cin>>mark;
	}
	student()
	{
		roll_number=0;
		mark=0;
	}
	student(int a,int b)
	{
		roll_number=a;
		mark=b;
	}
	void showdata()
	{
		cout<<"Roll number is : "<<roll_number<<endl;
		cout<<"Mark is : "<<mark<<endl;
	}
};

void main()
{
	clrscr();
	student s1;
	s1.showdata();
	cout<<"--------------------------"<<endl;
	student s2(2,20);
	s2.showdata();
	getch();
}
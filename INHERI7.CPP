#include<iostream.h>
#include<conio.h>

class student
{
	protected:
		int ro_nu;
	public:
		void get_data()
		{
			ro_nu=2;
		}
		void show()
		{
			cout<<"roll number is : "<<ro_nu<<endl;
		}
};

class test : public student
{
	protected:
		int m1,m2;
	public:
		void get_data()
		{
			m1=50;
			m2=50;
		}
		void show()
		{
			cout<<"Subject 1::"<<m1<<endl;
			cout<<"Subject 2::"<<m2<<endl;
		}
};

class sports
{
	protected:
		int sp;
	public:
		void get_data()
		{
			sp=100;
		}
		void show()
		{
			cout<<"Sports Marks::"<<sp<<endl;
		}
};

class result:public test,public sports
{
	protected:
		int res;
	public:
		void cal_mark()
		{
			res=m1+m2+sp;
		}
		void show()
		{
			cout<<"Result::"<<res<<endl;
		}
};

int main()
{
	clrscr();
	result r1;
	student s1;
	s1.get_data();
	r1.test::get_data();
	r1.sports::get_data();
	r1.cal_mark();
	cout<<"**********************detail*************************"<<endl;
	s1.show();
	r1.test::show();
	r1.sports::show();
	r1.show();
	getch();
	return 0;
}

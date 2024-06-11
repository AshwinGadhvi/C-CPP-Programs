#include<iostream.h>
#include<conio.h>

class employee
{
	private:
	int id,s;
	char name;
	public:
	void input(int p,int q,char r[])
	{
		id=p;
		s=q;
		name=r[];
	}
	void display();
};
void employee::display()
{
	cout<<"roll number is "<<id<<endl;
	cout<<"salary is "<<s<<endl;
	cout<<"name is "<<name<<endl;
}
int main()
{
	employee s1,s2,s3;
	clrscr();
	s1.input(206530307002,99000,AShwin);
	s2.input(206530307013,88000,sneh);
	s3.input(206530307014,77000,Hem);
	cout<<"Detail first employee information::"<<endl;
	s1.display();
	cout<<"----------------------"<<endl;
	cout<<"Detail second employee information::"<<endl;
	s2.display();
	cout<<"Detail thied employee information::"<<endl;
	s3.display();
	getch();
	return 0;
}
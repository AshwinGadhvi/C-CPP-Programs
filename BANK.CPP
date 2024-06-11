#include<iostream.h>
#include<conio.h>
#include<string.h>

class bank
{
	private:
	int bid,am;
	char name[20];
	public:
	void input(int p,int q,char a[] )
	{
		bid=p;
		am=q;
		strcpy(name,a);
	}
	void display();
};
void bank::display()
{
	cout<<"bank id is "<<bid<<endl;
	cout<<"bank amount is "<<am<<endl;
	cout<<"name is "<<name<<endl;
}
int main()
{
	bank s1,s2,s3,a[10];
	clrscr();
	s1.input(2065,2999,"HDFC");
	s2.input(2064,3000,"SBI");
	s3.input(2063,3001,"DENA");
	cout<<"Detail first bank information::"<<endl;
	s1.display();
	cout<<"--------------------------------------------"<<endl;
	cout<<"Detail second Bank information::"<<endl;
	s2.display();
	cout<<"--------------------------------------------"<<endl;
	cout<<"Detail thied Bank information::"<<endl;
	s3.display();
	cout<<"--------------------------------------------"<<endl;
	getch();
	return 0;
}
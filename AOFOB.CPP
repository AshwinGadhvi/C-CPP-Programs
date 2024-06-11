#include<iostream.h>
#include<conio.h>

class afo{
	private:
		char name[50];
		int en;
	public:
		void getdata();
		void putdata();
};

void afo::getdata()
{
	cout<<"Enter Student Name : ";
	cin>>name;
	cout<<"Enter Enroll Of Student : ";
	cin>>en;
}

void afo::putdata()
{
	cout<<endl<<"Student Name : "<<name<<endl;
	cout<<"Enrollment Is : "<<en<<endl;
}

void main()
{
	int i,n;
	afo p[10];
	cout<<"How Many Student : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		p[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		p[i].putdata();
	}
	getch();
}

#include<iostream.h>
#include<conio.h>
#include<string.h>

class pizza
{
	private:
	char name[20];
	float price;
	public:
	void getdata(char a[],float r)
	{
		strcpy(name,a);
		price=r;
	}
	void putdata();
};

void pizza::putdata()
{
	cout<<"Name of Pizza is "<<name<<endl;
	cout<<"Price of Pizza is "<<price<<endl;
}

void main()
{
	pizza p1,p2,a[20];
	clrscr();
	cout<<"            La Pino'z             "<<endl;
	cout<<"__________________________________"<<endl;
	p1.getdata("Seven Chesee",375);
	p2.putdata();
	p2.getdata("Panir Tikka",360);
	p2.putdata();
	getch();
}
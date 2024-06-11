#include<iostream.h>
#include<conio.h>

int count=0;
class alpha
{
	public:
	alpha()
	{
		count++;
		cout<<"\nNO.of Object Created "<<count;
	}
	~alpha()
	{
		cout<<"\nNO.of object destroyed "<<count;
		count--;
	}
};

int main()
{
	clrscr();
	{
	cout<<"\n\nENTER MAIN\n";
	alpha a1,a2,a3,a4;
	{
		cout<<"\n\nENTER BLOCK1\n";
		alpha a5;
	}
	{
		cout<<"\n\nENTER BLOCK2\n";
		alpha a6;
	}
	cout<<"\n\nRE-ENTER MAIN";
	}
	getch();
	return 0;
}
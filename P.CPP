#include<iostream.h>
#include<conio.h>

int main()
{
	int selling,cost,p,l;
	clrscr();
	cout<<"enter selling and cost::";
	cin>>selling>>cost;
	if(selling>cost)
	{
		p=selling-cost;
		{
			cout<<"profit is"<<p;
		}
	}
	else
	{
		l=cost-selling;
		{
			cout<<"loss is"<<l;
		}
	}
	getch();
	return 0;
}




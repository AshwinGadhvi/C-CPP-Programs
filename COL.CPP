#include<iostream.h>
#include<conio.h>
#include<math.h>


void main()
{
	clrscr();
	cout.width(5);
	cout<< "NUM";
	cout.width(5);
	cout<< "SQR";
	cout.width(7);
	cout<< "SQRT";
	cout<<endl;

	cout.precision(3);

	for(int i=1;i<=10;i++)
	{
		cout.width(5);
		cout<<i;
		cout.width(5);
		cout<<i*i;
		cout.width(7);
		cout<<sqrt(i);
		cout<<endl;
	}
	cout<<endl;
	cout<<"value of pie is : ";
	cout.width(10);
	cout.precision(0);
	cout.fill('#');
	cout<<22.0/7;
	cout<<endl;
	cout<<"Integer Number : ";
	cout.fill(' ');
	cout.width(10);
	cout<<100;
	getch();
}
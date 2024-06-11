#include<iostream.h>
#include<conio.h>

void main()
{
	int i,st1,st2,st3,sum=0;
	clrscr();
	for(i=1;i<=3;i++)
	{
		cout<<"Enter Marks of Student : "<<i<<endl;
		cout<<"Enter Marks ofsubject 1 : ";
		cin>>st1;
		cout<<"Enter Marks ofsubject 2 : ";
		cin>>st2;
		cout<<"Enter Marks ofsubject 3 : ";
		cin>>st3;
		sum=st1+st2+st3;
		cout<<"Total Marks Of 3 Subject is : "<<sum<<endl;
		cout<<"---------------------------------"<<endl;
	}
	getch();
}
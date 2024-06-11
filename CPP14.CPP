#include<iostream.h>
#include<conio.h>

void main()
{
	int total=0,marks,n,i,maths,science,english;
	clrscr();
	cout<<"Enter how many student : ";
	cin>>n;
	clrscr();
	for(i=1;i<=n;i++)
	{
		cout<<"Enter student "<<i<<" marks : "<<endl;
		cout<<"Enter Marks of maths : ";
		cin>>maths;
		cout<<"Enter marks of science : ";
		cin>>science;
		cout<<"Enter marks of English : ";
		cin>>english;
		total=maths+science+english;
		cout<<"Marks of Student "<<i<<" is : "<<total<<endl;
		cout<<"----------------------------------"<<endl;
	}
	getch();
}
#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<40;j++)
		{
			if(i==0 && j==0 &&j==1 && j==2 && j==3)
			cout<<"*";
		}
		cout<<" "<<endl;
	}
	getch();
}
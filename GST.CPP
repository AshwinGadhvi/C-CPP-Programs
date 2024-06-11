#include<iostream.h>
#include<conio.h>

int gst(int a,int b,int c)
{
	cout<<"gst is"<<(a*b)/100<<endl;
	cout<<"gst is"<<(c*b)/100<<endl;

	return 0;
}

int main()
{
	int x,y,z;
	clrscr();

	cout<<"enter gst rate::";
	cin>>x>>y>>z;
	gst(x,y,z);
	getch();
	return 0;
}


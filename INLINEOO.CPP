#include<iostream.h>
#include<conio.h>

inline int area(int s)
{
	return s*s*s;
}
int main()
{
	int p;
	clrscr();
	cout<<"Enter s : ";
	cin>>p;
	cout<<"Volume of cube is : "<<area(p);
	getch();
	return 0;
}
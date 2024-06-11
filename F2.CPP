#include<iostream.h>
#include<conio.h>

void volume(int a)
{
	cout<<"volume of cube::"<<a*a*a<<endl;
}

void volume(int a,int b,int c)
{
	cout<<"volume of cuboid::"<<a*b*c<<endl;
}
void volume(float a, float b)
{
	cout<<"volume of cylinder::"<<3.14*a*a*b;
}
int main()
{
	int c,l,b,h;
	float l2,b2;
	clrscr();
	cout<<"enter c::";
	cin>>c;
	cout<<"enter l b h::";
	cin>>l>>b>>h;
	cout<<"enter r and h::";
	cin>>l2>>b2;
	volume(c);
	volume(l,b,h);
	volume(l2,b2);
	getch();
	return 0;
}
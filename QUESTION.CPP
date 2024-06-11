#include<iostream.h>
#include<conio.h>

class shape{
	float z;
	public:
		shape()
		{
			z=0;
		}
		shape(float a,int b,int c)
		{
			z=a*b*c;
		}
		void show()
		{
			cout<<"Area of tringle is : "<<z<<endl;
		}
};
void main()
{
	clrscr();
	shape s1;
	shape s2(0.5,3,3);
 //	s1.show();
	s2.show();
	getch();
}
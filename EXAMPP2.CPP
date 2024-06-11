#include<iostream.h>
#include<conio.h>
#define pi 3.14

class op{
	private:
		float base,height,redius,a_c,a_t;
	public:
		op(int b1,int h1,int r1)
		{
			base=b1;
			height=h1;
			redius=r1;
		}
		void area(int base,int height)
		{
			a_t=(0.5)*(base*height);
		}
		void area(int redius)
		{
			a_c=pi*redius*redius;
		}
		void show()
		{
			cout<<"Area of Tringle : "<<a_t<<endl;
			cout<<"Area of circle : "<<a_c<<endl;
		}
};

void main()
{
    //	op o;
	int b2,h2,r2;
	clrscr();
	cout<<"Enter Base : ";
	cin>>b2;
	cout<<"Enter Height : ";
	cin>>h2;
	cout<<"Enter Redius : ";
	cin>>r2;
	op o(b2,h2,r2);
	o.area(b2,h2);
	o.area(r2);
	o.show();
	getch();
}
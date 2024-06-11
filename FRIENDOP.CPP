#include<iostream.h>
#include<conio.h>

class pappu{
	int i;
	public:
		pappu()
		{
			i=0;
		}
		pappu(int v)
		{
			i=v;
		}
		friend int square(pappu);
};

int square(pappu v)
{
	return (v.i*v.i);
}

void main()
{
	pappu p1;
	int m;
	cout<<"Enter m : ";
	cin>>m;
	v=pappu(m);
	cout<<"Square is : "<<square(v)<<endl;
}
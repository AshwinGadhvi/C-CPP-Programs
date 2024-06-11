#include<iostream.h>
#include<conio.h>

class complex
{
	private:
	float x,y;
	public:
	complex()
	{
		x=y=0;
	}
	complex(float a)
	{
		x=y=a;
	}
	complex(float real,float imag)
	{
		x=real;
		y=imag;
	}
	friend complex sum(complex,complex);
	friend void show();

};

complex sum(complex x1,complex c2)
{
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
	return (c3);
}

void show(complex c)
{
	cout<<x<<"+j"<<y;
}


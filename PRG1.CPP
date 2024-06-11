#include<iostream.h>
#include<conio.h>

class shape
{
	protected:
		float dimension;
	public:
		void get_data()
		{
			cin>>dimension;
		}
		virtual float calculatearea()=0;
};

class circle:public shape
{
	  public:
	  float ans;
	  float calculatearea()
	  {
	       ans= 3.14*dimension*dimension;
	  }
	  void show()
	  {
		cout<<"Area of circle : "<<ans;
	  }
};

void main()
{
	clrscr();
	circle c;
	c.get_data();
	c.calculatearea();
	c.show();
	getch();
}
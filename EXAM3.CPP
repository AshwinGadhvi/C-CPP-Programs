#include<iostream.h>
#include<conio.h>
#include<math.h>

int power(int m,int n=2)
{
	int t;
	t=pow(m,n);
	return t;
}
void main()
{
	int num,ans;
	int p;
	clrscr();
	cout<<"Enter number : ";
	cin>>num;
	cout<<"Enter power : ";
	cin>>p;
	if(p==0)
	{
		ans=power(num);
		cout<<"\npower of "<<num<<" is : "<<ans<<endl;
	}
	else
	{
		ans=power(num,p);
		cout<<"\npower of "<<num<<" is : "<<ans<<endl;
	}
	getch();
}
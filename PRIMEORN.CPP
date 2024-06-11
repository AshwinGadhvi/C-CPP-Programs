#include<iostream.h>
#include<conio.h>

int main()
{
	int number,flag=0,i;
	clrscr();
	cout<<"enter number::";
	cin>>number;
	for(i=2;i<number;i++)
	{
		if(number%2==0)
		{
			flag=1;
			break;
		}
		if(number%2==!0)
		{
			flag=0;
			break;
		}

	}
	if(flag==1)
	{
		cout<<"number is prime::";
	}
	if(flag==0)
	{
		cout<<"number is not prime::";
	}
	getch();
	return 0;
}
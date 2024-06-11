#include<iostream.h>
#include<conio.h>
#include<process.h>


class queue
{
	int a[100],size,front,rear;
	public:

	queue()            //constructor to define data member to intialized var,no return type
	{
		front=-1;
		rear=-1;
		cout<<"How Many Elements?::";
		cin>>size;
	}
	void enqueue(int x);
	int dequeue();
	void traverse();

};

void queue::enqueue(int x)
{
	if(rear==(size-1))
	{
		cout<<"queue is overflow::";
	}
	else
	{
		rear++;
		a[rear]=x;
		if(front==-1)
		{
			front=0;
		}
	}
}

int queue::dequeue()
{
	int val=-1;
	if(front==-1)
	{
		cout<<"queue is underflow::";
	}
	else
	{
		val=a[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
	return val;
}

void queue::traverse()
{
	int i;
	cout<<"Queue Element::";
	for(i=front;i<=rear;i++)
	{
		cout<<a[i]<<" ";
	}
}

void main()
{
	int choice;
	int val;
	clrscr();
	queue q;
	while(1)
	{
		clrscr();
		cout<<"1.For Enqueue\n2.For Dequeu\n3.For Traverse\n4.For exit\nEnter Yuor choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter number to insert into queue::";
				cin>>val;

				q.enqueue(val);
				break;
			case 2:
				val=q.dequeue();
				if(val!=-1)
				{
					cout<<"Element deleted::"<<val;
				}
				break;
			case 3:
			q.traverse();
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Invalid choice::";
		}
		getch();

	}
}
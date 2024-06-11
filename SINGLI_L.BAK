#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
}*head=NULL;

struct node *create(int val)
{
	struct node *new1;
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=val;
	new1->link=NULL;
	return new1;
}

void insertfront(int val)
{
	struct node *new1;
	new1=create(val);
	if(head==NULL)
	{
		head=new1;
	}
	else
	{
		new1->link=head;
		head=new1;
	}

}

void insertend(int val)
{
	struct node *new1;
	new1=create(val);
	if(head==NULL)
	{
		new1->link=head;
		head=new1;
	}
	else
	{
		head=new1;
	}
}

void display()
{
	struct node *t=head;
	while(t!=NULL)
	{
		cout<<t->data<<" "<<t->link<<endl;
		t=t->link;
	}
}

int main()
{
	clrscr();
	insertfront(10);
	insertfront(20);
	insertend(30);
	insertfront(40);
	insertend(60);
	insertfront(100);
	display();
	getch();
	return 0;
}

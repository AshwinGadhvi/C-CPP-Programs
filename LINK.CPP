#include<iostream.h>
#include<conio.h>
#include<process.h>
class list
{
	int info;
	list *link;
	public:
		list()
		{
			info = 0;
			link = NULL;
		}
		void insert_beg(int x);
		void insert_end(int x);
		void insert_bet(int x,int pos);
		void insert_bet_val(int x,int value);
		int delete_beg();
		int delete_end();
		int delete_bet(int pos);
		void traverse();
};
int list::delete_bet(int pos)
{
	int value=-1,count=0;
	if(this->link == NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		list *temp=this;
		list *prv;
		while(temp->link!=NULL && count!=pos)
		{
			count++;
			prv=temp;
			temp=temp->link;
		}
		if(pos==count)
		{

			prv->link=temp->link;
			value=temp->info;
			delete(temp);
		}
		else
		{
			cout<<"Invalid position::";
		}
	}
	return value;
}
int list::delete_end()
{
	int value=-1;
	if(this->link == NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		list *temp=this;
		list *prv;
		while(temp->link!=NULL)
		{
			prv=temp;
			temp=temp->link;
		}
		prv->link=NULL;
		value=temp->info;
		delete(temp);
	}
	return value;
}
int list::delete_beg()
{
	int value=-1;
	if(this->link == NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		list *tmp=this->link;
		this->link=tmp->link;
		value=tmp->info;
		delete(tmp);
	}
	return value;
}
void list::insert_bet(int x,int value)
{
	list *tmp=new list();
	tmp->info = x;
	list *temp= this;
	while(temp->link !=NULL && temp->info!=value)
	{
		temp=temp->link;
	}
	if(temp->info==value)
	{
		tmp->link=temp->link;
		temp->link=tmp;
	}
	else
	{
		cout<<"invlid pos :";
	}
}
void list::insert_bet_val(int x,int pos)
{
	int count=0;

	list *tmp=new list();
	tmp->info = x;
	list *temp= this;
	while(temp->link !=NULL && count!=pos)
	{
		count++;
		temp=temp->link;
	}
	if(pos==count)
	{
		tmp->link=temp->link;
		temp->link=tmp;
	}
	else
	{
		cout<<"invlid pos :";
	}
}
void list::insert_end(int x)
{
	list *tmp=new list();
	tmp->info=x;
	list *temp=this;
	while(temp->link !=NULL)
	{
		temp=temp->link;
	}
	temp->link=tmp;
	tmp->link=NULL;
}
void list::insert_beg(int x)
{
	list *tmp = new list();
	tmp->info = x;
	tmp->link= this->link;
	this->link=tmp;
}
void list::traverse()
{
	list *temp=this;
	cout<<"\nList Elements::\n";
	while(temp->link != NULL)
	{
		temp=temp->link;
		cout<<" "<<temp->info;
	}
}
void main()
{
	int choice,pos,x,value;
	list *first = new list();
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"(1) for insert beginning\n(2) for insert end\n(3) for insert between\n(4) delete from beginning\n(5) delete from end\n(6) delete from between\n(7) Traverse\n(8) for exit\n(9) for insert after value\nEnter choice::";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter Number to insert::";
				cin>>x;
				first->insert_beg(x);
				break;
			case 2:
				cout<<"Enter Number to insert::";
				cin>>x;
				first->insert_end(x);
				break;
			case 3:
				cout<<"Enter Number to insert::";
				cin>>x;
				cout<<"Enter pos to insert:: ";
				cin>>pos;
				first->insert_bet(x,pos);

				break;
			case 4:
				x=first->delete_beg();
				if(x!=-1)
				{
					cout<<"Element deleted "<<x;
				}
				break;
			case 5:
				x=first->delete_end();
				if(x!=-1)
				{
					cout<<"Element deleted "<<x;
				}
				break;
			case 6:
				cout<<"Enter pos to delete : ";
				cin>>pos;
				x=first->delete_bet(pos);
				if(x!=-1)
				{
					cout<<"Element deleted "<<x;
				}
				break;
			case 7:
				first->traverse();
				break;
			case 9:
				cout<<"Enter Number to insert::";
				cin>>x;
				cout<<"Enter value to insert after a number:: ";
				cin>>value;
				first->insert_bet_val(x,value);
				break;
			case 8:
				exit(0);
				break;
			default:
				cout<<"Enter valid choice...";
				break;

		}
		getch();
	}


}


#include<iostream.h>
#include<conio.h>
#include<process.h>
class list
{
	int info;
	list *next,*prv,*f;
	public:
		list()
		{
			info = 0;
			next = NULL;
			prv = NULL;
			f = NULL;
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
	if(this->next == NULL)
	{
		cout<<"\033[0m";
		cout<<"List is Empty";
	}
	else
	{
		list *temp=this;
		list *prv;
		while(temp->next!=NULL && count!=pos)
		{
			temp=temp->next;
			count++;
		}
		if(pos==count)
		{
			prv=temp->prv;
			prv->next=temp->next;
			value=temp->info;
			(temp->next)->prv=prv;
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
	if(this->next == NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		list *temp=this;
		list *prv;
		while(temp->next!=NULL)
		{
			prv=temp;
			temp=temp->next;
		}
	    //	prv->temp->prv;
		prv->next=NULL;
		value=temp->info;
		delete(temp);
	}
	return value;
}
int list::delete_beg()
{
	int value=-1;
	if(this->next == NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		list *tmp=this->next;
		this->next=tmp->next;
		(tmp->next)->prv=this;
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
	while(temp->next !=NULL && temp->info!=value)
	{
		temp=temp->next;
	}
	if(temp->info==value)
	{
		tmp->next=temp->next;
		temp->next=tmp;
		tmp->prv=temp;
		(tmp->next)->prv=tmp;
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
	while(temp->next !=NULL && count!=pos)
	{
		count++;
		temp=temp->next;
	}
	if(pos==count)
	{
		tmp->next=temp->next;
		temp->next=tmp;
		tmp->prv=temp;
		(tmp->next)->prv=tmp;
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
	while(temp->next !=NULL)
	{
		temp=temp->next;
	}
	temp->next=tmp;
	tmp->next=NULL;
	tmp->prv=temp;
}
void list::insert_beg(int x)
{
	list *tmp = new list();
	tmp->info = x;
	tmp->next=this->next;
	this->next=f;
	f->prv=tmp;
	this->next=tmp;
	tmp->prv=this;
}
void list::traverse()
{
	list *temp=this;
	cout<<"\nList Elements::\n";
	while(temp->next != NULL)
	{
		temp=temp->next;
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


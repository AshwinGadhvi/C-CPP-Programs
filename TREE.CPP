#include<iostream.h>
#include<conio.h>

struct node{
	char data;
	struct node *left;
	struct node *right;
};

void main()
{
	struct node *root=(struct node*)malloc(sizeof(struct node));
	clrscr();
	root=create();
	preorder(root);
	getch();
}

struct node *create()
{
	struct node *p;
	char x;
	cout<<"Enter -1 for null : ";
	flushall();
	cin>>x;
	if(x=='n')
		return NULL;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=x;
	cout<<"Enter left child of : "<<x;
	p->left=create();
	cout<<"Enter right child of : "<<x;
	p->right=create();
	return p;
}

void preorder(struct node *t)
{
	if(!t==NULL)
	{
		cout<<" "<<t->data;
		preorder(t->left);
		preorder(t->right);
	}
}

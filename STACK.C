#include<stdio.h>
#include<conio.h>
#include<process.h>

void push(int a[],int *top,int x,int size)
{
	if((*top)>=(size-1))
	{
		printf("stack is FULL:");
	}
	else
	{
		(*top)++;
		a[(*top)]=x;
		printf("ELement inserted");

	}
}

void traverse(int a[],int top)
{
	int i;
	printf("stack Element:");
	for(i=0;i<=top;i++)
	{
		printf("%d ",a[i]);
	}
}

int POP(int a[],int *top)
{                                //val=-1 when return -1;
	int val;
	if((*top)==-1)
	{
		printf("stack is empty");
		return -1;
	}
	else
	{
		val=a[(*top)];
		(*top)--;
	}
	return val;
}

int PEEP(int a[],int top,int pos)
{
	if(top>=pos)
	{
		return a[pos];
	}
	else
	{
		printf("invalide position\n");
		return -1;
	}
}


void change(int a[],int top,int pos,int val)
{
	if(top>=pos)
	{
		a[pos]=val;
	}
	else
	{
		printf("invalide position\n");
	}
}

int isempty(int top)
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int isfull(int top,int size)
{
	if (top>=(size-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int choice,top=-1,a[100],val,size,pos;
	clrscr();
	printf("How many element :");
	scanf("%d",&size);
	while(1)
	{
		clrscr();
		printf("1.For PUSH Element\n2.For POP ELement\n3.For PEEP Element\n4.FOr change Element\n5.For IsEmpty stack\n6.For isFULL stack\n7.FOr traverse element\n8.For Exit\nENter Your choice::");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("ENter Nuber to insert::");
				scanf("%d",&val);
				push(a,&top,val,size);
				break;
			case 2:
				val=POP(a,&top);
				if(val!=-1)
				{
					printf("ELement deleted %d",val);
				}
				break;
			case 3:
				printf("Enter pos to peep");
				scanf("%d",&pos);
				val=PEEP(a,top,pos);
				if(val!=-1)
				{
					printf("Element at %d is %d",pos,val);
				}
				break;
			case 4:
				printf("Enter pos to change");
				scanf("%d",&pos);
				printf("Enter value to change");
				scanf("%d",&val);
				val=PEEP(a,top,pos);
				change(a,top,pos,val);
				break;
			case 5:
				if(isempty(top)==1)
				{
					printf("stack is empty:");
				}
				else
				{
					printf("stack is not empty:");
				}
			    //	isempty(top);
				break;
			case 6:
				if(isfull(top,size)==1)
				{
					printf("stack is full:");
				}
				else
				{
					printf("stack is not full::");
				}
			      //	isfull(top,size);
				break;
			case 7:
				traverse(a,top);
				break;
			case 8:
				exit(0);
				break;
			default:
				printf("Entered Choice invalid::");
				break;
			}
			getch();
		}

}

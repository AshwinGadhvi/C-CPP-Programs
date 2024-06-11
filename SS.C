#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

void read_str(char *str1)
{
	printf("Enter First String : ");
	gets(str1);
}
void display_str(char *str1)
{
	printf("Entered String is : ");
	puts(str1);
}
void str_len(char *str1)
{
	int i,count=0;
	for(i=0;str1[i]!=NULL;i++)
	{
		count++;
	}
	printf("Length is %d",count);
}

void str_con(char *str1,char *str2,char *temp1)
{
	int i,j,k;
	printf("Enter String For Concate : ");
	gets(str2);

	i=0;
	j=0;
	k=0;
	while(str1[i]!=NULL)
	{
		temp1[j]=str1[i];
		i++;
		j++;
	}
	temp1[j]=NULL;
	while(str2[k]!=NULL)
	{
		temp1[j]=str2[k];
		i++;
		k++;
	}
	temp1[j]=NULL;
	printf("Concate of two string is : %s",temp1);
}

void main()
{
	int choice;
	char *str1,*str2,*temp1;
	while(1)
	{
		clrscr();
		printf("1.For Read String\n2.For Display String\n3.For Length\n4.For Concate\n5.For Exit\nEnter Your Choice : ");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice)
		{
			case 1:
				read_str(str1);
				break;
			case 2:
				display_str(str1);
				break;
			case 3:
				str_len(str1);
				break;
			case 4:
				str_con(str1,str2,temp1);
				break;
			case 5:
				exit(0);
			default:
				printf("invalid choice");
				break;
		}
		getch();
	}

}
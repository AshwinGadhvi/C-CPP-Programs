#include<stdio.h>
#include<conio.h>

struct student
{
	int roll;
	char a[20];
};

void main()
{
	struct student s1,*s2;
	clrscr();
	printf ("From normal structure::\n");
	printf ("enter student name::");
	scanf ("%s",&s1.a);
	printf ("enter roll number::");
	scanf ("%d",&s1.roll);
	printf ("name is:-%s\n",s1.a);
	printf ("roll number:-%d\n",s1.roll);
	printf ("_____________________________\n");
	printf ("From pointer to structure::\n");
	printf ("enter name::");
	scanf ("%s",&s2->a);
	printf("enter roll number::");
	scanf ("%d",&s2->roll);
	printf ("name:-%s\n",s2->a);
	printf ("Roll:-%d",s2->roll);
	getch();
}
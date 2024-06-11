#include<stdio.h>
#include<conio.h>

void main()
{
	int day,month,year;
	char Date1[]="my_name_is_ashwin 2004 11 24";
	char a1[20],a2[15],str[50];
	float f;
	clrscr();
	sscanf (Date1,"%s%s%d%f",a1,a2,&day,&f);
	printf ("string1=%s\n",a1);
	printf ("string2=%s\n",a2);
	printf ("int=%d\n",day);
	printf ("float=%f",f);


	sprintf(str,"Name is %s SSlary: %s: %d deduction :%f",a1,a2,day,f);
	puts(str);
	getch();
}
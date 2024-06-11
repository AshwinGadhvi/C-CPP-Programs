#include<stdio.h>
#include<conio.h>

void main()
{
	int basic,da,hra,medical,interst,incometax,gross_salary,deduction,net_salary;
	clrscr();
	printf ("enter the value of interst,incometax::");
	scanf ("%d%d",&interst,&incometax);
	deduction=interst+incometax;
	printf("deduction is %d",deduction);
	printf ("\nenter the value of basic,da,hra,medical");
	scanf("%d%d%d%d",&basic,&da,&hra,&medical);
	gross_salary=basic+da+hra+medical;
	printf("gross_salary is %d",gross_salary);
	printf ("enter the value of deduction and gross_salary");
     //	scanf("%d%d",&deduction,&gross_salary);
	net_salary=gross_salary-deduction;
	printf ("net_salary is %d",net_salary);
	getch();
}
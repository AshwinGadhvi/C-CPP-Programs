#include<stdio.h>
#include<conio.h>

void main()
{
	int basic,da,hra,medical,interst,incometax,grosssalary,deducation,ns;
	clrscr();

	printf ("enter the value of interst incometax");
	scanf ("%d%d",&interst,&incometax);
	deducation=interst+incometax;
	printf ("deducation is %d",deducation);
	printf ("enter thhe valuee of basic da hra medical");
	scanf ("%d%d%d%d",&basic,&da,&hra,&medical);
	grosssalary=basic+da+hra+medical;
	printf ("grosssalary is %d",grosssalary);
	printf ("enter the value of grosssalary deducation");
	scanf ("%d%d",&grosssalary,&deducation);
	ns=grosssalary-deducation;
	printf ("ns is %d",ns);
	getch();
}
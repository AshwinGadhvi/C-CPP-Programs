//create two dimensional array

#include<iostream.h>
#include<conio.h>

void main()
{
	int **mat,m,n,i,j;
	clrscr();
	cout<<"Enter the size of array : ";
	cin>>m>>n;
	mat = new int* [m];
	for(i=0;i<m;i++)
	{
		mat[i] = new int [n];
	}
	cout<<"Enter the matrix element : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"mat["<<i<<"]["<<j<<"] = ";
			cin>>mat[i][j];
		}
	}
	cout<<"Entered matrix is : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<mat[i][j]<<endl;
		}
	}
	for(i=0;i<m;i++)
	{
		delete [] mat[i];
	}
	delete [] mat;
	getch();
}
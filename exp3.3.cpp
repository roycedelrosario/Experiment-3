#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, j, n;
	char x[100], y[100];
	
	cout<<"How many elements? ";
	cin>>n;
	cout<<"What is the word? ";
	
	for(i=0; i<n; i++)
	{
		cin>>x[i];
	}
	cout<<"The output is: ";
	
	for(i=n-1, j=0; i>=0; i--,j++)
	{
		y[i]=x[j];
	}
	for(i=0; i<n; i++)
	{
		cout<<y[i];
	}
	getch();
	return 0;
	
}

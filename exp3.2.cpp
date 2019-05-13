#include<iostream>
#include<conio.h>
using namespace std;

const int province=3;
const int week=7;

int main()
{
	int temperature[province][week];
	
	cout<<"Enter the temperature for a week for Province A, Province B, and then Province C \n";
	
	for(int i=0; i<province; ++i)
	{
		for(int j=0; j<week; ++j)
		{
			cout<<"Proince "<<i+1<<", day "<<j+1<<" : ";
		 	cin>>temperature[i][j];	
		}			
	}
	
	cout<<"\nDisplaying Values \n";
	
	for(int i=0; i<province; i++)
	{
		for(int j=0; j<week; ++j)
		{
			cout<<"Province "<<i+1<<", day "<<j+1<<" = "<<temperature[i][j]<<endl;
		}
	}
	getch();
	return 0;
}

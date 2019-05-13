#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n, i, small, large, arr[10], sum=0;
	double average;
	n=10;
	
	for(i=0; i<n; i++)
	{
		cout<<"Enter a number: ";
		cin>>arr[i];
	}
	small=arr[0];
	large=arr[0];
	
	for(i=1; i<n; i++)
	{
		if(arr[i]<small)
		small=arr[i];
		if(arr[i]>large)
		large=arr[i];
	}
	for(i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	average=(double)sum/n;
	cout<<"Largest integer is "<<large<<endl;
	cout<<"Smallest integer is "<<small<<endl;
	
	cout<<"Sum: "<<sum<<endl;
	cout<< "Average: "<<average;
		
	getch();
	return 0;
}

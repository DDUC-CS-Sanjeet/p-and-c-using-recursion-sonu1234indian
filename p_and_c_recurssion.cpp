#include<iostream>
using namespace std;

int permutation(int n,int r)
{
	if(r==0)
		return 1;
	else
		return	n*permutation(n-1,r-1);
}

int combination(int n,int r)
{
	if(r==0)
		return 1;
	else
		return (1.0*n/r)*combination(n-1,r-1);
}

int main()
{
	int i,n,r,choice;
	cout<<"enter the value of n : ";
	cin>>n;
	cout<<"enter the value of r : ";
	cin>>r;
	try
	{
		if(n<0||r<0||n<r)
		{
			throw(-1);
		}
		else
		{
			cout<<"\n1. Calculate Permutation \n";
			cout<<"2. Calculate combination \n";
			cout<<"\nenter your choice : ";
			cin>>choice;
			switch(choice)
			{	
				case 1:
						cout<<"the permutation is : "<<permutation(n,r);
						break;
				case 2:
						cout<<"the combinatin is : "<<combination(n,r);
						break;
				default:
						cout<<"\n an invalid choice.";		
			}	
		}
	}
	catch(int i)
	{
		cout<<"Permutation and Combination are not possible as the no./no.'s negative or the value of n is less than r.";		
	}
	 
}

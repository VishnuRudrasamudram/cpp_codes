#include<iostream>

using namespace std;

int cout_squares(int n)
{
	int sum = 0;
	for(int i=1;i<n+1;i++)
	{
		sum += (i*i);
	}
	return sum;
}

main()
{
	int ord;
	cout<<"Enter the order(n) of the square: ";
	cin>>ord;
	cout<<"Total number of possible squares is "<<cout_squares(ord)<<endl;
}

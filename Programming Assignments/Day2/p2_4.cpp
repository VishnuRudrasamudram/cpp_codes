#include<iostream>
using namespace std;
main()
{
int x=7, y=6;
//cout<<"Before prepocessing:: X = "<<x<<" Y = "<<y<<endl;

//cout<<"Enter x and y values:: ";
//cin>>x>>y;

cout<<"Pre-processor"<<endl;
#if (x>y) 
	cout<<"X is greater than Y"<<endl;
#else 
	cout<<"Y is greater than X"<<endl;
#endif

cout<<"Execution"<<endl;
if(x>y)
	cout<<"X is greater than Y"<<endl;
else
	cout<<"Y is greater than X"<<endl;
}

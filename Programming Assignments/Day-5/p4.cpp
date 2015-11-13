#include<iostream>

using namespace std;

class TClass
{
	public:
	TClass()
	{
		cout<<"Constructor invoked"<<endl;
	}
	
	~TClass()
	{
		cout<<"Destructor invoked"<<endl;
	}

	TClass(const TClass & obj)
	{
		cout<<"Copy constructor invoked"<<endl;
	} 
};

main()
{
	TClass tcl;
	TClass tcl2 = tc1;
}

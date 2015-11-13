#include<iostream>

using namespace std;

class Operator
{
	int data;
	public:
	void get_data()
	{
		int a;
		cin>>a;
		data = a;
	}
	
	Operator & operator +(Operator & op)
	{
		Operator ret;
		ret.data = op.data+this->data;
		return ret;
	}
		
	void __show()
	{
		cout<<data<<endl;
	}
};

main()
{
	Operator a,b,c;
	b.get_data();
	c.get_data();
	a = (b+(b+c))+c;
	a.__show();
}

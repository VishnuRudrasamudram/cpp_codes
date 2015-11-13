#include<iostream>

using namespace std;

class Base
{
	public:
	void foo()
	{
		cout<<"Foo parent"<<endl;
	}

	virtual void Vfoo()
	{
		cout<<"Vfoo parent"<<endl;
	}

	virtual void PVfoo() = 0;
};

class Derive:public Base
{
	public:
	void PVfoo()
	{
		cout<<"PVfoo derived"<<endl;
	}
};

main()
{
	Derive *b,p;
	b = &p;
	b->foo();
	b->Vfoo();
	b->PVfoo();
}

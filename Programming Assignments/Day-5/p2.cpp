#include<iostream>

using namespace std;

class DTBase
{
	public:
	DTBase()
	{
		cout<<"Base class constructor"<<endl;
	}
	virtual ~DTBase()
	{
		cout<<"Virtual destructor of base class"<<endl;
	}
};

class DTDerive:public DTBase
{
	public:
	DTDerive()
	{
		cout<<"Derived class constructor"<<endl;
	}
	
	~DTDerive()
	{
		cout<<"Destructor of derived class"<<endl;
	}
};

class ABase
{
	public:
	ABase()
	{
		cout<<"constructor - ABase"<<endl;
	}

	~ABase()
	{
		cout<<"destructor - ABase"<<endl;
	}
};

class BDer:virtual public ABase
{
	public:
	BDer()
	{
		cout<<"constructor - BDer"<<endl;
	}
	
	~BDer()
	{
		cout<<"destructor - BDer"<<endl;
	}
};

class CDer:virtual public ABase
{
	public:
	CDer()
	{
		cout<<"constructor - CDer"<<endl;
	}
	
	~CDer()
	{
		cout<<"destructor - CDer"<<endl;
	}
};

class DDer:public BDer,public CDer
{
	public:
	DDer()
	{
		cout<<"constructor - DDer"<<endl;
	}

	~DDer()
	{
		cout<<"destructor - DDer"<<endl;
	}
};

main()
{
	DTDerive dtd;
	DDer ddr;
}

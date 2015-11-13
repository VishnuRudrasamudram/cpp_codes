#include<iostream>
#include<string>

using namespace std;

template <class T>

float tax_cal(T &obj)
{
	cout<<"Salary of "<<obj.name<<" is"<<obj.income<<endl;
	float tax;
	tax = obj.income*0.1;
	cout<<"Income tax is "<<tax<<endl;
	return tax;
}

class Teacher
{
	string name;
	float income;
	//string oc = "Teacher";
	public:
	friend float tax_cal(T &obj);
	Teacher()
	{
		string n;
		cout<<"Enter name"<<endl;
		cin>>n;
		name = n;
		cout<<"Enter income"<<endl;
		int ic;
		cin>>ic;
		income = ic;
	}
};

class Lawyer
{
        string name;
        float income;
	//string oc = "Lawyer";
        public:
	friend float tax_cal(T &obj);
        Lawyer()
        {
                string n;
                cout<<"Enter name"<<endl;
                cin>>n;
                name = n;
                cout<<"Enter income"<<endl;
                int ic;
                cin>>ic;
                income = ic;
        }
};

class Engineer
{
        string name;
        float income;
	//string oc = "Engineer";
        public:
	friend float tax_cal(T &obj);
        Engineer()
        {
                string n;
                cout<<"Enter name"<<endl;
                cin>>n;
                name = n;
                cout<<"Enter income"<<endl;
                int ic;
                cin>>ic;
                income = ic;
        }
};

main()
{
	float f;
	Teacher te;
	f = tax_cal(te);
	Engineer en;
	f = tax_cal(en);
	Lawyer la;	
	f = tax_cal(la);
}

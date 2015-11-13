#include<iostream>
#include<string>
using namespace std;
class Teacher;
class Lawyer;
class Engineer;

class Teacher
{
	string name;
	int income;
	public:
	friend void tax_cal(Teacher &,Engineer &,Lawyer &);
	Teacher()
	{
		cout<<"Enter name of Teacher: ";
		cin>>name;
		cout<<"Enter income: ";
		cin>>income;
	
	}
};

class Lawyer
{
	string name;
	int income;
	public:
	friend void tax_cal(Teacher &,Engineer &,Lawyer &);
	Lawyer()
        {
                cout<<"Enter name of Lawyer: ";
                cin>>name;
                cout<<"Enter income: ";
                cin>>income;
	        }


};

class Engineer
{
	string name;
	int income;
	public:
	friend void tax_cal(Teacher &,Engineer &,Lawyer &);
	Engineer()
        {
                cout<<"Enter name of Engineer: ";
                cin>>name;
                cout<<"Enter income: ";
                cin>>income;
	
        }

};

void tax_cal(Teacher &te,Engineer &en,Lawyer &la)
{
	cout<<"Tax for "<<te.name<<" is "<<te.income*0.1<<endl;
	cout<<"Tax for "<<en.name<<" is "<<en.income*0.2<<endl;
	cout<<"Tax for "<<la.name<<" is "<<la.income*0.25<<endl;
}
int main()
{
	Teacher te;
	Engineer en;
	Lawyer la;
	tax_cal(te,en,la);
}
	


#include<iostream>
#include<string>
using namespace std;

class student
{
	
	public:
	  string name;
        string roll;
        string clas;

	void getSTD_info()
	{
		string a,b,c;
		cout<<"Enter student name:: "<<endl;
		cin>>name;
		
		cout<<"Enter roll number:: "<<endl;
		cin>>roll;
		
		cout<<"Enter class:: "<<endl;
		cin>>clas;
		
	}
};

class sports:virtual public student

{
	
	public:
	int score;
	void getSPT_info()
	{
		int sc;
		cout<<"Enter score:: "<<endl;
		cin>>score;
	}
};

class academics: virtual public student
{
	
	public:
	int eng,mat,sci;
	void getACD_info()
	{
		int e,m,s;
		cout<<"Enter maths marks:: "<<endl;
		cin>>m;
		mat = m;
		cout<<"Enter english marks:: "<<endl;
		cin>>e;
		eng = e;
		cout<<"Enter science marks:: "<<endl;	
		cin>>s;
		sci = s;
	}
};

class result: public sports, public academics
{
	public:
	void show()
	{
		getSTD_info();
		getSPT_info();
		getACD_info();
		cout<<"Student:: "<<endl;
		cout<<"Name - "<<name<<endl;
		cout<<"Roll no. - "<<roll<<endl;
		cout<<"Class - "<<clas<<endl;

		cout<<"Sports ::"<<endl;
		cout<<"Score - "<<score<<endl;
		
		cout<<"Academics ::"<<endl;
		cout<<"maths - "<<mat<<endl;
		cout<<"English - "<<eng<<endl;
		cout<<"Science - "<<sci<<endl;
	}
};
main()
{
result s;
s.show();
}


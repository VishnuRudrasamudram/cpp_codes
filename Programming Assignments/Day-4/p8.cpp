#include<iostream>
#include<string>

using namespace std;

class bird1
{	
	public:
	string name;
	string color;
	bool can_fly;

	void get_info()
	{
		cout<<"Name:: ";
		cin>>name;
		cout<<"Color:: ";
		cin>>color;
		cout<<"Can fly?(0/1)  ";
		cin>>can_fly;
	}
	
};

class bird2
{	
	public:
	string name;
        string color;
        bool can_fly;
	
        void get_info()
        {
                cout<<"Name:: ";
                cin>>name;
                cout<<"Color:: ";
                cin>>color;
                cout<<"Can fly?(0/1)  ";
                cin>>can_fly;
        }


};

class bird3
{
	public:
	string name;
        string color;
        bool can_fly;
	
        void get_info()
        {
                cout<<"Name:: ";
                cin>>name;
                cout<<"Color:: ";
                cin>>color;
                cout<<"Can fly?(0/1)  ";
                cin>>can_fly;
        }

};

class information_bird:public bird1,public bird2, public bird3
{
	public:
	void put_info()
	{
		bird1::get_info();
		bird2::get_info();
		bird3::get_info();
		cout<<"Bird 1::"<<endl;
		cout<<"Name - "<<bird1::name<<endl;
		cout<<"Color - "<<bird1::color<<endl;
		cout<<"Can fly? "<<bird1::can_fly<<endl<<endl;

		cout<<"Bird 1::"<<endl;
                cout<<"Name - "<<bird2::name<<endl;
                cout<<"Color - "<<bird2::color<<endl;
                cout<<"Can fly? "<<bird2::can_fly<<endl<<endl;

		cout<<"Bird 1::"<<endl;
                cout<<"Name - "<<bird3::name<<endl;
                cout<<"Color - "<<bird3::color<<endl;
                cout<<"Can fly? "<<bird3::can_fly<<endl<<endl;
	}
};

main()
{

	information_bird ib;
	ib.put_info();
}

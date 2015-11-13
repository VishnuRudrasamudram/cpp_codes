#include<iostream>
#include<string>
using namespace std;

int pow(int a, int b)
{
	int k = b;
	int j = 1;
	while(k>0)
	{
		j*=a;
		k--;
	}
	return j;
}

int togbit(int n, int pos)
{
	return(n^pow(2,pos-1));
}	

int setbit(int n, int pos)
{
        return(n|pow(2,pos-1));
}

int clearbit(int n, int pos)
{
        return(n&(~pow(2,pos-1)));
}

bool findbit(int n, int pos)
{
	int k;
	k = (n&(pow(2,pos-1)));
	if(k==0)
		return 0;
	else
		return 1;
}
main()
{
	int num,bit,ch;
	cout<<"Enter a number:: ";
	cin>>num;
	cout<<"\n\t\t\tMAIN MENU"<<endl;
	cout<<"1. Toggle a bit"<<endl;
	cout<<"2. Set a bit"<<endl;
	cout<<"3. Clear a bit"<<endl;	
	cout<<"4. Identify the bit"<<endl;
	cout<<"5. Exit"<<endl;

	bool run = 1;
	while(run)
	{
		cout<<"Enter your choice (1-5): ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Which bit do you want to toggle? : ";
				cin>>bit;
				cout<<"Result:: "<<togbit(num,bit)<<endl;
				break;
	
			case 2:
                                cout<<"Which bit do you want to set? : ";
                                cin>>bit;
                                cout<<"Result:: "<<setbit(num,bit)<<endl;
                                break;

			case 3:
                                cout<<"Which bit do you want to clear? : ";
                                cin>>bit;
                                cout<<"Result:: "<<clearbit(num,bit)<<endl;
                                break;

			case 4:
                                cout<<"The bit at which position do you want to identify?:  ";
                                cin>>bit;
                                cout<<"Result:: "<<findbit(num,bit)<<endl;
                                break;

			case 5:
				run = 0;
				break;
			default:
				cout<<"Enter correct choice"<<endl;
		}
	}
}

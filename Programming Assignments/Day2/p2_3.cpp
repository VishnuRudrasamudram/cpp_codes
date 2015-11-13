#include<iostream>
#include<math.h>
 
#define setbit(n, b) n|(int)pow(2,b-1)
#define clearbit(n, b) n&(~(int)pow(2,b-1))
#define togglebit(n,b) n^(int)pow(2,b-1)
#define findbit( n, b) (n&(int)pow(2,b-1)?1:0)

using namespace std;

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
	int res;
	while(run)
	{
		cout<<"Enter your choice (1-5): ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Which bit do you want to toggle? : ";
				cin>>bit;
				res = togglebit(num,bit);
				cout<<"Result:: "<<res<<endl;
				break;
	
			case 2:
                                cout<<"Which bit do you want to set? : ";
                                cin>>bit;
				res = setbit(num,bit);
                                cout<<"Result:: "<<res<<endl;
                                break;

			case 3:
                                cout<<"Which bit do you want to clear? : ";
                                cin>>bit;
				res = clearbit(num,bit);
                                cout<<"Result:: "<<res<<endl;
                                break;

			case 4:
                                cout<<"The bit at which position do you want to identify?:  ";
                                cin>>bit;
				res = findbit(num,bit);
                                cout<<"Result:: "<<res<<endl;
                                break;

			case 5:
				run = 0;
				break;
			default:
				cout<<"Enter correct choice"<<endl;
		}
	}
}

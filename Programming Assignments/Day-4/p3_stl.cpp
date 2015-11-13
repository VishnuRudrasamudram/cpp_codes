#include<iostream>
#include<list>

using namespace std;

list<int> dll;
list<int>::iterator ite;

void add_node(int d)
{
	dll.push_back(d);
}

void delete_node(int d)
{
	dll.remove(d);
}

void search(int d)
{
	for(ite = dll.begin();ite!=dll.end();ite++)
                if(*ite == d)
                {
                        cout<<"Found"<<endl<<endl; return;
                }
        cout<<"Element not found"<<endl<<endl;

}

void display()
{
	for(ite = dll.begin();ite!=dll.end();ite++)
		cout<<*ite<<" ";
	cout<<endl;
}

main()
{
	int choice, element;
	int run=1;
	while(run)
	{
		cout<<"MENU- Double Linked List"<<endl;
		cout<<"1. Add Node"<<endl;
		cout<<"2. Delete Node"<<endl;
		cout<<"3. Display Node"<<endl;
		cout<<"4. Search Data"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter your choice:: ";
		cin>>choice;
		//cout<<endl;
		switch(choice)
		{
			case 1:
				cout<<"Enter element :: "<<endl;
				cin>>element;
				add_node(element);
				break;
			case 2:
				cout<<"Enter element :: "<<endl;
                                cin>>element;
                                delete_node(element);
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"Enter element :: "<<endl;
                                cin>>element;
                                search(element);
				break;
			case 5:
				run = 0;
				break;

				
		}
	}
}

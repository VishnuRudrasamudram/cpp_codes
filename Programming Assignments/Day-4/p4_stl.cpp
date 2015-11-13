#include<iostream>
#include<list>
#include<fstream>

using namespace std;

list<int> create_list(ifstream &fin)
{
	list<int> ret;
	char ch;
	int num;
	while(fin>>num)
	{
		ret.push_back(num);
		fin.get(ch);
		if(ch=='\n')
			break;
	}
	ret.sort(greater<int>());
	return ret;
}

void display(list<int> li)
{
	list<int>::iterator it;
	for(it=li.begin();it!=li.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}

list<int> merger(list<int> l1, list<int> l2)
{
	list<int> ret;
	ret.merge(l1);
	ret.merge(l2);
	ret.sort(greater<int>());
	return ret;
}	

int main(int argc, char * argv[])
{
	//char * fn = argv[1];
	ifstream fn(argv[1]);
	list<int> l1,l2,l3;
	l1 = create_list(fn);
	cout<<"List - 1: ";
	display(l1);
	l2 = create_list(fn);
	cout<<"List - 2: ";
	display(l2);
	l3 = merger(l1,l2);
	cout<<"List - 3: ";
	display(l3);
}

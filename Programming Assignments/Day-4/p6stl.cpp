#include<iostream>
#include<list>
#include<fstream>

using namespace std;

list<int> create_list(char * fp)
{
	list<int> ret;
	int d;
	fstream fin(fp);
	while(fin>>d)
	{
		ret.push_back(d);
	}	
	ret.sort();
	return ret;
}

void display(list<int> ar)
{	
	list<int>::iterator it;
	for(it=ar.begin();it!=ar.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}	

int main(int argc, char * argv[])
{
	list<int> l1;
	l1 = create_list(argv[1]);
	l1.unique();
	display(l1);
}

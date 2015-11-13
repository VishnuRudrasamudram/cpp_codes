#include<iostream>
using namespace std;

void fun();
void fun1();

static int c = 10;

main()
{
	while(c--)
		fun();
	while(c<10)
	{
		fun1();
		c++;
	}

}

void fun()
{
	static int i = 5;
	i++;
	cout<<"fun::i  "<<i<<endl;
	cout<<"count "<<c<<endl;
}

void fun1()
{
	auto int i = 5;
	i++;
	cout<<"fun1::i "<<i<<endl;
	cout<<"cout "<<c<<endl;
}

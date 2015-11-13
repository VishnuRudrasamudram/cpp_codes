#include<iostream>
#define DIVIDE_BY_TWO(x) x>>1;
#define MULTIPLY_BY_TWO(x) x<<1;
using namespace std;

main()
{
	int res;
	res = DIVIDE_BY_TWO(8);
	cout<<res<<endl;
	res = MULTIPLY_BY_TWO(8);
	cout<<res<<endl;
}



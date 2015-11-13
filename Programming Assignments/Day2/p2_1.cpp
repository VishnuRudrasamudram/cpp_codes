#include<iostream>
#include<string>
#if 1
#define debug_print cout<<"DEBUG PRINT -  "<<__func__<<" and line no.  "<<__LINE__<<endl;
#else
#define debug_print cout<<;
#endif
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
	debug_print;
	return(n^pow(2,pos-1));
}	

bool findbit(int n, int pos)
{
	debug_print;
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
	cout<<"Enter bit:: ";
	cin>>bit;
	cout<<togbit(num,bit)<<endl;
	cout<<findbit(num,bit)<<endl;
	
}

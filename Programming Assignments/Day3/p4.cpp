#include<iostream>

using namespace std;

double power(double n, int p=2)
{
	double ret = 1;
	if(p==0)
		ret = 1;
	else if(p<0)
		while(p<0)
		{
			ret/=n;
			p++;
		}
	else
		while(p>0)
		{
			ret*=n;
			p--;
		}
	return ret;
}

main()
{
	cout<<"Omitting second orgument:: "<<endl;
	cout<<power(10)<<endl;
	cout<<"Giving second argument:: "<<endl;
	cout<<power(10,-4)<<endl;
}

#include<iostream>

using namespace std;

template <typename T,typename Size>
float avg(T arr, Size s)
{
	float sum = 0;
	for(int i=0;i<s;i++)
	{
		sum+=(arr[i]/s);
	}

	return sum;
}

main()
{
	float a[] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"Array contents:"<<endl;
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cout<<"Average of elements = "<<avg(a,10)<<endl;
}

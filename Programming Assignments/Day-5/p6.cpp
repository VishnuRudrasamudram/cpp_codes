#include<iostream>

using namespace std;


void sort(float * arr, int size)
{
	for(int i = size;i>0;i--)
	{
		for(int j = 0;j+1<i;j++)
		{	
			if(arr[j]>arr[j+1])
			{
				float temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
}

main()
{
	float a[] = {32,71,12,45,26,80,53,33};
	cout<<"Before sort : ";
	for(int i=0;i<8;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	sort(a,8);
	cout<<"After sort  : ";
	for(int i=0;i<8;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

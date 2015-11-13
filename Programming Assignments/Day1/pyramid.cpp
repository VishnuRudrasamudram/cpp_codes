#include<iostream>

using namespace std;

main()
{
	int i,j,k,l;
	char c;
	int n = 10;
	for(i=0;i<n;i++)
        {
		for(l=0;l<(n-1-i); l++)
                	cout<<" ";

		for(j=1;j<i+1;j++)
                	cout<<j;

               	cout<<'*';

                for(k=j-1;k>0;k--)
                {
                	c = (96+k);
                        cout<<c;

                }
               cout<<endl;
        }

	
}


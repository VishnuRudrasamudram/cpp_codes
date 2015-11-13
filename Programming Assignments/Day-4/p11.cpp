#include<iostream>
using namespace std;
int strlen(char *str)
{
	int i=0; 
	while(str[i]!='\0')
		i++;	
	return i;
}

int  cmpstr(char *x,char* y)
{
	int len1 = strlen(x);
	int len2 = strlen(y);
	int c=0,n=0;
	if(len1==len2)
	{
		for(int j=0;j<len1;j++)
			if(x[j]==y[j])	
				c++;
				
		for(int j=0;j<len1;j++)
			if((x[j]-y[j]==32||y[j]-x[j]==32)||x[j]==y[j])
				n++;
			
		if(c==len1)
			return 0;	
		
		else if(n==len1)
			return 1;
		
		else
			return -1;		
	
	}
	else
		return -1;

}
main()
{
	char * a,*b;
	a = new char;
	b = new char;
	while(1)
	{
		cout<<"S1 : ";
		cin>>a;
		cout<<"S2 : ";
		cin>>b;
		cout<<cmpstr(a,b)<<endl;
	}
	
}


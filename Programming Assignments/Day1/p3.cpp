#include<iostream>

using namespace std;
    
int StrLen(char * s)
{
	int i=0;
   	while(s[i]!='\0')
    		i++;
    	return i;
}
    
char * opstr(char * str1, char * str2)
{
	int len1 = StrLen(str1);
	int len2 = StrLen(str2);
	char * ops = new char;
	int i = 0;
	int j = 0;
	int len= len1+len2;
	for(i=0;i<len1;i++)
		ops[i] = str1[len1-i-1];
	for(j=0;j<len2;j++)
		ops[j+len1] = str2[j];
		return ops; 
}

int main(int argc, char * argv[])
{
	cout<<opstr(argv[1],argv[2])<<endl;
	return 0;
}

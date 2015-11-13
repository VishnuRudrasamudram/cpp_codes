#include<iostream>
using namespace std;

int StrLen(char * st)
{
	int i = 0;
	while(st[i]!='\0')
		i++;
	return i;
}

bool isPalindrome(char * s)
{
	int len = StrLen(s);
	int nl = len/2;
	for(int i=0;i<nl;i++)
	{
		if(s[i] != s[len-i-1])
			return 0;
	}
	
	return 1;
}

int main(int argc, char * argv[])
{
	if(isPalindrome(argv[1]) == 1)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not a palindrome"<<endl;
	return 0;
}

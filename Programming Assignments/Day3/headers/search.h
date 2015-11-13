#ifndef SEARCH_H
#define SEARCH_H
#include<string>

using namespace std;

string __compress(string s, char ch)
{
	string ret;
	int i=0;
	while(s[i] != '\0')
	{
		if(s[i] != ch )
			ret+=s[i];
		i++;
	}
	return ret;
}

bool __search(string str, string sbst)
{
	int i,j;
	int len1 = str.length();
	int len2 = sbst.length();
	if(len1>len2)
	{
		for(i=0;i<len1-len2+1;i++)
		{
			string news;
			int count = 0;
			for(j = 0;j<len2;j++)
			{
				news += str[i+j];
			}

			for(int k=0;k<len2;k++)
			{
				if(news[k]==sbst[k])
					count++;
			}

			if(count == len2)
				return 1;
		}	
		return 0;
	}

	else return 0;
}

bool __search(string str, char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			return 1;
		}
		i++;
	}
	return 0;
}
#endif

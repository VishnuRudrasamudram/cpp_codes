#include<iostream>
#include<map>
#include<string>
#include<cstring>
using namespace std;

int StrLen(string);

string opStr(string s)
{

	int len = StrLen(s);
	string ops;
	int ord,i=0;
	char ch;
	for(i=0;i<len;i++)
	{
		ord = s[i];
		if (ord>96 && ord<122)
		{
			ch = (char) (ord%122)-32;
			ops =ops+ ch;
			

		}
		else
		{

			ops = ops+s[i];
			
		}
	}
	return ops;
}


int StrLen(string st)
{
	int i=0;
	while(st[i] != '\0')
		i++;
	return i;
}

bool found(string s, char c)
{
	int len = StrLen(s);
	int i=0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			return 1;
		i++;
	}
	return 0;
}


map<char,int> hist(string s)
{
	map<char,int> shist;
	int i=0;
	shist[s[i]] = 0;
	while(s[i] !='\0')
	{	
		if((s[i]>'a' && s[i] < 'z')||(s[i]>'A' && s[i]<'Z'))
		{
			if(found(s,s[i]))
				shist[s[i]] ++;
			else
				shist[s[i]] = 1;
		}
		i++;
	}
	return shist;
}

main()
{
	string s;
	getline(cin,s);
	
	string sss = opStr(s);
	map<char,int> rhist;
	rhist = hist(sss);
	map<char,int>::iterator it;
	for(it=rhist.begin();it!=rhist.end();it++)
	{
		cout<<it->first<<" occurs "<<it->second<<" times\n"<<endl;
	}
}

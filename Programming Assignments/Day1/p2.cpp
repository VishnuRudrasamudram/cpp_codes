#include<iostream>

using namespace std;

int StrLen(char *);

char * opStr(char * s)
{

	int len = StrLen(s);
	char * ops = new char;
	int ord,i=0;
	char ch;
	for(i=0;i<len;i++)
	{
		ord = s[i];
		//cout<<i<<" "<<ord<<endl;
		if((ord>65 && ord<91))
		{
			ch = (char) (ord%90) + 1;
			ops[i] = ch;
			cout<<ch;
		}

		else if (ord>97 && ord<122)
		{
			ch = (char) (ord%122)+1;
			ops[i] = ch;
			cout<<ch;
		}
		else
		{
			cout<<s[i];
			ops[i] = s[i];
		}

	}
	cout<<endl;
	ops[i] = '\0';
	return ops;
}

int StrLen(char * st)
{
	int i=0;
	while(st[i] != '\0')
		i++;
	return i;
}

main()
{
	cout<<opStr("hello")<<endl;
}

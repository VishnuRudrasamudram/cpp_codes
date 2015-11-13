#include<iostream>

using namespace std;

int StrLen(string st)
{
	int i=0;
	while(st[i] != '\0')
		i++;
	return i;
}

bool all_small(char * s)
{
	int i = 0;
	int len = StrLen(s);
	int count = 0;
	while(s[i]!='\0')
	{
		if(s[i]>96 && s[i]<123)
		{
			cout<<s[i]<<" "<<(int) s[i]<<endl;
			count++;
		}
		i++;
	}
	cout<<endl; 
	if(count == len)
		return 1;
	else 
		return 0;
}

char * opStr(char * s)
{

        int len = StrLen(s);
        char * ops;
        int ord,i=0;
        char ch;
        for(i=0;i<len;i++)
        {
                ord = s[i];
                if (ord>96 && ord<122)
                {
                        ch = (char) (ord%122)-32;
                        ops[i] = ch;


                }
                else
                {

                        ops[i] = s[i];

                }
        }
        return ops;
}


main()
{
	char * a = "abcdeizf";
	char * b = "Aced_ee";
	char * c = "deeI!,ce";
	cout<<all_small(a)<<endl<<all_small(b)<<endl<<all_small(c)<<endl;
}

#include<iostream>

using namespace std;
  
int StrLen(char * s)
{
	int i=0;
        while(s[i]!='\0')
            i++;
        return i;
}
    
bool StrComp(char * str1, char * str2)
{
	int len1 = StrLen(str1);
	int len2 = StrLen(str2);
	if(len1 != len2)
		return 0;
        else
        {
            int i=0;
            while(i<len1)
            {
		i++;
                if(str1[i] != str2[i])
                    return 0;
            }
            return 1;
        }
        
}

int main(int argc, char * argv[])
{
        char * s1 = argv[1];
	char * s2 = argv[2];
        if(StrComp(s1,s2))
            cout<<"Strings are identical"<<endl;
        else
            cout<<"Strings are not identical"<<endl;
	return 0;
}

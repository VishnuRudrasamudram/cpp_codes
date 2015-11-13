#include<iostream>

using namespace std;

int StrLen(const char * s)
{
	int i=0;
      	while(s[i]!='\0')
         	i++;
       	return i;
}
    

const char * my_strstr(const char * s1, const char * s2)
{
	int ins;
	int i,j;
		
	int len1 = StrLen(s1);
        int len2 = StrLen(s2);
	for(i=0;i<(len1-len2+1);i++)
	{	char * news = new char;
		int count = 0;
		for(j=0;j<len2;j++)
		{
			(news[j] = s1[i+j]);
		}
		for(int k=0;k<len2;k++)
		{
			if(news[k] == s2[k])
				count ++;
		}
		if(count == len2)
			return &s1[i];
		
	}
	return NULL;

}

int main()
{
	const char * x = "wiprotech";
	const char * y = "pro";
        cout<<my_strstr(x,y)<<endl;       
	return 0;
}

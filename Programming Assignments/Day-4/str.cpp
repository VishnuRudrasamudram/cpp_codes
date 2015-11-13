#include<iostream>

using namespace std;

int cmpstr(char * s1, char * s2)
{
	char * p1 = (char *)s1;
	char * p2 = (char *)s2;

	while(*p1 != '\0')
	{
		if(*p2 == '\0') return 1;
		if(*p2 > *p1) return -1;
		if(*p1 > *p2) return 1;
		
		p1++;
		p2++;
	}

	if(*p1 != '\0') return -1;
	
	return 0;
}

main()
{
	char s1[] = "abcdefg";
	char s2[] = "ABcDEFG";
	cout<<cmpstr(s2,s1)<<endl;
}

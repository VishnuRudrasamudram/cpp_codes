#include<iostream>
#include<cstring>

using namespace std;


/*int compstr(char * s1,char * s2)
{
	for(;*s1==*s2;s1++,s2++)
	{
		if(*s1=='\0')
			return 0;
	}
	
	return ((*(char *)s1 < *(char *)s2)?-1:1);
}*/

main()
{
	char a[15];
	char b[15];
	strcpy(a,"abcDbH");
	strcpy(b,"abcdbh");
	cout<<strcmp(a,b)<<endl;
}

/*
 * stringop.cpp
 * 
 * This file contains functions that work on strings and are necessary
 * to find good number
 * 
 * 
 * Author: Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *    
 */
#include "functions.h"

char least(char a)      // least of 2 chars other than given char
{
        char arr[] = {'1','2','3'}; //good number has only these 3 digits

        for(int i=0;i<3;i++)
        {
                if(a!=arr[i])
                {
                        return arr[i];
                }
        }

}

string modified(string s,int k) // modifies 'k'th character from the end
{
        char arr[] = {'1','2','3'};
        string ret;
        ret  = s;
        int len = s.length();
        for(int i=0;i<3;i++)
        {
                if(ret[len-k]!=arr[i] && ret[len-k-1]!=arr[i])
                        ret = ret.substr(0,len-k)+arr[i];
        }

        return ret;
}

/* this function checks the given string and return 1 if
 * there are no adjacent repeating substrings of any length
 * below the length of original string*/
bool check(string n)
{
	int len = n.length();
	int sl = len/2;
	int i,j;
	for(i=1;i<=sl;i++)
	{
		for(j=0;j<(len-(2*i-1));j++)		
		{
			if(n.substr(j,i) == n.substr(j+i,i))
				return 0;	
		}
	}
	return 1;
}

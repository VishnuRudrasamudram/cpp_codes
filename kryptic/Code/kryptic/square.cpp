/* square.cpp
 *
 * File:
 *	Storing an integer of with more number of digits will result in overflow.
 *	So, the number is taken in as a string. Using basic multiplication method
 *	a function is defined to take the numbers as string and return the result
 *	also as a string.
 *
 * Authors: Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 * Date: 12.11.2015
 */

#include "header.h"

vector<int> addAdj(vector<int> rr)
{
	vector<int> res = rr;
	for(int i=res.size()-1;i>=0;i--)
        {
                if(res[i]>=10&&i!=0)	// if the number is not a single digit, the other digit is carried
                {			// to be added to the next number
                        res[i-1] += res[i]/10;
                        res[i] = res[i]%10;
                }
        }
	return res;
}

string toString(vector<int> rr)		// this function adds all integers in the vector to form a string
{
	string resStr;
        for(int i=0;i<rr.size();i++)
        {
                stringstream ss;
                ss<<rr[i];
                string tm = ss.str();
                resStr+=tm;
        }
        return resStr;
}

string  multiply_strings(string s1, string s2)
{


	/* example:
  		1 5
  	      x 1 2
  	      -------
  	      0 2 10
  	      1 5 0
  	      -------
  	      1 7 10
  	      ------
  	        180
  	      ------  */
	int l1=s1.length();
	int l2=s2.length();
	vector< vector<int> > res;
	for(int i=s1.length()-1;i>=0;i--)
	{
		vector<int> temp_res(s2.length()+s1.length()-1,0);
		for(int j=s2.length()-1;j>=0;j--)
		{
			int mul = (s1[i]-'0')*(s2[j]-'0');	// each digit is multiplied and result is stored in 
			temp_res[i+j] = mul;			// corresponding vector
		}
		res.push_back(temp_res);	// each vector corresponding to each digit is put in another vector
		
	}
	vector<vector<int> > si = res;
	vector<int> rr;
        for(int i =0;i<l1+l2-1;i++)
        {
                int sum = 0;
                for(int j = 0; j < si.size();j++)	// vertical sum is calculated from all vectors in the vector 
                        sum+=si[j][i];			// of vectors
                rr.push_back(sum);		// these sums are put in a vector	
        }	
	rr = addAdj(rr);	// adjacent integers added to form result
	string resStr = toString(rr);	// and the vector is converted string
	return resStr;	
	
}

string addStr(string s1, string s2)	// this functions adds two numbers given as strings 
{		
	vector<int> add(s1.length());
	for(int i = 0;i<s1.length();i++)
		add[i] = (s1[i]-'0') + (s2[i]-'0');

	add = addAdj(add);
		
	string resStr = toString(add);
        return resStr;
}

bool isKryptic(string s1)	// Validation of kryptic numbers		
{	
	string s2 = s1;
        string res;
        res = multiply_strings(s1,s2);
        if(res.length()%2!=0)
                res='0'+res;
        string sub1 = res.substr(0,res.length()/2);		// splitting the square of the number into two 
        string sub2 = res.substr(res.length()/2,res.length());	// halves to add and compare with given number
        string fo = addStr(sub1,sub2);

	if(fo==s1)
		return 1;
	else    return 0;
}


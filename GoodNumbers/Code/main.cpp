/*
 * main.cpp
 * 
 * Overview: For given input "n",finds the smallest good numbers with "n" digits.
 *           A number is termed as good number, if:
 *                a. If the digits in it are only 1 or 2 or 3.
 *
 *                b. No two adjacent substrings of a given number are same.
 *
 * File:  main() functions takes an integer as an argument,
 *        and prints a good number with given length. This
 *        also checks the validity of the given argument.
 *
 * Author: Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 */


#include "src/functions.h"

int main(int argc, char * argv[])
{
	if(argc>1)
	{	
		int d;
		d=atoi(argv[1]);
		if(d<=0)		// invalid argument
			cout<<"Error: no of digits should be > 0"<<endl;
		else
			cout<<find_good_num(d)<<endl;
	}
	else	// no arguments given
	{
		cout<<"Usage: find_good <number>"<<endl;
	}
}

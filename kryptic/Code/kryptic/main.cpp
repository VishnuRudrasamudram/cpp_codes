/* main.cpp
 *
 * Overview:
 *	Kryptic number - When the left half of the number’s square is added to right half of the square, the resultant 
 *	sum is equivalent to the number itself
 *
 * File:
 *
 *      main() takes a text file from user as an input and reads the file to print all kryptic numbers present in the file.
 *
 * Author: Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 * Date: 12.11.2015
 */


#include "header.h"

main()
{
	ifstream fin("input.txt");
	string s1;
	while(fin>>s1)
	{
		if(isKryptic(s1))
			cout<<s1<<endl;
	}
}

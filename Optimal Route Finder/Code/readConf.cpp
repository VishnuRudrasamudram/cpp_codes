/* readConf.cpp
 *
 * The function in this file reads configuration file and returns an integer which corresponds
 * to optimality and output format
 *
 * File:
 *
 *      main() takes a choice from user to show optimal routes for either a single set of source and
 *      destination or mulptiple sets of source and destination.
 *
 * Authors:
 *      Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 */


#include "STS_header.h"

int readConf()
{
	string fn = CONFIG;	
	const char * file_name = fn.c_str();
	ifstream fin(file_name);
	string word;
	
	int lc=0,ld=0,cc=0,rn=0;
	while(getline(fin,word,'\n'))
	{
		//counting occurances of required words
		if(word.find("LEAST_COST")!=string::npos)
			lc++;
		if(word.find("LEAST_DISTANCE")!=string::npos)
			ld++;
		if(word.find("ROUTE_NOS")!=string::npos)
			rn++;
		if(word.find("CITY_CODES")!=string::npos)
			cc++;
	}

	// there are four format of output
	// different integers for different output formats
	if(ld>lc && cc>rn)
		return DISTnCODES;	
	if(ld>lc && rn>cc)
		return DISTnROUTES;
	if(lc>ld && cc>rn)	
		return COSTnCODES;
	if(lc>ld && rn>cc)
		return COSTnROUTES;


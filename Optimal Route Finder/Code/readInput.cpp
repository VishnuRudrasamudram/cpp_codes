/* readInput.cpp
 *
 * 
 * File:
 *
 * 	readInput() function reads find_routes.dat and returns a list
 * 	of edges that can be passed to output funtion to display possible
 * 	paths
 *
 * Authors:
 *      Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 */



#include "STS_header.h"

list<Edge> readInput()
{
	list<Edge> ret;
	map<string,int> indexMap;
	indexMap = indexCodes();
	ifstream fin(INPUT);
	string word;
	int lin=FIRST_LINE;
	while(true)
	{
		if(lin>THIRD_LINE)
		{
			while(fin>>word)  // this converts each source and destination
			{		  // to an edge
				Edge edg;
				edg.u = indexMap.find(word)->second;
				fin>>word;
				fin>>word;
				edg.v = indexMap.find(word)->second;
				ret.push_back(edg);
				lin++;  
			}
			break;
		}

		else // to ommit first three lines
		{
			if(lin==FIRST_LINE)
			{
				fin>>word;fin>>word;
				lin++;
			}
			else if(lin==SEC_LINE)
			{
				for(int i=0;i<10;i++)
					fin>>word;
				lin++;
			}
			else
			{
				fin>>word;fin>>word;fin>>word;
				lin++;
			}
		}
	}
	return ret;
}

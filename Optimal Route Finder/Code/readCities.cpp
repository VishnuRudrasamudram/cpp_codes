/* readCities.cpp
 *
 * File:
 *	Functions in this files generate map of city names and codes and index the city
 *	codes in order enter cities as nodes in a graph. 
 *
 * Author:
 *      Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 */



#include "STS_header.h"

map<string,string> readCodes( )
{
	string fnam = CITY;
	map<string,string> cities;
	const char * fname = fnam.c_str();
	ifstream fin(fname);
	string word;
	
	int lin = 0;
	while(true)
	{
		if(lin!=0)	
		{
			string str_city,str_code;
			while(fin>>word)
			{
				str_city = word;	
				fin>>word; fin>>word;
				str_code = word;
				cities[str_city] = str_code; //mapping city name to city code
			}
			break;
		}
		else
		{
			fin>>word; fin>>word;
			lin++;
		}
	}

	return cities;
	
}

map<string,int> indexCodes()
{
	
	map<string,int> ret;	//indexing each city code
	map<string,string> cityCodes;
	cityCodes = readCodes();
	int index=1;
	map<string,string>::iterator cit;
	for(cit=cityCodes.begin();cit!=cityCodes.end();++cit)
	{
		ret[cit->second] = index;
		index++;
	}
	return ret;
}

map<int,string> codeIndex()   // it just reverses keys ana values in the above map
{
	
	map<int,string> ret;
	map<string,int> codes;
	codes = indexCodes();
	map<string,int>::iterator cit;
	for(cit=codes.begin();cit!=codes.end();++cit)
		ret[cit->second]=cit->first;
	return ret;
}

/* main.cpp
 *
 * Overview:
 * 	
 * 	Smart Travel Service displays optimal routes for a set of source and destination
 * 	cities. city_codes.dat and routes.dat provide required information to compute 
 * 	optimal routes. find_routes.dat provides input and STS_config.dat formats the output.
 *
 * File:
 *
 * 	main() takes a choice from user to show optimal routes for either a single set of source and
 * 	destination or mulptiple sets of source and destination.
 *
 * Author:
 * 	Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 */

#include "STS_header.h"

main()
{
	map<string,string> cityCodes;
        cityCodes = readCodes();
        map<string,int> cityIndex;
        cityIndex = indexCodes();
	int ch;
	cout<<"1. Single set of source and destination\n2. Multiple sets of source and detination\n3. Exit"<<endl;
	
	repeat:
	cout<<"Enter choice:: ";
	cin>>ch;
	if(ch==2)
	{
		list<Edge> inputCodes = readInput(); //all sets of source and destination in inputCodes
		
        	for(list<Edge>::iterator it = inputCodes.begin();it!=inputCodes.end();it++)
        	{
                	Edge snd = *it;
			show4input(snd.u,snd.v);   //extracting source and destination from each set and passing to
			cout<<endl;		   // output function.	
		}
	}

	else if(ch==1)
	{	
		string src,dest;
		cout<<"Source and Destination::"<<endl;
		cin>>src>>dest;
		int s = cityIndex.find(cityCodes.find(src)->second)->second;  // source index
        	int d = cityIndex.find(cityCodes.find(dest)->second)->second; // destination index
		cout<<endl;
		show4input(s,d);		// passing to output function 
	}	
	
	else
	{	
		cout<<"Exit..."<<endl;
		return 0;
	}
	goto repeat;	//infinite iterations
}

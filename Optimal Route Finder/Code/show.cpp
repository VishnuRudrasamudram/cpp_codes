/* show.cpp
 *
 *
 * File:
 *	Functions in this file take a path or list of paths in term of indices
 *	and shows corresponding city names or route numbers depending on what 
 *	is mentioned in configuration file. 
 *	
 *
 * Authors:
 *      Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 */


#include "STS_header.h"

void showFare(list<int> path)    // takes a path and displays to the screen with city codes or route numbers
{
	map<int,string> codeFromIndex;
	codeFromIndex = codeIndex();
	list<int>::iterator it = path.begin();
	int cord = readConf();
	readRoute rrt;
	//map<string,Edge> pathRouteNums = rrt.getRoutes();
	map<string,int> pathCost = (cord==COSTnCODES||cord==COSTnROUTES?rrt.getCost():rrt.getDist()); // sort by cost or distance?
	list<string> routeNums = getPossibleRouteNums(path);
	int i=0;
	if(cord == DISTnCODES || cord==COSTnCODES)  // city codes or route numbers?
	{
		for(int i=0;i<path.size();i++)
		{
			int src = *it;
			++it;
			string cityCode =codeFromIndex.find(src)->second;
			if(i==path.size()-1)
				cout<<cityCode<< " = " ;
			else
				cout<<cityCode<<"->";
	
		}
	}
	
	else
	{
		for(list<string>::iterator it = routeNums.begin();it!=routeNums.end();++it)
        	{
                	if(i==routeNums.size()-1)
                	        cout<<*it<<" = ";
                	else
                	        cout<<*it<<"->";
                	i++;
        	}
	}
	
	i=0;
	int sum=0;
	for(list<string>::iterator it = routeNums.begin();it!=routeNums.end();++it)
	{
		int curCost = pathCost.find(*it)->second;
		sum+=curCost;
		if(i==routeNums.size()-1)
			cout<<curCost<<" = ";
		else
			cout<<curCost<<" + ";
		i++;
	}
	cout<<sum<<" ";
	if(cord==COSTnCODES||cord==COSTnROUTES)
		cout<<"INR"<<endl;
	else    cout<<"KMs"<<endl;

	
}

void showAll(map<int,list<int> > allPaths)  // it takes map of all possible paths and displays to the 
{				            // screen using showFare() function
	int i=1;
	map<int,list<int> >::iterator it;
	for(it = allPaths.begin();it!=allPaths.end();++it)
	{	
		cout<<i<<". ";
		showFare(it->second);
		i++;
	}
}

void show4input(int s, int d)      // given a source and destination, it generates all possible paths
{				   // and passes the same to the above function to display it on the screen
        map<int,string> cityIndex;
        cityIndex = codeIndex();
        readRoute rout;
        list<Edge> edges;
        edges = rout.getEdges();
        //route_nos = rout.getRoutes();
        int len = edges.size();

        Graph g(len);
        g.addAllEdges(edges);
        list< list<int> > allPossiblePaths;
        g.AllPaths(s,d);
        allPossiblePaths = g.allPaths;
        map<int,list<int> > result = getAllFares(allPossiblePaths);
	string srce = cityIndex.find(s)->second;
	string destt = cityIndex.find(d)->second;
       	if(!allPossiblePaths.empty())
	{
		cout<<"-------------------------------------------------"<<endl;
		cout<<"Routes between "<<srce<<" and "<<destt<<endl;
		cout<<"-------------------------------------------------"<<endl;
		showAll(result);
		cout<<"-------------------------------------------------"<<endl;
	}
	else
	{
		cout<<"No route found between "<<srce<<" and "<<destt<<endl;
	}
}

/* STS_header.h
 *
 * File:
 *	
 * 	All functions and classes used in this project are defined in this 
 * 	header file.
 * 	
 * Authors:
 *      Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *
 */



#include<iostream>
#include<fstream>
#include<string>
#include<list>
#include<map>
#include<stdlib.h>

#define CITY  "data/city_codes.dat"
#define ROUTES  "data/routes.dat"
#define CONFIG  "data/STS_config.dat"
#define INPUT  "data/find_routes.dat"

#define FIRST_LINE 1
#define SEC_LINE 2
#define THIRD_LINE 3

#define DISTnCODES 1
#define DISTnROUTES 2
#define COSTnCODES 3
#define COSTnROUTES 4
using namespace std;

typedef struct Edge //routes are considered as edges
{
	int u;
	int v;
}Edge;

/*All functions used in this project*/

/*readConf.cpp*/
int readConf();

/*readCities.cpp*/
map<string,string> readCodes();
map<string,int> indexCodes();
map<int,string> codeIndex();

/*readRoute.cpp*/
class readRoute
{
	map<string,Edge> routes;
        map<string,int> route_cost;
        map<string,int> route_dist;
        list<Edge> edges;
        public:
        readRoute();
	list<Edge> getEdges();
	map<string,Edge> getRoutes();
	map<string,int> getCost();
	map<string,int> getDist();
};

/*graph.cpp*/
class Graph
{
        int V;
        list<int> *adj;
        void AllPathsRecur(int,int,bool[],int[],int &);

        public:
	list< list<int> > allPaths;
        Graph(int V);
	Graph(const Graph &obj);
	//Graph(const Graph& );
        void addEdge(int u, int v);
	void addAllEdges(list<Edge>);
        void AllPaths(int s,int d);
};

/*optimalRoutes.cpp*/
bool operator ==(Edge,Edge);
list<string> getPossibleRouteNums(list<int>);
int getFare(list<int>);
map<int,list<int> > getAllFares(list<list<int> >);

/*show.cpp*/
void showFare(list<int>);
void showAll(map<int, list<int> >);
void show4input(int,int);

/*readInput.cpp*/
list<Edge> readInput(void);

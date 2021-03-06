/* graph.cpp
 *
 *
 * File:
 *	Graph class is defined in this file. Members of this class 
 *	add edges and find all possible paths between given two vertices
 *
 * Author:
 *      Vishnu Rudrasamudram vishnu.rudrasamudram@gmail.com
 *     
 * Copyright (c) All Rights Reserved
 *
 */


#include "STS_header.h"

Graph::Graph(int V) //Constructor
{
        this->V = V; 
        adj = new list<int>[V]; // graph with V number of vertices
}

Graph::Graph(const Graph &obj)
{
	V = obj.V;
	adj = new list<int>[obj.V];
}
void Graph::addEdge(int u,int v)
{
        adj[u].push_back(v);  //adding an edge and creating adjancency list are done simultaneously
}

void Graph::addAllEdges(list<Edge> edges) // this adds a list of edges to the graph
{

	list<Edge>::iterator eit;
        for(eit=edges.begin();eit!=edges.end();++eit)
        {
                Edge tedg = *eit;
                this->addEdge(tedg.u,tedg.v);
        }

}

void Graph::AllPaths(int s,int d) // this function just initializes required parameters of the recursive function
{
        bool *visited = new bool[V];
        int *path = new int[V];
        int path_index = 0;

        for(int i=0;i<V;i++)
                visited[i] = false;

        AllPathsRecur(s,d,visited,path,path_index);   // recursive function to find all possible paths
	
}

void Graph::AllPathsRecur(int u,int d,bool visited[], int path[], int & path_index)
{
        visited[u]=true;
        path[path_index] = u;
        path_index++;
	list<int> curPath;
        if(u==d)
        {
                for(int i=0; i<path_index;i++)
                        curPath.push_back(path[i]);
                allPaths.push_back(curPath);     // all paths is a list of lists defined as public member
        }

        else
        {
                list<int>::iterator i;
                for(i=adj[u].begin();i!=adj[u].end();++i)
                        if(!visited[*i])
                                AllPathsRecur(*i,d,visited,path,path_index);
        }

        path_index--;
        visited[u] = false;
}


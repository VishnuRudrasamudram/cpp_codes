#ifndef MAKEVEC_H
#define MAKEVEC_H
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

vector<string> lines_vec(char * fname)
{
	vector<string> flines;
	
	ifstream fl(fname);
        string s;
        while(getline(fl,s,'\n'))
        {
                flines.push_back(s);
        }

	return flines;
}
#endif

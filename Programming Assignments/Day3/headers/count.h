#ifndef COUNT_H
#define COUNT_H

#include "search.h"
#include "makevec.h"

using namespace std;

/*vector<string> lines_vec(char * fname)
{
	vector<string> flines;
	
	ifstream fl(fname);
        string s;
        while(getline(fl,s,'\n'))
        {
                flines.push_back(s);
        }

	return flines;
}*/

int lines(char * fname)
{
	vector<string> flines;

	flines = lines_vec(fname);	
	return (flines.end() - flines.begin());
		
}

int commented_lines(char * fname)
{
	vector<string> flines;

	flines = lines_vec(fname);

	vector<string>::iterator it;
	int count = 0;
	
	for(it = flines.begin(); it!=flines.end();it++)
	{
                if(__search((*it),"//"))
                        count++;
	}
        return count;


}

int semi_colon_lines(char * fname)
{
	 vector<string> flines;

        flines = lines_vec(fname);

        vector<string>::iterator it;
        int count = 0;

        for(it = flines.begin(); it!=flines.end();it++)
        {
		//cout<<(*it).length()<<" "<<__compress(*it)<<endl;
                if(__compress(__compress(*it,' '),'\t')==";")
                        count++;
        }
        return count;
}

int blank_lines(char * fname)
{
	vector<string> flines;
	
	flines = lines_vec(fname);
	
	vector<string>::iterator it;
	int count = 0;

	for(it = flines.begin(); it!=flines.end();it++)
	{
		//cout<<__compress((*it)).length()<<" "<<__compress((*it))<<endl;
		if(__compress(__compress(*it,' '),'\t')=="")
			count++;
	}
	return count;
}

int brace_lines(char * fname)
{
	vector<string> flines;

        flines = lines_vec(fname);

        vector<string>::iterator it;
        int count = 0;

        for(it = flines.begin(); it!=flines.end();it++)
        {
                if(__compress(__compress(*it,' '),'\t') == "}" ||__compress(__compress(*it,' '),'\t') == "{")// &&(__compress(*it).length()==1))
			count++;
        }
        return count;

}

int ncnb_lines(char * fname)
{
	int ret;
	int ncnb;
	ncnb = commented_lines(fname)+semi_colon_lines(fname)+blank_lines(fname)+brace_lines(fname);
	ret = lines(fname) - ncnb;

	return ret; 
}

#endif

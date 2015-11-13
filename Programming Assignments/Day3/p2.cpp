#include "headers/makevec.h"
#include "headers/search.h"
#include<algorithm>

int is_keyword(string s)
{
	vector<string> kw;
	kw.push_back("while");
	kw.push_back("if");
	kw.push_back("for");
	kw.push_back("else");;
	vector<string>::iterator p =  find(kw.begin(),kw.end(),s);
	if(p!=kw.end())
		return 1;
	else return 0;
}

int main(int argc, char * argv[])
{
	vector<string> flines;
	vector<string> brace_vec;
	vector<string> nosc_vec;
	flines = lines_vec(argv[1]);
	vector<string>::iterator it;
	for(it=flines.begin();it!=flines.end();it++)
	{
		string sss = *it;
		//cout<<sss[0]<<endl;
		if(__search(*it,'(') && sss[0] != '/')
		{
			brace_vec.push_back(*it);
		}
	}
	
	
	for(it = brace_vec.begin();it!=brace_vec.end();it++)
	{
		if(!(__search(*it,';')))
			nosc_vec.push_back(*it);
			
	}
	cout<<"Function names in "<<argv[1]<<":: "<<endl;
	for(it = nosc_vec.begin();it!=nosc_vec.end();it++)
	{
		string str,ret;
		str = *it;
		int z = 0;
		while(str[z] != '\0')
		{
			if(str[z] == ' ' || str[z] == '\t')
			{
				int k = z;
				while(str[k]!='(')
				{
					ret += str[k];
					k++;
				}	
				break;
			}
			z++;
		}
		if(!is_keyword(__compress(__compress(ret,' '),'\t')))
			cout<<__compress(__compress(ret,' '),'\t')+"()"<<endl;
	}
}

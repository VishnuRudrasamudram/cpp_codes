#include "headers/makevec.h"
#include "headers/stringproc.h"
int main(int argc, char * argv [])
{
	char * fn = argv[1];
	
	vector<string> flines;
	flines = lines_vec(fn);

	ofstream wfile("des.txt");
	vector<string>::iterator it;
	for(it = flines.begin();it != flines.end();it++)
	{
		wfile<<squeeze(process(*it),' ')<<endl;
	} 

	wfile.close();			
}

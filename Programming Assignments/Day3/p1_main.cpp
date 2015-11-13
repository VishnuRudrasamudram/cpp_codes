#include "headers/count.h"

int main(int argc, char * argv [])
{
	int i;
	for(i=1;i<argc+1;i++)
	{
		char * fn = argv[i];
		cout<<"File:: "<<fn<<endl;
		cout<<"------------------------------------------------------------------------------------------"<<endl;
		cout<<"Total number of lines:: "<<lines(fn)<<endl;
		cout<<"Commented lines:: "<<commented_lines(fn)<<endl;
		cout<<"Blank lines:: "<<blank_lines(fn)<<endl;
		cout<<"Total number of non-comment/non-blank lines:: "<<ncnb_lines(fn)<<endl;
		cout<<"Number of lines that has ';' :: "<<semi_colon_lines(fn)<<endl;
		cout<<"Total number of lines that has just “{“ or “}” and white space in it  :: "<<brace_lines(fn)<<endl;
		cout<<"------------------------------------------------------------------------------------------\n"<<endl;
	}

	return 0;
}

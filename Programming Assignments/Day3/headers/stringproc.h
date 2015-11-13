#ifndef STRINGPROC_H
#define STRINGPROC_H

#include<iostream>
#include<string>

bool is_char(char ch)
{
	int ord;
	ord = ch;
	if((ord>64 && ord<92)||(ord>96 && ord<123))
		return 1;
	else return 0;
}

bool is_capital(char ch)
{
	int ord;
	ord = ch;
	
	if(ord>64 && ord<92)
		return 1;
	else	return 0;
}

string squeeze(string str, char ch)
{
	string ret;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i] == ch)
		{
			int k = i;
			while(str[k] == ch)
				k++;
			i = k-1;
		}
		ret+=str[i];
		i++;
	}
	
	return ret;	

}

string process(string str, bool switch_case = 1, bool dir = 1, int step = 1)
{
	string ret;
	
	int len = str.length();

	int d;
	if(dir) d=1;
	else d=-1;

	int sc;
	if(switch_case)	sc = 1;
	else sc = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		if(is_char(str[i]))
		{
			char ms;
                	int ord;
			if(is_capital(str[i]))
			{
				ord = str[i];
				ord = str[i]+(sc*32)+(d*step);
				if(ord>122)
					ord = ord - 26;
				else if(ord<97)
					ord = ord + 26;
				else ord = ord+0;
				ms = (char)ord;
				ret += ms;	 
			}
	
			else
			{
				ord = str[i];
				ord = str[i] + (sc*(-32))+(d*step);
				if(ord>90)
                                        ord = ord - 26;
                                else if(ord<65)
                                        ord = ord + 26;
                                else ord = ord+0;

				ms = (char)ord;
				ret += ms;
			}
			
		}

		else
			ret += str[i];
		i++;
	}

	return ret;
}

#endif

#include<iostream>

using namespace std;

//int serial_number::sno = 0;

class serial_number
{
	static int sno;
	public:
	serial_number()
	{
		sno++;
		cout<<"I am object number "<<sno<<endl;
	}
};
int serial_number::sno = 0;
main()
{
	serial_number a;
	serial_number b;
	serial_number c;
}

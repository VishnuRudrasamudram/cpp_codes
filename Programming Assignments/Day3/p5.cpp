#include<iostream>

using namespace std;

inline void ref_swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
} 

inline void ref_swap(char * a, char * b)
{
        char temp = *a;
        *a = *b;
        *b = temp;
}

inline void ref_swap(float * a, float * b)
{
        float temp = *a;
        *a = *b;
        *b = temp;
}

inline void ref_swap(long * a, long * b)
{
        long temp = *a;
        *a = *b;
        *b = temp;
}

void my_overload()
{
	int i1,i2;
	char ch1,ch2;
	float f1,f2;
	long l1,l2;

	cout<<"Enter two integers (i1 and i2):: ";
	cin>>i1>>i2;

	ref_swap(&i1,&i2);
	
	cout<<"swapped i1 and i2:: "<<i1<<" "<<i2<<endl;

	cout<<"Enter two charcters (ch1 and ch2):: ";
        cin>>ch1>>ch2;

        ref_swap(&ch1,&ch2);

        cout<<"swapped ch1 and ch2:: "<<ch1<<" "<<ch2<<endl;

	cout<<"Enter two floats (f1 and f2):: ";
        cin>>f1>>f2;

        ref_swap(&f1,&f2);

        cout<<"swapped f1 and f2:: "<<f1<<" "<<f2<<endl;

	cout<<"Enter two long integers (long1 and long2):: ";
        cin>>l1>>l2;

        ref_swap(&l1,&l2);

        cout<<"swapped long1 and long2:: "<<l1<<" "<<l2<<endl;


}

main()
{
	my_overload();

}

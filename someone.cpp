#include"someone.h"

void someone::somefunc()
{
	std::cout << "father's public data is " + f.fatherPubData << endl;
}
someone::someone(int data) :f(data), somepridata(data), somepubdata(data)
{
	cout << "someone is constructed" << endl;
}
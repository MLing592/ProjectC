#include"polymorphism.h"


//�麯��
void poly::polyfunc1()
{
	cout << "poly function 1" << endl;
}

void poly::polyfunc2()
{
	cout << "poly function 2" << endl;
}

void polySon::polyfunc1()
{
	cout << "poly Son function 1" << endl;
}

//������ʹ��麯��
void abstractPolySon::abpolyfunc()
{
	cout << "abstract poly Son function" << endl;
}
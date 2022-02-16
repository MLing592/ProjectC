#include"Exception.h"

MyException::MyException(string mes)
{
	this->ErrorMessage = mes;
}
MyException::~MyException()
{

}
const char* MyException ::what() const
{
	//string×ªchar *Ê¹ÓÃc_str
	cout << "ErrorID = " << this->ErrorID << endl;
	return this->ErrorMessage.c_str();
}

MyExceptionSon1::MyExceptionSon1(string mes) :MyException::MyException(mes)
{
	ErrorID = 1;
}
MyExceptionSon2::MyExceptionSon2(string mes) :MyException::MyException(mes)
{
	ErrorID = 2;
}
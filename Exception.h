//΢��걣֤�ļ�ֻ����һ��
#pragma once

//���������ʺ�ȫƽ̨��֤�ļ�ֻ����һ��
#ifndef EXCEPTION
#define EXCEPTION
using namespace std;
#include <iostream>
#include <string>
#include <string_view>

class MyException :public exception
{	
public:
	int ErrorID = 0;
	string ErrorMessage;

	MyException(string mes);
	virtual ~MyException();
	//what() ��������һ����ʶ���쳣���ַ����������������֡�what��һ�������Դ��Եظ���������ʲô�쳣
	virtual const char* what() const;

};

class MyExceptionSon1 :public MyException
{
public:
	MyExceptionSon1(string mes);
};

class MyExceptionSon2 :public MyException
{
public:
	MyExceptionSon2(string mes);
};
#endif
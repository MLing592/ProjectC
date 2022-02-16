//微软宏保证文件只编译一次
#pragma once

//条件编译适合全平台保证文件只编译一次
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
	//what() 函数返回一个能识别异常的字符串，正如它的名字“what”一样，可以粗略地告诉你这是什么异常
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
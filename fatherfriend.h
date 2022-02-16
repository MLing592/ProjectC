#pragma once

//条件编译适合全平台保证文件只编译一次
#ifndef FATHERFRIEND
#define FATHERFRIEND
#include"father.h"

//友元类
//fatherfriend是father的友元类，fatherfriend的所有成员函数都是father的友元函数
//作用：不同类或对象的成员函数之间，类的成员函数与一般函数进行数据共享的机制。
//      通俗来说，友元关系是类主动声明哪些类或函数是他的朋友，给与朋友对本类的访问特许，是对封装的一定破坏
//性质：不可传递，不可继承，单向关系
class fatherfriend
{
public:
	void ShowfatherPrivate(father f);
}; 

//共享数据保护
//1.常对象
//2.常成员函数
//3.常数据成员
//4.常引用

#endif


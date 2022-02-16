#pragma once

//条件编译适合全平台保证文件只编译一次
#ifndef POLYMORPHISM
#define POLYMORPHISM

using namespace std;
#include<iostream>


//静态多态：在编译连接阶段就已经绑定(确定了操作的具体对象),称为静态绑定，对应静态多态
//1.运算符重载
//2.函数重载
//3.类型强制转换
//4.类模板和函数模板
//动态多态：在程序运行时才绑定(确定了操作的具体对象), 称为动态绑定，对应动态多态
//1.虚函数:对父类函数的覆盖，用基类指针或基类引用，执行虚函数查表，一定是多态的。
// 内存：多使用4个字节，保存虚函数地址
// 成员函数：静态，构造，内联不能是虚函数，析构通常是虚函数
// 使用场景：1.所在类是否作为基类 2.函数继承后是否需要更改实现 3.对函数调用是否是基类指针或基类引用

class poly
{
public:
	void virtual polyfunc1();
	void virtual polyfunc2();
};

class polySon : public poly
{
	void polyfunc1();
};

//2.纯虚函数:实现一个接口，起到一个规范的作用，规范继承这个类的程序员必须实现这个函数。

//3.抽象类:为类族建立一个公共接口,包含纯虚函数的即为抽象类
//         可以定义抽象类指针或引用去访问派生类对象成员，实现多态行为
//         不包含数据成员,不可实例化，无构造函数，无纯虚析构函数

class abstractPoly
{
public:
	void virtual abpolyfunc() = 0;
};

class abstractPolySon : public abstractPoly
{
public:
	void virtual abpolyfunc();
};
#endif
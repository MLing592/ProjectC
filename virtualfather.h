#pragma once

//条件编译适合全平台保证文件只编译一次
#ifndef VIRTUALFATHER
#define VIRTUALFATHER
using namespace std;
#include <iostream>
#include <string>

//多继承的命名冲突：虚继承
//多继承（Multiple Inheritance）是指从多个直接基类中产生派生类的能力，多继承的派生类继承了所有父类的成员。尽管概念上非常简单，但是多个基类的相互交织可能会带来错综复杂的设计问题，命名冲突就是其中之一
//例如：类 A 派生出类 B 和类 C，类 D 继承自类 B 和类 C，这个时候类 A 中的成员变量和成员函数继承到类 D 中变成了两份，一份来自 A-->B-->D 这条路径，另一份来自 A-->C-->D 这条路径

class virtualfather
{
public:
	int vf1=0;
	virtualfather();
};
class virtualSon1 :virtual public virtualfather
{
public:
	//包含继承来的int vf1;
	int vs1=0;
	virtualSon1();
};
class virtualSon2 :virtual public virtualfather
{
public:
	//包含继承来的int vf1;
	int vs2=0;
	virtualSon2();
};
class virtualgrSon :virtual public virtualSon1, virtual public virtualSon2
{
public:
	//使用虚继承只保留一份来自father的vf1
	//使用标识符辨别数据，可以保留多份，但一般没必要
	virtualgrSon();
};
#endif
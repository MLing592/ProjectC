#pragma once

//条件编译适合全平台保证文件只编译一次
#ifndef SOMEONE
#define SOMEONE

//类的组合：内嵌其他类的对象
//构造顺序：先按声明调用其他类，再调用本类构造函数
//析构顺序：与构造顺序相反
#include"father.h"

class father;
class someone
{
private:
	int somepridata;
	father f;
public:
	int somepubdata;

	void somefunc();
	
	//构造函数
	someone(int data);
};

#endif

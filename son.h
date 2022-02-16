#pragma once

//条件编译适合全平台保证文件只编译一次
#ifndef SON
#define SON

#include"father.h"

//私有继承
class PriSon :private father
{
private:
	//int PriSonPriData = 0;
	//inline void PriSonPrifunc();
protected:
	//int PriSonProData = 0;
	//inline void PriSonProfunc();
public:
	//int PriSonPubData = 0;
	inline void PriSonPubfunc();

	/*PriSon() {}
	PriSon(const father& s) {}
	~PriSon() {}*/
};


//保护继承
class ProSon :protected father
{
private:
	//int ProSonPriData = 0;
	//inline void ProSonPrifunc();
protected:
	//int ProSonProData = 0;
	//inline void ProSonProfunc();
public:
	//int ProSonPubData = 0;
	inline void ProSonPubfunc();

	//ProSon() {}
	//ProSon(const father& s) {}
	//~ProSon() {}
};


//公有继承
// 
// 派生类生成过程
//继承基类成员：继承除了构造和析构函数之外的所有非静态成员
//改造基类成员：1.改变基类成员的访问权限 2.改变基类成员的可见性
//增加新的成员：添加属于派生类独有的特性：成员，数据，方法等

class PubSon :public father
{
private:
	//int PubSonPriData = 0;
	//inline void PubSonPrifunc();

#pragma region 派生类使用using语句改变对基类成员成员访问权限

    //using father::fatherPriData;  //基类的私有成员无法通过using更改权限
	//using father::fatherProData;  //基类的protected成员通过using更改为private
	//using father::fatherPubData;  //基类的public成员通过using更改为private

#pragma endregion

protected:
	//int ProSonProData = 0;
	//inline void PubSonProfunc();

#pragma region 派生类使用using语句改变对基类成员成员访问权限

    //using father::fatherPriData;  //基类的私有成员无法通过using更改权限
    //using father::fatherProData;  //基类的protected成员通过using更改为protected
    //using father::fatherPubData;  //基类的public成员通过using更改为protected

#pragma endregion

public:
	int PubSonPubData = 0;

#pragma region 派生类使用using语句改变对基类成员成员访问权限

	//改变后该成员在派生类的访问权限由using位于的派生类访问说明符确定
	//using father::fatherPriData;//基类的私有成员无法通过using更改权限
	using father::fatherProData;  //基类的protected成员通过using更改为public
	using father::fatherPubData;  //基类的public成员通过using更改为public

#pragma endregion

	

	//常成员函数：表示对对象进行只读操作，不改变对象的值
	inline void PubSonPubfunc() const;


	//派生类的非继承部分：构造，析构，复制构造，静态成员
	// 构造：默认调用父类构造函数初始化继承而来的父类成员或显式调用父类构造函数
	PubSon();
	PubSon(int data);
	//复制构造：调用父类复制构造函数，并复制增加成员
	PubSon(const PubSon& s);
	//析构：清除本类成员，自动调用父类析构函数清除子类的父类部分
	~PubSon();
};

#pragma region 派生类内存布局

//1.包含基类成员和派生类成员，派生类占内存空间一定不会比基类小
//2.基类成员在内存布局顺序上并不一定基类排在前，但一般在前

#pragma endregion

#endif
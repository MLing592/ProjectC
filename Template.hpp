#pragma once

//条件编译适合全平台保证文件只编译一次
#ifndef TEMPLATE
#define TEMPLATE

using namespace std;
#include <iostream>
#include <string>

//注意：类模板和函数模板通常将声明和定义写在一起，并将文件命名为hpp(表示法)，在main.cpp里将声明和定义都include也可以
// 
// 
//函数模板：
//解决问题：如果重载的函数，其解决问题的逻辑是一致的、函数体语句相同，只是处理的数据类型不同，那么写多个相同的函数体是重复的且还可能因为代码的冗余造成不一致性，只支持全特化
//规则性质：
//1.只有能够进行函数模板中运算的类型，可以作为类型实参
//2.自定义的类，需要重载模板中的运算符，才能作为类型实参
//3.模板类型严格匹配
//4.函数模板也可重载
template<typename T1, typename T2>
void tpfunc(T1 para1, T2 para2)
{
	cout << "template function overload" << endl;
	cout << para1 << "," << para2 << endl;
}

//重载函数模板：
template<typename T>
 void tpfunc(T para1, T para2)
{
	cout << "template function" << endl;
	cout << para1 << "," << para2 << endl;
}

 //函数模板全特化
 template<>
 void tpfunc<int,int>(int para1, int para2)
 {
	 cout << "template function overload and specialization" << endl;
	 cout << para1 << "," << para2 << endl;
 }


 //类模板：
 //解决问题:使用类模板使用户可以为类声明一种模式，使得类中的某些数据成员、某些成员函数的参数、某些成员函数的返回值，能取任意类型（包括基本类型和自定义类型），支持偏特化和全特化
 //形参包括：
 //1.类型参数，template<typename T>
 //2.值参数，template<int N>
 //3.无类型参数，template<typename T,const T EMPTY>
 //4.可以类型参数和值参数混用
 //5.可以为形参添加默认值
 //6.可以添加模板作为模板的形参，template<typename T,typename Container>
template<typename T1,typename T2>
class templatefather
{
public:
	T1 tpdata1;
	T2 tpdata2;
	//成员函数
	void tpfatherfunc()
	{
		cout << "template class function" << endl;
	}
	//构造函数
	templatefather(T1 data1,T2 data2):tpdata1(data1),tpdata2(data2)
	{
		cout << "template class is constructed" << endl;
	}
	////拷贝构造函数
	//templatefather(const templatefather& tpf) :tpdata1(tpf.tpdata1), tpdata2(tpf.tpdata2)
	//{
	//	count << "templatefather is copyed" << endl;
	//}
	//析构函数
	~templatefather() 
	{
		cout << "template class is decontructed " << endl;
	}
};
//template templatefather<int>;//显式实例化模板：在编译期立即将所有成员实例化，避免使用时才实例化

//模板的全特化，偏特化，半特化
//全特化specialization:所有实例化int,int类型将会跳转到全特化后的类（即本类）
template<>
class templatefather<int,int>
{
public:
	int tpdata1;
	int tpdata2;
	//成员函数
	void tpfatherfunc()
	{
		cout << "template class function specialization" << endl;
	}
	//构造函数
	templatefather(int data1,int data2) :tpdata1(data1), tpdata2(data2)
	{
		cout << "template class is constructed specialization" << endl;
	}
	////拷贝构造函数
	//templatefather(const templatefather& tpf) :tpdata1(tpf.tpdata1), tpdata2(tpf.tpdata2)
	//{
	//	count << "templatefather is copyed" << endl;
	//}
	//析构函数
	~templatefather() 
	{
		cout << "template class is decontructed specialization" << endl;
	}
};

//偏特化partial specialization
template<typename T>
class templatefather<int, T>
{
public:
	int tpdata1;
	T tpdata2;
	//成员函数
	void tpfatherfunc()
	{
		cout << "template class function partial specialization" << endl;
	}
	//构造函数
	templatefather(int data1, T data2) :tpdata1(data1), tpdata2(data2)
	{
		cout << "template class is constructed partial specialization" << endl;
	}
	////拷贝构造函数
	//templatefather(const templatefather& tpf) :tpdata1(tpf.tpdata1), tpdata2(tpf.tpdata2)
	//{
	//	count << "templatefather is copyed" << endl;
	//}
	//析构函数
	~templatefather()
	{
		cout << "template class is decontructed partial specialization" << endl;
	}
};

#endif
#pragma once

//条件编译适合全平台保证文件只编译一次
#ifndef FATHER
#define FATHER

using namespace std;
#include <iostream>
#include <string>

//父类
class father
{
	//友元类声明
	friend class fatherfriend;


private://私有
	int fatherPriData=0;
	inline void fatherPrifunc();

protected://保护
	int fatherProData=0;
	inline void fatherProfunc();

public://公有
	int fatherPubData=0;

	//内联函数
	//原理：在编译时将函数体嵌入在每一个调用处
	//作用：不会调用函数，也就不会有函数运行栈，建立在堆内存上，节省了运行栈的开销，导致了代码长度变长
	//使用原则：函数体小，不复杂，没有多处调用
	inline void fatherPubfunc();

	//函数重载
	//作用：相同函数名，相同返回值但形参个数或形参类型不同，对一个函数的不同实现
	//匹配原则：
	//1.寻找严格匹配的函数
	//2.寻找相容类型的隐式转换的匹配，如形参为char匹配形参为int的重载函数
	//3.使用自定义的匹配规则，即显式调用写明print（long(a)）还是print（double(a)）
	inline void fatherPubfunc(const string s);

	//友元函数
	//必须在类内声明，类内类外实现皆可
	//在类中用Friend修饰，不是任何类的成员函数，函数体内通过对象名访问类私有和保护成员
	friend void fatherfriendfunc(father f);

	//运算符重载（方法1.类内）
	//father operator+(const father& f)
	//{
	//	father fa;
	//	fa.fatherPriData = this->fatherPriData + f.fatherPriData;
	//	fa.fatherProData = this->fatherProData + f.fatherProData;
	//	fa.fatherPubData = this->fatherPubData + f.fatherPubData;
	//}
	 
	//运算符重载（方法2.类外）
	//性质：
	//1.不能创建新符号，如@
	//2.有可重载和不可重载两种运算符,不可重载：1.成员访问“.”2.成员指针访问“->”3.域运算符“::”4.“sizeof”5.条件运算符“?:”6.预编译“#”
	//3.重载后优先级，结合性，操作数个数不变
	//4.形参中必须有一个自定义类型，因为内部类型已经定义，会导致与原先内部定义冲突
	//5.按照符号意义重载，如把加法定义为 * ，可读性变差
	//6.赋值（=）、下标（[]）、调用（()）和成员访问箭头（->）运算符必须是成员函数
	friend father operator+(const father &,const father &);

	void operator=(const father &f)
	{
		this->fatherPriData = f.fatherPriData;
		this->fatherProData = f.fatherProData;
		this->fatherPubData = f.fatherPubData;
	};


	//静态成员
	//静态数据成员：描述类所有对象共同特征的数据项，类的所有对象共享的数据
	//静态成员函数：必须使用静态函数才能访问静态数据成员，类的所有对象共享的数据
	//生命期：与程序运行期相同
	static int fatherstadata;
	static void fatherStaticfunc();


	//构造函数：封装对象实例化的初始化过程
	//构造顺序：按本类的声明顺序构造
	father();
	father(int data);

   //拷贝构造函数：使用一个对象实体初始化同类对象实体
	//使用常引用：
	//1.加上const，防止对引用类型参数值的意外修改
	//2.如果通过按值传递机制，在传递对象之前，编译器需要创建该对象的副本，而创建副本也是需要调用拷贝构造函数的，
	//  最终得到的是对拷贝构造函数的无穷调用。所以解决办法改为引用或指针
	//调用情况：
	//1.用类的一个对象初始化该类另一个对象  Point b（a)；或Point b=a；
	//2.函数形参为类的对象，函数被调用时，将会在运行栈构造临时对象，进行复制
	//3.函数返回值是类的对象，函数返回时同样也会在运行栈构造临时对象复制并返回
	//深复制和浅复制：
	//浅复制：默认拷贝构造函数为浅复制，只复制某个对象的指针而不复制对象本身，导致复制体和原体共享同一块内存，若为基本数据类型则只会复制值，但若为引用类型则会复制内存地址，二者联动
	//深复制：开辟新的内存空间存放与原体一致的对象，二者是分离的，不会共享内存，出现一方更改带动另一方也被更改
	father(const father& f);

	//析构函数：对象生命期结束系统自动调用它，用于释放资源内存防止内存泄露
	~father();

};
#endif





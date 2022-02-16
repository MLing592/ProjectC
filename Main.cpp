// C++Object.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "fatherfriend.h"
#include "son.h"
#include "polymorphism.h"
#include "Template.hpp"
#include"Exception.h"

//main函数
//main (int argc,char *argv[])，argc是整型变量，argv是指向字符串的指针数组
//由于main函数不能被其它函数调用，实际上,main函数的参数值是从操作系统命令行上获得的
//命令行调用格式：C:/>可执行文件名 参数 参数……; 例如：C:/>E6_24 BASIC dbase FORTRAN
//argc的值是在输入命令行时由系统按实际参数的个数自动赋予的，例子等于4
//argv参数是字符串指针数组，其各元素值为命令行中各字符串(参数均按字符串处理)的首地址，例子等于四个字符串的首地址E6_24 BASIC dbase FORTRAN
int main()
{
    //1.
    //分配在堆的实例化
    /*PubSon* ps = new PubSon();
    delete ps;*/
    //分配在栈的实例化
    //PubSon pubson = PubSon(5);

    //2.
    //多态的虚函数
    //poly * py = new poly();
    //py->polyfunc1();//Poly function 1
    //py->polyfunc2();//Poly function 1
    //delete py;

    //poly * pySon = new polySon();
    //pySon->polyfunc1();//Poly Son function 1
    //pySon->polyfunc2();//Poly function 1
    //delete pySon;

    //2.
    //多态的抽象类和纯虚函数
    /*abstractPoly * apy = new abstractPolySon();
    apy->abpolyfunc();
    delete apy;*/

    //3.模板
    //函数模板
    //int a = 1, b = 2;
    //char s = 's';
    //tpfunc(a, b);
    //tpfunc(a, s);
    //cout << endl;

    //类模板
    //unsigned int tp = 10;    
    //templatefather<unsigned int,unsigned int> tpf(tp,tp);//隐式实例化：只实例化类模板的定义部分，直到函数被调用才进行成员函数的实例化
    //tpf.tpfatherfunc();//template class is constructed//template class function//template class is destructed
    //cout << endl;

    ////模板全特化
    //int tpp = 10;
    //templatefather<int,int> ts(tpp,tpp);
    //ts.tpfatherfunc();//template class is constructed specialization//template class function specialization//template class is destructed specialization
    //cout << endl;

    ////偏特化
    //int tppp = 10; unsigned int tpppp = 10;
    //templatefather<int, unsigned int> tss(tppp, tpppp);
    //tss.tpfatherfunc();//template class is constructed partial specialization//template class function partial  specialization//template class is destructed partial  specialization
    //cout << endl;

    //异常处理
    try
    {
        int a = 0;
        cout << "enter 0,1 or 2,please"<<endl;
        cin >> a;
        if (a == 0)
            throw MyException("breakout some problem from MyException");
        else if (a == 1)
            throw MyExceptionSon1("breakout some problem from MyExceptionSon1");
        else
            throw MyExceptionSon2("breakout some problem from MyExceptionSon2");
    }
    catch (MyException& ex)
    {
        cout << ex.what() << endl;
    }
    //std::cout << "Hello World!\n";
}

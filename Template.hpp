#pragma once

//���������ʺ�ȫƽ̨��֤�ļ�ֻ����һ��
#ifndef TEMPLATE
#define TEMPLATE

using namespace std;
#include <iostream>
#include <string>

//ע�⣺��ģ��ͺ���ģ��ͨ���������Ͷ���д��һ�𣬲����ļ�����Ϊhpp(��ʾ��)����main.cpp�ｫ�����Ͷ��嶼includeҲ����
// 
// 
//����ģ�壺
//������⣺������صĺ���������������߼���һ�µġ������������ͬ��ֻ�Ǵ�����������Ͳ�ͬ����ôд�����ͬ�ĺ��������ظ����һ�������Ϊ�����������ɲ�һ���ԣ�ֻ֧��ȫ�ػ�
//�������ʣ�
//1.ֻ���ܹ����к���ģ������������ͣ�������Ϊ����ʵ��
//2.�Զ�����࣬��Ҫ����ģ���е��������������Ϊ����ʵ��
//3.ģ�������ϸ�ƥ��
//4.����ģ��Ҳ������
template<typename T1, typename T2>
void tpfunc(T1 para1, T2 para2)
{
	cout << "template function overload" << endl;
	cout << para1 << "," << para2 << endl;
}

//���غ���ģ�壺
template<typename T>
 void tpfunc(T para1, T para2)
{
	cout << "template function" << endl;
	cout << para1 << "," << para2 << endl;
}

 //����ģ��ȫ�ػ�
 template<>
 void tpfunc<int,int>(int para1, int para2)
 {
	 cout << "template function overload and specialization" << endl;
	 cout << para1 << "," << para2 << endl;
 }


 //��ģ�壺
 //�������:ʹ����ģ��ʹ�û�����Ϊ������һ��ģʽ��ʹ�����е�ĳЩ���ݳ�Ա��ĳЩ��Ա�����Ĳ�����ĳЩ��Ա�����ķ���ֵ����ȡ�������ͣ������������ͺ��Զ������ͣ���֧��ƫ�ػ���ȫ�ػ�
 //�βΰ�����
 //1.���Ͳ�����template<typename T>
 //2.ֵ������template<int N>
 //3.�����Ͳ�����template<typename T,const T EMPTY>
 //4.�������Ͳ�����ֵ��������
 //5.����Ϊ�β����Ĭ��ֵ
 //6.�������ģ����Ϊģ����βΣ�template<typename T,typename Container>
template<typename T1,typename T2>
class templatefather
{
public:
	T1 tpdata1;
	T2 tpdata2;
	//��Ա����
	void tpfatherfunc()
	{
		cout << "template class function" << endl;
	}
	//���캯��
	templatefather(T1 data1,T2 data2):tpdata1(data1),tpdata2(data2)
	{
		cout << "template class is constructed" << endl;
	}
	////�������캯��
	//templatefather(const templatefather& tpf) :tpdata1(tpf.tpdata1), tpdata2(tpf.tpdata2)
	//{
	//	count << "templatefather is copyed" << endl;
	//}
	//��������
	~templatefather() 
	{
		cout << "template class is decontructed " << endl;
	}
};
//template templatefather<int>;//��ʽʵ����ģ�壺�ڱ��������������г�Աʵ����������ʹ��ʱ��ʵ����

//ģ���ȫ�ػ���ƫ�ػ������ػ�
//ȫ�ػ�specialization:����ʵ����int,int���ͽ�����ת��ȫ�ػ�����ࣨ�����ࣩ
template<>
class templatefather<int,int>
{
public:
	int tpdata1;
	int tpdata2;
	//��Ա����
	void tpfatherfunc()
	{
		cout << "template class function specialization" << endl;
	}
	//���캯��
	templatefather(int data1,int data2) :tpdata1(data1), tpdata2(data2)
	{
		cout << "template class is constructed specialization" << endl;
	}
	////�������캯��
	//templatefather(const templatefather& tpf) :tpdata1(tpf.tpdata1), tpdata2(tpf.tpdata2)
	//{
	//	count << "templatefather is copyed" << endl;
	//}
	//��������
	~templatefather() 
	{
		cout << "template class is decontructed specialization" << endl;
	}
};

//ƫ�ػ�partial specialization
template<typename T>
class templatefather<int, T>
{
public:
	int tpdata1;
	T tpdata2;
	//��Ա����
	void tpfatherfunc()
	{
		cout << "template class function partial specialization" << endl;
	}
	//���캯��
	templatefather(int data1, T data2) :tpdata1(data1), tpdata2(data2)
	{
		cout << "template class is constructed partial specialization" << endl;
	}
	////�������캯��
	//templatefather(const templatefather& tpf) :tpdata1(tpf.tpdata1), tpdata2(tpf.tpdata2)
	//{
	//	count << "templatefather is copyed" << endl;
	//}
	//��������
	~templatefather()
	{
		cout << "template class is decontructed partial specialization" << endl;
	}
};

#endif
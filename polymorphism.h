#pragma once

//���������ʺ�ȫƽ̨��֤�ļ�ֻ����һ��
#ifndef POLYMORPHISM
#define POLYMORPHISM

using namespace std;
#include<iostream>


//��̬��̬���ڱ������ӽ׶ξ��Ѿ���(ȷ���˲����ľ������),��Ϊ��̬�󶨣���Ӧ��̬��̬
//1.���������
//2.��������
//3.����ǿ��ת��
//4.��ģ��ͺ���ģ��
//��̬��̬���ڳ�������ʱ�Ű�(ȷ���˲����ľ������), ��Ϊ��̬�󶨣���Ӧ��̬��̬
//1.�麯��:�Ը��ຯ���ĸ��ǣ��û���ָ���������ã�ִ���麯�������һ���Ƕ�̬�ġ�
// �ڴ棺��ʹ��4���ֽڣ������麯����ַ
// ��Ա��������̬�����죬�����������麯��������ͨ�����麯��
// ʹ�ó�����1.�������Ƿ���Ϊ���� 2.�����̳к��Ƿ���Ҫ����ʵ�� 3.�Ժ��������Ƿ��ǻ���ָ����������

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

//2.���麯��:ʵ��һ���ӿڣ���һ���淶�����ã��淶�̳������ĳ���Ա����ʵ�����������

//3.������:Ϊ���彨��һ�������ӿ�,�������麯���ļ�Ϊ������
//         ���Զ��������ָ�������ȥ��������������Ա��ʵ�ֶ�̬��Ϊ
//         ���������ݳ�Ա,����ʵ�������޹��캯�����޴�����������

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
#pragma once

//���������ʺ�ȫƽ̨��֤�ļ�ֻ����һ��
#ifndef VIRTUALFATHER
#define VIRTUALFATHER
using namespace std;
#include <iostream>
#include <string>

//��̳е�������ͻ����̳�
//��̳У�Multiple Inheritance����ָ�Ӷ��ֱ�ӻ����в������������������̳е�������̳������и���ĳ�Ա�����ܸ����Ϸǳ��򵥣����Ƕ��������໥��֯���ܻ�������۸��ӵ�������⣬������ͻ��������֮һ
//���磺�� A �������� B ���� C���� D �̳����� B ���� C�����ʱ���� A �еĳ�Ա�����ͳ�Ա�����̳е��� D �б�������ݣ�һ������ A-->B-->D ����·������һ������ A-->C-->D ����·��

class virtualfather
{
public:
	int vf1=0;
	virtualfather();
};
class virtualSon1 :virtual public virtualfather
{
public:
	//�����̳�����int vf1;
	int vs1=0;
	virtualSon1();
};
class virtualSon2 :virtual public virtualfather
{
public:
	//�����̳�����int vf1;
	int vs2=0;
	virtualSon2();
};
class virtualgrSon :virtual public virtualSon1, virtual public virtualSon2
{
public:
	//ʹ����̳�ֻ����һ������father��vf1
	//ʹ�ñ�ʶ��������ݣ����Ա�����ݣ���һ��û��Ҫ
	virtualgrSon();
};
#endif
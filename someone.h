#pragma once

//���������ʺ�ȫƽ̨��֤�ļ�ֻ����һ��
#ifndef SOMEONE
#define SOMEONE

//�����ϣ���Ƕ������Ķ���
//����˳���Ȱ��������������࣬�ٵ��ñ��๹�캯��
//����˳���빹��˳���෴
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
	
	//���캯��
	someone(int data);
};

#endif

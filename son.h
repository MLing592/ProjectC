#pragma once

//���������ʺ�ȫƽ̨��֤�ļ�ֻ����һ��
#ifndef SON
#define SON

#include"father.h"

//˽�м̳�
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


//�����̳�
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


//���м̳�
// 
// ���������ɹ���
//�̳л����Ա���̳г��˹������������֮������зǾ�̬��Ա
//��������Ա��1.�ı�����Ա�ķ���Ȩ�� 2.�ı�����Ա�Ŀɼ���
//�����µĳ�Ա�����������������е����ԣ���Ա�����ݣ�������

class PubSon :public father
{
private:
	//int PubSonPriData = 0;
	//inline void PubSonPrifunc();

#pragma region ������ʹ��using���ı�Ի����Ա��Ա����Ȩ��

    //using father::fatherPriData;  //�����˽�г�Ա�޷�ͨ��using����Ȩ��
	//using father::fatherProData;  //�����protected��Աͨ��using����Ϊprivate
	//using father::fatherPubData;  //�����public��Աͨ��using����Ϊprivate

#pragma endregion

protected:
	//int ProSonProData = 0;
	//inline void PubSonProfunc();

#pragma region ������ʹ��using���ı�Ի����Ա��Ա����Ȩ��

    //using father::fatherPriData;  //�����˽�г�Ա�޷�ͨ��using����Ȩ��
    //using father::fatherProData;  //�����protected��Աͨ��using����Ϊprotected
    //using father::fatherPubData;  //�����public��Աͨ��using����Ϊprotected

#pragma endregion

public:
	int PubSonPubData = 0;

#pragma region ������ʹ��using���ı�Ի����Ա��Ա����Ȩ��

	//�ı��ó�Ա��������ķ���Ȩ����usingλ�ڵ����������˵����ȷ��
	//using father::fatherPriData;//�����˽�г�Ա�޷�ͨ��using����Ȩ��
	using father::fatherProData;  //�����protected��Աͨ��using����Ϊpublic
	using father::fatherPubData;  //�����public��Աͨ��using����Ϊpublic

#pragma endregion

	

	//����Ա��������ʾ�Զ������ֻ�����������ı�����ֵ
	inline void PubSonPubfunc() const;


	//������ķǼ̳в��֣����죬���������ƹ��죬��̬��Ա
	// ���죺Ĭ�ϵ��ø��๹�캯����ʼ���̳ж����ĸ����Ա����ʽ���ø��๹�캯��
	PubSon();
	PubSon(int data);
	//���ƹ��죺���ø��ิ�ƹ��캯�������������ӳ�Ա
	PubSon(const PubSon& s);
	//��������������Ա���Զ����ø������������������ĸ��ಿ��
	~PubSon();
};

#pragma region �������ڴ沼��

//1.���������Ա���������Ա��������ռ�ڴ�ռ�һ������Ȼ���С
//2.�����Ա���ڴ沼��˳���ϲ���һ����������ǰ����һ����ǰ

#pragma endregion

#endif
#include"son.h"


#pragma region ����

//˽������ʵ��
void PriSon::PriSonPubfunc()
{
	cout << "Private Son public function" << endl;
};
//��������ʵ��
void ProSon::ProSonPubfunc()
{
	cout << "Protect Son public function" << endl;
};

//��������ʵ��
void PubSon::PubSonPubfunc() const
{
	cout << "Public Son public function" << endl;
};
//����Ĺ��캯��ʵ��
PubSon::PubSon()
{
	cout << "Public Son is constructed" << endl;
}
PubSon::PubSon(int data):father::father(data)
{
	cout << "Public Son is constructed" << endl;
}
//����ĸ��ƹ��캯��ʵ��
PubSon::PubSon(const PubSon& s):father(s), PubSonPubData(s.PubSonPubData)
{
	cout << "Public Son is copyed" << endl;
}
//�������������ʵ��
PubSon::~PubSon() 
{
	cout << "Public Son is destructed" << endl;
};

#pragma endregion

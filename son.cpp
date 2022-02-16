#include"son.h"


#pragma region 子类

//私有子类实现
void PriSon::PriSonPubfunc()
{
	cout << "Private Son public function" << endl;
};
//保护子类实现
void ProSon::ProSonPubfunc()
{
	cout << "Protect Son public function" << endl;
};

//公有子类实现
void PubSon::PubSonPubfunc() const
{
	cout << "Public Son public function" << endl;
};
//子类的构造函数实现
PubSon::PubSon()
{
	cout << "Public Son is constructed" << endl;
}
PubSon::PubSon(int data):father::father(data)
{
	cout << "Public Son is constructed" << endl;
}
//子类的复制构造函数实现
PubSon::PubSon(const PubSon& s):father(s), PubSonPubData(s.PubSonPubData)
{
	cout << "Public Son is copyed" << endl;
}
//子类的析构函数实现
PubSon::~PubSon() 
{
	cout << "Public Son is destructed" << endl;
};

#pragma endregion

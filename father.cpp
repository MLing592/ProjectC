#include"father.h"

#pragma region 父类

//父类实现
void father::fatherPrifunc()
{
	cout << "father prrivate function" << endl;
};

void father::fatherProfunc()
{
	cout << "father protected function" << endl;
};

inline void father::fatherPubfunc()
{
	cout << "father public function" << endl;
};

inline void father::fatherPubfunc(const string s)
{
	cout << "father public function Overload" << endl;
};

//运算符重载+
father operator+(const father &f,const father &fa)
{
	father fat;
	fat.fatherPriData = f.fatherPriData + fa.fatherPriData;
	fat.fatherProData = f.fatherProData + fa.fatherProData;
	fat.fatherPubData = f.fatherPubData + fa.fatherPubData;
	return fat;
}

//静态成员函数实现
void father::fatherStaticfunc()
{
	cout << "father static function" << endl;
}

//无参构造函数实现
father::father()
{
	cout << "father is constructed" << endl;
}

//构造函数初始化，按父类声明顺序，而不是初始化列表顺序
father::father(int data) :fatherPriData(data), fatherProData(data), fatherPubData(data)
{
	cout << "father is constructor with parameter" << endl;
}

//拷贝构造函数实现
father::father(const father& f)
{
	cout << "father is copyed" << endl;
	this->fatherPriData = f.fatherPriData;
	this->fatherProData = f.fatherProData;
	this->fatherPubData = f.fatherPubData;
};

//析构函数实现
father::~father() 
{
	cout << "father is destructed" << endl;
}

#pragma endregion



#pragma region 友元函数

//友元函数实现
void fatherfriendfunc(father f)
{
	cout << "father friend function" << endl;
	cout << f.fatherPriData << endl;//访问私有数据
	f.fatherPrifunc();              //访问私有函数
	cout << f.fatherProData << endl;//访问保护数据
	f.fatherProfunc();              //访问保护函数

}

#pragma endregion











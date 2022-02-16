#include"father.h"

#pragma region ����

//����ʵ��
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

//���������+
father operator+(const father &f,const father &fa)
{
	father fat;
	fat.fatherPriData = f.fatherPriData + fa.fatherPriData;
	fat.fatherProData = f.fatherProData + fa.fatherProData;
	fat.fatherPubData = f.fatherPubData + fa.fatherPubData;
	return fat;
}

//��̬��Ա����ʵ��
void father::fatherStaticfunc()
{
	cout << "father static function" << endl;
}

//�޲ι��캯��ʵ��
father::father()
{
	cout << "father is constructed" << endl;
}

//���캯����ʼ��������������˳�򣬶����ǳ�ʼ���б�˳��
father::father(int data) :fatherPriData(data), fatherProData(data), fatherPubData(data)
{
	cout << "father is constructor with parameter" << endl;
}

//�������캯��ʵ��
father::father(const father& f)
{
	cout << "father is copyed" << endl;
	this->fatherPriData = f.fatherPriData;
	this->fatherProData = f.fatherProData;
	this->fatherPubData = f.fatherPubData;
};

//��������ʵ��
father::~father() 
{
	cout << "father is destructed" << endl;
}

#pragma endregion



#pragma region ��Ԫ����

//��Ԫ����ʵ��
void fatherfriendfunc(father f)
{
	cout << "father friend function" << endl;
	cout << f.fatherPriData << endl;//����˽������
	f.fatherPrifunc();              //����˽�к���
	cout << f.fatherProData << endl;//���ʱ�������
	f.fatherProfunc();              //���ʱ�������

}

#pragma endregion











#include <iostream>
using namespace std;
void test3()
{
	cout << sizeof(G) << endl;
}

struct I
{
	char _c;   //1
	double _d; // 16
	int _a;  // 20
	char _c2;  //21
};

void test4()
{
	I oi;
	cout << (char*)&oi._c2 - (char*)&oi << endl;
}

union U
{
	int _a;
	char _c;
};
void test5()
{
	int a = 1;  //0x 00 00 00 01
	char* pa = (char*)&a;
	if (*pa == 1)
		cout << "littel end" << endl;
	else
		cout << "big end" << endl;
	U u;
	u._a = 1;
	if (u._c == 1)
		cout << "littel end" << endl;
	else
		cout << "big end" << endl;

}
//int main()
//{
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}

//class Date
//{
//public:
//	//void Display(Date* const this) ʼ��ָ��ǰ���ô˺����Ķ���ָ�򲻻ᷢ������  
//	//thisָ�����ͣ�������* const
//	//thisָ��ֻ�����ڳ�Ա������
//	//thisʼ����Ϊ��Ա�����ĵ�һ���β�
//	//�������Զ����ݣ�����Ҫ��ʽ����˲���
//	//this������ĳ�Ա��ֻ��һ�������βΣ�һ�����ջ�ϣ�һ������Ż������ڼĴ�����
//	void Display()  
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//		//this = nullptr;
//		this->_year = 2022;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void fun1()
//	{
//		cout << "Date::fun1()" << endl;
//	}
////private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
//};


//int main()
//{
//	Date d1, d2;
//	d1.SetDate(2018, 5, 1);
//	d2.SetDate(2018, 7, 1);
//	d1.Display();
//	d2.Display();
//
//	Date* pd1 = &d1;
//	pd1->Display();
//	pd1 = nullptr;
//	//this�ڲ��������õĳ����¿���Ϊ��
//	//pd1->Display();  thisָ��գ��������쳣
//	pd1->fun1(); //thisָ��Ϊ�գ�����thisû�н��н����ã���������ִ��
//	(*pd1).fun1();  //fun1(&(*pd1))
//	//fun1(pd1)
//	//pd1->_day = 1;
//
//	return 0;
//}

class AA
{
	//6����Ա����
public:
	//Ĭ�Ϲ���
	AA()
	{}
	AA(int a)
	{}
};



class Date
{
public:

	//���캯���� ��������������ͬ�� �޷���ֵ�� �������أ��������ڴ������Զ�����
	//ֻ�е���û�ж����κι��캯��ʱ���������Ż��Զ�����һ���޲ι��죬 ��������Ѿ������˹��캯��
	//�������������Զ����ɣ���ʹ����û����ʽ�����޲ι���

	//Ĭ�Ϲ��죺ֻ�ܴ���һ��
	// 1. ������Ĭ������
	// 2. ��ʾ������޲ι���
	// 3. ȫȱʡ���캯��
	/*Date()
	{

	}*/
	//ȫȱʡĬ�Ϲ���
	Date(int y = 2020, int m = 5, int d = 20)
	{
		_year = y;
		_month = m;
		_day = d;
	}
	//���صĹ��캯��
	Date(float f)
	{

	}

	void Display()
	{
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
		//this = nullptr;
		this->_year = 2022;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void fun1()
	{
		cout << "Date::fun1()" << endl;
	}
private:
	int _year; // ��
	int _month; // ��
	int _day; // ��
	//������д����Զ����Ա�� ���캯�����Զ������Զ����Ա��Ĭ�Ϲ��죬����Զ����Ա�ĳ�ʼ����
	//����Զ����Աû��Ĭ�Ϲ��캯�����������������
	AA _aa;
};

void test6()
{
	Date d;
	d.SetDate(2020, 5, 15);
	d.Display();

	Date d2(2020, 5, 20);
	d2.Display();

	Date d3();//����һ����������������޲ι���

	//Date d4(2020);

	Date d5(2.0f);

	AA a1;
	AA a2(3);

	int i = 3;
}

int main()
{
	test6();
	return 0;
}


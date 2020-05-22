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
//	//void Display(Date* const this) 始终指向当前调用此函数的对象，指向不会发生变量  
//	//this指针类型：类类型* const
//	//this指针只存在于成员函数中
//	//this始终作为成员函数的第一个形参
//	//编译器自动传递，不需要显式定义此参数
//	//this不是类的成员，只是一个函数形参，一般存在栈上，一般会做优化，存在寄存器中
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
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
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
//	//this在不做解引用的场景下可以为空
//	//pd1->Display();  this指针空，解引用异常
//	pd1->fun1(); //this指针为空，但是this没有进行解引用，程序正常执行
//	(*pd1).fun1();  //fun1(&(*pd1))
//	//fun1(pd1)
//	//pd1->_day = 1;
//
//	return 0;
//}

class AA
{
	//6个成员函数
public:
	//默认构造
	AA()
	{}
	AA(int a)
	{}
};



class Date
{
public:

	//构造函数： 函数名和类名相同， 无返回值， 可以重载，编译器在创建是自动调用
	//只有当类没有定义任何构造函数时，编译器才会自动生成一个无参构造， 如果类中已经定义了构造函数
	//编译器不会再自动生成，即使类中没有显式定义无参构造

	//默认构造：只能存在一个
	// 1. 编译器默认生成
	// 2. 显示定义的无参构造
	// 3. 全缺省构造函数
	/*Date()
	{

	}*/
	//全缺省默认构造
	Date(int y = 2020, int m = 5, int d = 20)
	{
		_year = y;
		_month = m;
		_day = d;
	}
	//重载的构造函数
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
	int _year; // 年
	int _month; // 月
	int _day; // 日
	//如果类中存在自定义成员， 则构造函数会自动调用自定义成员的默认构造，完成自定义成员的初始化，
	//如果自定义成员没有默认构造函数，则会产生编译错误
	AA _aa;
};

void test6()
{
	Date d;
	d.SetDate(2020, 5, 15);
	d.Display();

	Date d2(2020, 5, 20);
	d2.Display();

	Date d3();//声明一个函数，不会调用无参构造

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


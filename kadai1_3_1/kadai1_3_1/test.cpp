#include "test.h"
#include <iostream>


test::test()
{
	std::cout << "コンストラクタが呼ばれた" << std::endl;
}

test::~test()
{
	std::cout << "デストラクタが呼ばれた" << value << std::endl;
}

void test::setValue(int value_)
{
	value = value_;
}
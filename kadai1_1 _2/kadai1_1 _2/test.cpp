#include "test.h"
#include <iostream>

test::test()
{
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	hp = 2;
	attack = 3;
}

test::test(int a, int b)
{
	std::cout << "引数付きコンストラクタが呼ばれました" << std::endl;
	hp = a;
	attack = b;
}

test::test(const test& src)
{
	std::cout << "コピーコンストラクタが呼ばれました" << std::endl;
	hp = src.hp;
	attack = src.attack;
}
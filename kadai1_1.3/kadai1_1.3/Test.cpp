#include "Test.h"
#include <iostream>

int Test::count = 0;

Test::Test()
{
	count++;
}

Test::~Test()
{
	count--;
}

void Test::State(int a)
{
	num = a;
}

void Test::StatusDisplay() const
{
	std::cout << "状態表示" << num << std::endl;
}

void Test::InstanceCount()
{
	std::cout << "現在のインスタンス数" << count << std::endl;
}


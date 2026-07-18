#include <iostream>
#include "test.h"

int main()
{
    test Test;
    test* Test1 = new test;

    Test.setValue(10);
    Test1->setValue(20);
    delete Test1;
}


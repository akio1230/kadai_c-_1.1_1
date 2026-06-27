#include <iostream>
#include "Test.h"

int main()
{
    Test::InstanceCount();

    Test test;
    Test::InstanceCount();
    test.State(2);
    test.StatusDisplay();

    {
        Test test2;
        Test::InstanceCount();
        test.State(10);
        test.StatusDisplay();

        std::cout << "スコープを抜ける" << std::endl;
    }

    Test::InstanceCount();

    return 0;
    
}


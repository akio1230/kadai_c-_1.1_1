
#include <iostream>
#include "test.h"


void Call(test test3)
{
    test copy = test3;
}

int main()
{
    // コンストラクタの呼び出し
    test test1;  

    // 引数付きコンストラクタの呼び出し
    test test2(2, 3); 

    // コピーコンストラクタの呼び出し
    Call(test2);

    

}


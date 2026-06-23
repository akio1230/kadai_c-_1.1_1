// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "Character.h"

int main()
{
    Character Player;
    Character Enemy;

    std::cout << "プレイヤー" << std::endl;
    Player.StatusUpdate('a', 100, 10);
    Player.printStatus();

    std::cout << std::endl;

    std::cout << "敵" << std::endl;
    Enemy.StatusUpdate('b', 10, 2);
    Enemy.printStatus();

}


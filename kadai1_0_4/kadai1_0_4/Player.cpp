#include "Player.h"
#include <iostream>

namespace GameA
{
	void Player::printInfor() const
	{
		std::cout << "名前空間AのPlayerInforの呼び出し" << std::endl;
	}
}

namespace GameB
{
	void Player::printInfor() const
	{
		std::cout << "名前空間BのPlayerInforの呼び出し" << std::endl;
	}
}
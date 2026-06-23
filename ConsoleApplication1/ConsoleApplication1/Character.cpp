#include "Character.h"
#include <iostream>

void Character::StatusUpdate(char Name, int Hp, int Attack)
{
	name = Name;
	hp = Hp;
	attack = Attack;
}


void Character::printStatus()
{
	std::cout << "Œ»Ý‚Ìó‘Ô :" <<std::endl;
	std::cout << "–¼‘O :" << name << std::endl;
	std::cout << "HP :" << hp <<std::endl;
	std::cout << "Attack :" << attack <<std::endl;
}
#pragma once
class Character
{

private:
    char name = 'a';
    int hp = 0;
    int attack = 0;
    
public:
    void printStatus();
    void StatusUpdate(char Name,int Hp, int Attack);
};


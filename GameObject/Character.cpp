//Character.cpp

#include "../inc/GameObject/Character.hpp"

Character::Character(int x, int y)
    : GameObject(x, y)
    , _isHidden(false)
{

}

Character::Character(int x, int y, char symbol)
    : GameObject(x, y, symbol)
    , _isHidden(false)
{

}

Character::~Character()
{

}

bool Character::isHidden()
{
    return _isHidden;
}

void Character::isHidden(bool val)
{
    _isHidden = val;
}

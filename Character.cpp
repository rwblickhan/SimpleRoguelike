//Character.cpp

#include "Character.hpp"

Character::Character(int x, int y)
    : GameObject(x, y)
    , _isHidden(false);
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

// Character.hpp
// model for a generic character in the game
// TODO: make abstract

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "GameObject.hpp"

class Character : public GameObject
{

public:
    Character(int x, int y);
    ~Character();
    bool isHidden();
    void isHidden(bool val);
protected:
    Character(int x, int y, char symbol);
    bool _isHidden;
};

#endif

// PlayerCharacter.hpp
// model for player character

#ifndef __PLAYER_CHARACTER_HPP__
#define __PLAYER_CHARACTER_HPP__

#include "Character.hpp"

class PlayerCharacter : public Character
{
public:
    PlayerCharacter(int x, int y);
    ~PlayerCharacter();
};

#endif

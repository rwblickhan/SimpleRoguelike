#include <ncurses.h>
#include "Screen.hpp"
#include "Frame.hpp"

#ifndef __GAME_WORLD_HPP__
#define __GAME_WORLD_HPP__

class GameWorld
{
public:
    GameWorld();
    ~GameWorld();
private:
    Screen _mainScreen;
    Frame _gameMap;
    Frame _viewport;
    PlayerCharacter _player;
    bool _gameEnd;
}

#endif

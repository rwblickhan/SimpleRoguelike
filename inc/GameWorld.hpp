#include <ncurses.h>
#include "ui/Screen.hpp"
#include "ui/Frame.hpp"
#include "GameObject/PlayerCharacter.hpp"

#ifndef __GAME_WORLD_HPP__
#define __GAME_WORLD_HPP__

class GameWorld
{
public:
    GameWorld(Screen main);
    ~GameWorld();
    void handleKey(int input);
    void gameLoop(int input);
    static int main();
private:
    Screen _mainScreen;
    Frame _gameMap;
    Frame _viewport;
    PlayerCharacter _player;
    bool _gameEnd;
};

#endif

#include "inc/GameWorld.hpp"
#include "inc/GameObject/GameObject.hpp"

GameWorld::GameWorld(Screen main)
    : _gameMap(960, 1280, 0, 0)
    , _viewport(_gameMap, 480, 640, 0, 0)
    , _player(240, 320)
    , _gameEnd(false)
{
    _mainScreen = main;
    int input = getch();
    gameLoop(input);
}

void GameWorld::handleKey(int input)
{
    //TODO;
}

void GameWorld::gameLoop(int input)
{
    if ((input == 'q') || (input == 'Q')) return;

    _gameMap.draw(_player.y(), _player.x(), _player.symbol());
    _viewport.center(_player.y(), _player.x());
    _viewport.refresh();

    while (!_gameEnd)
    {
        input = getch();
        handleKey(input);
    }
}

int main()
{
    Screen scr;
    scr.print("Start game with any button.\nQ or q to quit.");
    new GameWorld(scr);
}

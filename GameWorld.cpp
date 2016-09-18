#include "GameWorld.hpp"

GameWorld::GameWorld()
    : _gameMap(2*_mainScreen.width(), 2*_mainScreen.height())
    , _viewport(_gameMap, _mainScreen.width(), _mainScreen.height()
    , _player(_gameMap.width()/2, _gameMap.height()/2)
    , _gameEnd(false);
{

}

void handleKey(int input)
{
    //TODO;
}

void gameLoop(int input)
{
    if ((input == 'q') || (input == 'Q')) return;

    _gameMap.draw(mainChar);
    _viewport.center(mainChar);
    _viewport.refresh();

    while (!_gameEnd)
    {
        input = getch();
        handleKey(input);
    }
}

int main()
{
    _mainScreen.print("Start game with any button.\nQ or q to quit.");
    int input = getch();
    gameLoop(input);
}

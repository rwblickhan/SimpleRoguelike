#include "inc/GameWorld.hpp"
#include "inc/GameObject/GameObject.hpp"

GameWorld::GameWorld()
    : _gameMap(960, 1280, 0, 0)
    , _viewport(_gameMap, 480, 640, 0, 0)
    , _player(240, 320)
    , _gameEnd(false)
{

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
    initscr();
    clear();
    noecho();
    cbreak();
    keypad(stdscr, true);
    curs_set(0);
    getmaxyx(stdscr, _height, _width);
    printw("Start game with any button.\nQ or q to quit.");
    GameWorld world = new GameWorld();
    int input = getch();
    world.gameLoop(input);
    endwin();
}

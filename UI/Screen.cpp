#include "../inc/UI/Screen.hpp"

Screen::Screen()
{
    initscr();
    clear();
    noecho();
    cbreak();
    keypad(stdscr, true);
    curs_set(0);
    getmaxyx(stdscr, _height, _width);
}

Screen::~Screen()
{
    endwin();
}

void Screen::print(const char* msg)
{
    printw(msg);
}

int Screen::height()
{
    return _height;
}

int Screen::width()
{
    return _width;
}

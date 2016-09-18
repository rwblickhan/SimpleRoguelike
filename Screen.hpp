#include <ncurses>

#ifndef __SCREEN_H__
#define __SCREEN_H__

class Screen
{
private:
    int _height, _width;

public:
    Screen();
    ~Screen();
    void print(const char* msg);
    int height();
    int width();
}

#endif

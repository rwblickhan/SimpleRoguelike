// Frame.hpp

#include <ncurses.h>
#include "../GameObject/Character.hpp"
#include "../GameObject/GameObject.hpp"

#ifndef __FRAME_HPP__
#define __FRAME_HPP__

class Frame {

private:
    int _height, _width;
    int _y, _x;
    bool _hasSuper;
    WINDOW* _window;
    WINDOW* _super;

public:
    Frame(int rows, int cols, int row_0, int col_0);
    Frame(WINDOW*& super, int rows, int cols, int row_0, int col_0);
    ~Frame();

    //getters
    int height();
    int width();
    int row();
    int col();
    WINDOW* window();
    WINDOW* superWindow();

    void draw(int x, int y, char c);
    void erase(int x, int y, char c);
    void refresh();
    void move(int row, int col);
    void fillWindow();
};

#endif

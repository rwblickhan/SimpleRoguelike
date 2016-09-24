// Frame.hpp

#include <ncurses.h>

#ifndef __FRAME_HPP__
#define __FRAME_HPP__

class Frame {

private:
    int _height, _width;
    int _row, _col;
    bool _hasSuper;
    WINDOW* _window;
    WINDOW* _super;

public:
    Frame(int rows, int cols, int row_0, int col_0);
    Frame(Frame& super, int rows, int cols, int row_0, int col_0);

    //getters
    int height();
    int width();
    int row();
    int col();
    WINDOW* window();
    WINDOW* superWindow();

    void draw(Character &c);
    void draw(Charcter &c, int row, int col);
    void erase(Character &c);
    void center(Character &c);
    void refresh();
    void move(int row, int col);
    void fillWindow();
}

#endif
